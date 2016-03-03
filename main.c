#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ti84pce.h>

#include <DXSprites.h>

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <graphc.h>
#include <keypadc.h>

int Tiles[18][20] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 1, 1, 4, 1, 1, 1, 4, 1, 1, 1, 0, 0, 0, 0, 0 },
	{ 0, 0, 4, 2, 2, 2, 4, 2, 2, 2, 4, 2, 2, 2, 4, 2, 2, 2, 0, 0 },
	{ 0, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 0 },
	{ 4, 5, 5, 5, 4, 5, 5, 5, 4, 5, 5, 5, 4, 5, 5, 5, 4, 5, 5, 5 },
	{ 3, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4 },
	{ 2, 2, 4, 2, 2, 2, 4, 2, 2, 2, 4, 2, 2, 2, 4, 2, 2, 2, 4, 2 },
	{ 1, 4, 1, 1, 1, 4, 1, 1, 1, 4, 1, 1, 1, 4, 1, 1, 1, 4, 1, 1 },
	{ 0, 2, 2, 2, 4, 2, 2, 2, 4, 2, 2, 2, 4, 2, 2, 2, 4, 2, 2, 0 },
	{ 0, 0, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 3, 0, 0 },
	{ 0, 0, 0, 0, 0, 5, 4, 5, 5, 5, 4, 5, 5, 5, 4, 0, 0, 0, 0, 0 }
};

unsigned char OrangeWhiteColors[4] = { 0xBD, 0xB8, 0xB6, 0xB3 };

int i, j, k, l;
int PaddleX = 135, PaddleXCenter, PaddleYCenter = 228;
int BallX = 163, BallY = 219, BallXCenter, BallYCenter, BallXV, BallYV;
float CollW, CollH, CollDX, CollDY, CollWY, CollHX;
float BallAngle;
int deltaX, deltaY;
int moving = 0;
int block_color = 0x08;
int OWColor = 0;
uint8_t key;

void OrangeWhiteTile(int x, int y, int i){
	gc_SetColorIndex(OrangeWhiteColors[i]);
	gc_NoClipLine( x + 3, y + 3, x + 11, y + 3 );
	if(i > 3)
		i = 0;
	else
		i++;
	gc_SetColorIndex(OrangeWhiteColors[i]);
	gc_NoClipRectangleOutline( x + 2, y + 2, 11, 3 );
	if(i > 3)
		i = 0;
	else
		i++;
	gc_SetColorIndex(OrangeWhiteColors[i]);
	gc_NoClipRectangleOutline( x + 1, y + 1, 13, 5 );
	if(i > 3)
		i = 0;
	else
		i++;
	gc_SetColorIndex(OrangeWhiteColors[i]);
	gc_NoClipRectangleOutline( x, y, 15, 7);
	if(i > 3)
		i = 0;
	else
		i++;
}

void TileExplode(int i, int j){
	for( k = 0; k < 3; k++ ) {
		for( l = 0; l < 3; l++ ) {
			Tiles[(i - 1) + k][(j - 1) + l] = 0;
		}
	}
}

