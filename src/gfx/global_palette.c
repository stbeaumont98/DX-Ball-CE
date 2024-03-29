unsigned char global_palette[512] =
{
    0x00, 0x7c, /*   0: rgb(255,   0,   0) */
    0x00, 0x00, /*   1: rgb(  0,   0,   0) */
    0xff, 0xff, /*   2: rgb(255, 255, 255) */
    0xc6, 0x18, /*   3: rgb( 49,  49,  49) */
    0x29, 0x25, /*   4: rgb( 74,  73,  74) */
    0xce, 0x39, /*   5: rgb(115, 113, 115) */
    0x31, 0xc6, /*   6: rgb(140, 142, 140) */
    0xb5, 0xd6, /*   7: rgb(173, 174, 173) */
    0x39, 0xe7, /*   8: rgb(206, 206, 206) */
    0xde, 0xfb, /*   9: rgb(247, 247, 247) */
    0x1f, 0x21, /*  10: rgb( 66,  65, 255) */
    0x0e, 0x00, /*  11: rgb(  0,   0, 115) */
    0x11, 0x00, /*  12: rgb(  0,   0, 140) */
    0x12, 0x00, /*  13: rgb(  0,   0, 148) */
    0x14, 0x00, /*  14: rgb(  0,   0, 165) */
    0x17, 0x00, /*  15: rgb(  0,   0, 189) */
    0x1a, 0x00, /*  16: rgb(  0,   0, 214) */
    0x8e, 0x80, /*  17: rgb(  0,  36, 115) */
    0xa0, 0x80, /*  18: rgb(  0,  45,   0) */
    0x11, 0x01, /*  19: rgb(  0,  65, 140) */
    0x12, 0x81, /*  20: rgb(  0,  69, 148) */
    0x20, 0x81, /*  21: rgb(  0,  77,   0) */
    0x54, 0x01, /*  22: rgb(  0,  81, 165) */
    0x60, 0x01, /*  23: rgb(  0,  89,   0) */
    0x6e, 0x01, /*  24: rgb(  0,  89, 115) */
    0x76, 0x01, /*  25: rgb(  0,  89, 181) */
    0x69, 0x81, /*  26: rgb(  0,  93,  74) */
    0x80, 0x81, /*  27: rgb(  0, 101,   0) */
    0xb1, 0x01, /*  28: rgb(  0, 105, 140) */
    0xb9, 0x01, /*  29: rgb(  0, 105, 206) */
    0xc0, 0x01, /*  30: rgb(  0, 113,   0) */
    0xcd, 0x01, /*  31: rgb(  0, 113, 107) */
    0xdb, 0x01, /*  32: rgb(  0, 113, 222) */
    0xd3, 0x81, /*  33: rgb(  0, 117, 156) */
    0xe0, 0x01, /*  34: rgb(  0, 121,   0) */
    0x14, 0x02, /*  35: rgb(  0, 130, 165) */
    0x0d, 0x82, /*  36: rgb(  0, 134, 107) */
    0x10, 0x82, /*  37: rgb(  0, 134, 132) */
    0x20, 0x02, /*  38: rgb(  0, 138,   0) */
    0x2e, 0x82, /*  39: rgb(  0, 142, 115) */
    0x36, 0x82, /*  40: rgb(  0, 142, 181) */
    0x52, 0x02, /*  41: rgb(  0, 146, 148) */
    0x60, 0x02, /*  42: rgb(  0, 154,   0) */
    0x70, 0x02, /*  43: rgb(  0, 154, 132) */
    0x73, 0x82, /*  44: rgb(  0, 158, 156) */
    0x80, 0x82, /*  45: rgb(  0, 166,   0) */
    0xb1, 0x02, /*  46: rgb(  0, 170, 140) */
    0xb4, 0x02, /*  47: rgb(  0, 170, 165) */
    0xbc, 0x82, /*  48: rgb(  0, 174, 230) */
    0xc0, 0x82, /*  49: rgb(  0, 182,   0) */
    0xf2, 0x02, /*  50: rgb(  0, 186, 148) */
    0xf6, 0x02, /*  51: rgb(  0, 186, 181) */
    0x14, 0x83, /*  52: rgb(  0, 198, 165) */
    0x18, 0x83, /*  53: rgb(  0, 198, 197) */
    0x20, 0x83, /*  54: rgb(  0, 206,   0) */
    0x35, 0x83, /*  55: rgb(  0, 206, 173) */
    0x39, 0x83, /*  56: rgb(  0, 206, 206) */
    0x7a, 0x03, /*  57: rgb(  0, 219, 214) */
    0x77, 0x83, /*  58: rgb(  0, 223, 189) */
    0x1d, 0x84, /*  59: rgb(  8,   4, 239) */
    0x2a, 0x04, /*  60: rgb(  8,   8,  82) */
    0x21, 0x84, /*  61: rgb(  8,  12,   8) */
    0x97, 0x85, /*  62: rgb(  8, 101, 189) */
    0x1d, 0x06, /*  63: rgb(  8, 130, 239) */
    0xd9, 0x87, /*  64: rgb(  8, 247, 206) */
    0x42, 0x08, /*  65: rgb( 16,  16,  16) */
    0xbd, 0x0b, /*  66: rgb( 16, 235, 239) */
    0x63, 0x0c, /*  67: rgb( 25,  24,  25) */
    0x84, 0x10, /*  68: rgb( 33,  32,  33) */
    0xb4, 0x92, /*  69: rgb( 33, 174, 165) */
    0x3e, 0x13, /*  70: rgb( 33, 202, 247) */
    0x0d, 0x14, /*  71: rgb( 41,   0, 107) */
    0xa5, 0x14, /*  72: rgb( 41,  40,  41) */
    0xb9, 0x14, /*  73: rgb( 41,  40, 206) */
    0xbf, 0x14, /*  74: rgb( 41,  40, 255) */
    0x05, 0x96, /*  75: rgb( 41, 134,  41) */
    0x1a, 0x96, /*  76: rgb( 41, 134, 214) */
    0x85, 0x16, /*  77: rgb( 41, 162,  41) */
    0x9f, 0x16, /*  78: rgb( 41, 162, 255) */
    0xc5, 0x96, /*  79: rgb( 41, 182,  41) */
    0xfb, 0x16, /*  80: rgb( 41, 186, 222) */
    0xf5, 0x96, /*  81: rgb( 41, 190, 173) */
    0x45, 0x17, /*  82: rgb( 41, 210,  41) */
    0x58, 0x17, /*  83: rgb( 41, 210, 197) */
    0x9a, 0x17, /*  84: rgb( 41, 227, 214) */
    0xc5, 0x97, /*  85: rgb( 41, 247,  41) */
    0xfc, 0x97, /*  86: rgb( 41, 255, 230) */
    0xff, 0x97, /*  87: rgb( 41, 255, 255) */
    0x60, 0x19, /*  88: rgb( 49,  89,   0) */
    0xe7, 0x1c, /*  89: rgb( 58,  57,  58) */
    0x0f, 0x20, /*  90: rgb( 66,   0, 123) */
    0xc0, 0xa0, /*  91: rgb( 66,  53,   0) */
    0x08, 0x21, /*  92: rgb( 66,  65,  66) */
    0xa0, 0xa1, /*  93: rgb( 66, 109,   0) */
    0x11, 0x24, /*  94: rgb( 74,   0, 140) */
    0x00, 0x26, /*  95: rgb( 74, 130,   0) */
    0x13, 0x28, /*  96: rgb( 82,   0, 156) */
    0x00, 0xa9, /*  97: rgb( 82,  69,   0) */
    0x4a, 0x29, /*  98: rgb( 82,  81,  82) */
    0x21, 0x2c, /*  99: rgb( 90,   8,   8) */
    0x28, 0x2c, /* 100: rgb( 90,   8,  66) */
    0x20, 0xae, /* 101: rgb( 90, 142,   0) */
    0xff, 0xaf, /* 102: rgb( 90, 255, 255) */
    0x16, 0x30, /* 103: rgb( 99,   0, 181) */
    0x20, 0xb1, /* 104: rgb( 99,  77,   0) */
    0x6c, 0xb1, /* 105: rgb( 99,  93,  99) */
    0x60, 0x32, /* 106: rgb( 99, 154,   0) */
    0x17, 0x34, /* 107: rgb(107,   0, 189) */
    0x60, 0xb5, /* 108: rgb(107,  93,   0) */
    0xad, 0x35, /* 109: rgb(107, 105, 107) */
    0x02, 0x38, /* 110: rgb(115,   0,  16) */
    0x4a, 0x38, /* 111: rgb(115,  16,  82) */
    0x80, 0xba, /* 112: rgb(115, 166,   0) */
    0x3a, 0x3c, /* 113: rgb(123,   8, 214) */
    0x80, 0xbc, /* 114: rgb(123,  36,   0) */
    0xb6, 0x3c, /* 115: rgb(123,  40, 181) */
    0x00, 0x3d, /* 116: rgb(123,  65,   0) */
    0xa0, 0x3d, /* 117: rgb(123, 105,   0) */
    0xef, 0x3d, /* 118: rgb(123, 121, 123) */
    0xc0, 0x3e, /* 119: rgb(123, 178,   0) */
    0x01, 0x40, /* 120: rgb(132,   0,   8) */
    0x07, 0x40, /* 121: rgb(132,   0,  58) */
    0x0d, 0x40, /* 122: rgb(132,   0, 107) */
    0xed, 0xc0, /* 123: rgb(132,  61, 107) */
    0xc0, 0xc1, /* 124: rgb(132, 117,   0) */
    0x10, 0xc2, /* 125: rgb(132, 134, 132) */
    0x0e, 0x44, /* 126: rgb(140,   0, 115) */
    0x7c, 0xc4, /* 127: rgb(140,  28, 230) */
    0xac, 0x44, /* 128: rgb(140,  40,  99) */
    0x01, 0x47, /* 129: rgb(140, 194,   8) */
    0x00, 0x48, /* 130: rgb(148,   0,   0) */
    0x08, 0x48, /* 131: rgb(148,   0,  66) */
    0x0f, 0x48, /* 132: rgb(148,   0, 123) */
    0x0e, 0x49, /* 133: rgb(148,  65, 115) */
    0x00, 0xc9, /* 134: rgb(148,  69,   0) */
    0xe0, 0x49, /* 135: rgb(148, 121,   0) */
    0x01, 0xca, /* 136: rgb(148, 134,   8) */
    0x52, 0x4a, /* 137: rgb(148, 146, 148) */
    0x40, 0xcb, /* 138: rgb(148, 215,   0) */
    0x00, 0x4c, /* 139: rgb(156,   0,   0) */
    0x10, 0x4c, /* 140: rgb(156,   0, 132) */
    0x20, 0x4d, /* 141: rgb(156,  73,   0) */
    0x2f, 0x4d, /* 142: rgb(156,  73, 123) */
    0x73, 0xce, /* 143: rgb(156, 158, 156) */
    0x62, 0xcf, /* 144: rgb(156, 223,  16) */
    0x00, 0x50, /* 145: rgb(165,   0,   0) */
    0x09, 0x50, /* 146: rgb(165,   0,  74) */
    0x11, 0xd0, /* 147: rgb(165,   4, 140) */
    0xbf, 0x50, /* 148: rgb(165,  40, 255) */
    0xc0, 0xd0, /* 149: rgb(165,  53,   0) */
    0x40, 0xd1, /* 150: rgb(165,  85,   0) */
    0x40, 0x52, /* 151: rgb(165, 146,   0) */
    0x94, 0xd2, /* 152: rgb(165, 166, 165) */
    0x0a, 0x54, /* 153: rgb(173,   0,  82) */
    0x45, 0x54, /* 154: rgb(173,  16,  41) */
    0x51, 0x55, /* 155: rgb(173,  81, 140) */
    0xc0, 0x55, /* 156: rgb(173, 113,   0) */
    0x65, 0x56, /* 157: rgb(173, 154,  41) */
    0xc3, 0x57, /* 158: rgb(173, 243,  25) */
    0x00, 0x58, /* 159: rgb(181,   0,   0) */
    0x12, 0xd8, /* 160: rgb(181,   4, 148) */
    0x2c, 0xd8, /* 161: rgb(181,  12,  99) */
    0x40, 0xd9, /* 162: rgb(181,  85,   0) */
    0x52, 0xd9, /* 163: rgb(181,  85, 148) */
    0xe0, 0x59, /* 164: rgb(181, 121,   0) */
    0x60, 0xda, /* 165: rgb(181, 158,   0) */
    0xd6, 0xda, /* 166: rgb(181, 182, 181) */
    0x00, 0x5c, /* 167: rgb(189,   0,   0) */
    0xc5, 0x5d, /* 168: rgb(189, 113,  41) */
    0xa2, 0x5e, /* 169: rgb(189, 170,  16) */
    0xf7, 0x5e, /* 170: rgb(189, 186, 189) */
    0xf7, 0xde, /* 171: rgb(189, 190, 189) */
    0x00, 0x60, /* 172: rgb(197,   0,   0) */
    0x0b, 0x60, /* 173: rgb(197,   0,  90) */
    0x14, 0x60, /* 174: rgb(197,   0, 165) */
    0x73, 0x61, /* 175: rgb(197,  89, 156) */
    0x80, 0x61, /* 176: rgb(197,  97,   0) */
    0x20, 0xe2, /* 177: rgb(197, 142,   0) */
    0xb5, 0x64, /* 178: rgb(206,  40, 173) */
    0x80, 0x65, /* 179: rgb(206,  97,   0) */
    0x95, 0x65, /* 180: rgb(206,  97, 173) */
    0xc0, 0xe6, /* 181: rgb(206, 182,   0) */
    0xe5, 0xe7, /* 182: rgb(206, 255,  41) */
    0x00, 0x68, /* 183: rgb(214,   0,   0) */
    0xa5, 0x68, /* 184: rgb(214,  40,  41) */
    0xaf, 0x68, /* 185: rgb(214,  40, 123) */
    0xc7, 0xe9, /* 186: rgb(214, 117,  58) */
    0xe7, 0x69, /* 187: rgb(214, 121,  58) */
    0x4c, 0x6a, /* 188: rgb(214, 146,  99) */
    0xc0, 0xea, /* 189: rgb(214, 182,   0) */
    0x7a, 0x6b, /* 190: rgb(214, 219, 214) */
    0x0c, 0x6c, /* 191: rgb(222,   0,  99) */
    0x16, 0x6c, /* 192: rgb(222,   0, 181) */
    0xa0, 0xed, /* 193: rgb(222, 109,   0) */
    0xb6, 0xed, /* 194: rgb(222, 109, 181) */
    0xe7, 0x6d, /* 195: rgb(222, 121,  58) */
    0x4c, 0x6e, /* 196: rgb(222, 146,  99) */
    0x6e, 0xee, /* 197: rgb(222, 158, 115) */
    0x8e, 0x6e, /* 198: rgb(222, 162, 115) */
    0xa1, 0x6e, /* 199: rgb(222, 170,   8) */
    0xa4, 0xee, /* 200: rgb(222, 174,  33) */
    0x00, 0xef, /* 201: rgb(222, 198,   0) */
    0x03, 0xef, /* 202: rgb(222, 198,  25) */
    0x25, 0x6f, /* 203: rgb(222, 202,  41) */
    0x00, 0xf0, /* 204: rgb(230,   4,   0) */
    0xb8, 0x70, /* 205: rgb(230,  40, 197) */
    0x8a, 0x72, /* 206: rgb(230, 162,  82) */
    0x8d, 0x72, /* 207: rgb(230, 162, 107) */
    0x00, 0xf3, /* 208: rgb(230, 198,   0) */
    0x37, 0x73, /* 209: rgb(230, 202, 189) */
    0x38, 0xf3, /* 210: rgb(230, 206, 197) */
    0x25, 0x76, /* 211: rgb(239, 138,  41) */
    0x6c, 0xf6, /* 212: rgb(239, 158,  99) */
    0xf3, 0xf6, /* 213: rgb(239, 190, 156) */
    0x0e, 0x77, /* 214: rgb(239, 194, 115) */
    0x36, 0xf7, /* 215: rgb(239, 206, 181) */
    0x37, 0xf7, /* 216: rgb(239, 206, 189) */
    0x58, 0x77, /* 217: rgb(239, 210, 197) */
    0x60, 0xf7, /* 218: rgb(239, 223,   0) */
    0xa9, 0x77, /* 219: rgb(239, 235,  74) */
    0xbd, 0x77, /* 220: rgb(239, 235, 239) */
    0x0e, 0xf8, /* 221: rgb(247,   4, 115) */
    0x19, 0xf8, /* 222: rgb(247,   4, 206) */
    0xa5, 0x78, /* 223: rgb(247,  40,  41) */
    0xd4, 0xf8, /* 224: rgb(247,  53, 165) */
    0xf8, 0x79, /* 225: rgb(247, 121, 197) */
    0xe1, 0xf9, /* 226: rgb(247, 125,   8) */
    0x5a, 0x7a, /* 227: rgb(247, 146, 214) */
    0x8e, 0xfa, /* 228: rgb(247, 166, 115) */
    0xe4, 0x7a, /* 229: rgb(247, 186,  33) */
    0x35, 0x7b, /* 230: rgb(247, 202, 173) */
    0x36, 0xfb, /* 231: rgb(247, 206, 181) */
    0x80, 0x7b, /* 232: rgb(247, 227,   0) */
    0xa0, 0x7b, /* 233: rgb(247, 235,   0) */
    0xa5, 0x7b, /* 234: rgb(247, 235,  41) */
    0xb2, 0x7c, /* 235: rgb(255,  40, 148) */
    0xbd, 0x7c, /* 236: rgb(255,  40, 239) */
    0x35, 0x7d, /* 237: rgb(255,  73, 173) */
    0x7c, 0xfe, /* 238: rgb(255, 158, 230) */
    0x7d, 0xfe, /* 239: rgb(255, 158, 239) */
    0x85, 0x7e, /* 240: rgb(255, 162,  41) */
    0xbf, 0xfe, /* 241: rgb(255, 174, 255) */
    0xf1, 0x7e, /* 242: rgb(255, 186, 140) */
    0xe8, 0xfe, /* 243: rgb(255, 190,  66) */
    0x05, 0xff, /* 244: rgb(255, 198,  41) */
    0x34, 0x7f, /* 245: rgb(255, 202, 165) */
    0x23, 0xff, /* 246: rgb(255, 206,  25) */
    0x68, 0xff, /* 247: rgb(255, 223,  66) */
    0xa1, 0x7f, /* 248: rgb(255, 235,   8) */
    0xa3, 0xff, /* 249: rgb(255, 239,  25) */
    0xaa, 0xff, /* 250: rgb(255, 239,  82) */
    0xdc, 0x7f, /* 251: rgb(255, 243, 230) */
    0xe4, 0x7f, /* 252: rgb(255, 251,  33) */
    0xe6, 0xff, /* 253: rgb(255, 255,  49) */
    0xea, 0xff, /* 254: rgb(255, 255,  82) */
    0xf0, 0xff, /* 255: rgb(255, 255, 132) */
};