void drawTiles(){
	if(OWColor > 3)
		OWColor = 0;
	else
		OWColor++;
	for(i = 0; i < 18; i++){
		for(j = 0; j < 20; j++){
			/*switch( Tiles[i][j] ){
				case 1:
					block_color = 0x21;		//red
					break;
				case 2:
					block_color = 0x22;		//pink
					break;
				case 3:
					block_color = 0x24;		//purple-pink
					break;
				case 4:
					block_color = 0x27;		//white-orange
					break;
				case 5:
					block_color = 0x23;		//blue
					break;
				default:
					block_color = 0x02;		//background
					break;
			}*/
			
			if( Tiles[i][j] != 0 ){
				//gc_SetColorIndex(block_color);
				//gc_NoClipRectangle( (j * 15) + 10, i * 7, 15, 7 );
				if(Tiles[i][j] != 4)
					gc_NoClipDrawSprite(Tile[Tiles[i][j] - 1], (j * 15) + 10, i * 7, 15, 7);
				else
					OrangeWhiteTile((j * 15) + 10, i * 7, OWColor);
				if((BallX < ((j * 15) + 25)) && ((BallX + 5) > ((j * 15) + 10)) && (BallY < ((i * 7) + 7)) && ((BallY + 5) > (i * 7))){
					if(Tiles[i][j] != 4) {
						Tiles[i][j] = 0;
					} else {
						TileExplode(i, j);
					}
					if(((BallX + 5/2) - ((j * 15) + 25)) > 0) { //right
						if(((BallY + 5/2) - ((i * 7) + 7)) > 0) { //below
							BallYV = -BallYV;
						} else if(((BallY + 5/2) - ((i * 7) + 7)) < 0) { //above
							BallYV = -BallYV;
						} else {
							BallXV = -BallXV;
						}
					} else if(((BallX + 5/2) - ((j * 15) + 25)) < 0) { //left
						if(((BallY + 5/2) - ((i * 7) + 7)) > 0) { //below
							BallYV = -BallYV;
						} else if(((BallY + 5/2) - ((i * 7) + 7)) < 0) { //above
							BallYV = -BallYV;
						} else {
							BallXV = -BallXV;
						}
					} else {
						BallYV = -BallYV;
					}
				}
			}
		}
	}
}

void drawSides(){
	unsigned char sideColors[10] = { 0x1D, 0x19, 0x1E, 0x1F, 0x20, 0x20, 0x1F, 0x1E, 0x19, 0x1D };
		for( i = 0; i < 10; i++ ) {
			gc_SetColorIndex(sideColors[i]);
			gc_NoClipLine( i, 0, i, 240 );
			gc_NoClipLine( i + 310, 0, i + 310, 240 );
		}
}

void resetGame(){
	PaddleX = 135;
	PaddleYCenter = 228;
	BallX = 163;
	BallY = 219;
	moving = 0;
	block_color = 0x08;
}

int main(void){
	gc_InitGraph();
	gc_SetPalette(DXPalette, sizeof(DXPalette));
	gc_DrawBuffer();
	gc_SetTransparentColor(0x00);
	while(kb_ScanGroup(kb_group_6) != kb_Clear){
		key = kb_ScanGroup(kb_group_7);
		BallXCenter = BallX + 3;
		BallYCenter = BallY + 3;
		PaddleXCenter = PaddleX + 31;
		BallAngle = atan((BallYCenter - PaddleYCenter)/(BallXCenter - PaddleXCenter));
		gc_FillScrn(0x02);
		drawSides();
		drawTiles();
		gc_NoClipDrawTransparentSprite(DX_Ball, BallX, BallY, 5, 5);
		gc_NoClipDrawTransparentSprite(DX_Paddle, PaddleX, 224, 62, 8);
		if((key & kb_Left) && (PaddleX > 10)) {
			PaddleX-=8;
			if(!moving)
				BallX-=8;
		}
		if((key & kb_Right) && (PaddleX < 248)) {
			PaddleX+=8;
			if(!moving)
				BallX+=8;
		}
		if(kb_ScanGroup(kb_group_1) == kb_2nd && !moving){
			moving = 1;
			BallXV = 4;
			BallYV = -4;
		}
		if(moving) {
			BallX += BallXV;
			BallY += BallYV;
		}
		if(BallX + 5 > 310){
			BallXV = -BallXV;
			BallX = 305;
		}
		if(BallX < 10){
			BallXV = -BallXV;
			BallX = 10;
		}
		if(BallY < 0){
			BallYV = -BallYV;
			BallY = 0;
		}
		if((BallY > 219) && ((BallX < (PaddleX + 62)) && ((BallX + 5) > PaddleX) && (BallY < 232) && ((BallY + 5) > 224))){
			BallYV = -BallYV;
			BallY = 219;
		}
		if(BallY >= 235)
			resetGame();
		if(PaddleX < 10)
			PaddleX = 10;
		if(PaddleX > 248)
			PaddleX = 248;
		gc_SwapDraw();
	}
	gc_CloseGraph();
	return 0;
}
