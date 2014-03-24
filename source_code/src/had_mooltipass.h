/*
 * bitmap Had_Mooltipass
 */

#define HAD_MOOLTIPASS_WIDTH 256
#define HAD_MOOLTIPASS_HEIGHT 64

const struct {
    uint16_t width;
    uint8_t height;
    uint8_t depth;
    uint8_t flags;
    uint16_t dataSize;
    uint16_t data[1920];
} image_HaD_Mooltipass __attribute__((__progmem__)) = {
    HAD_MOOLTIPASS_WIDTH, HAD_MOOLTIPASS_HEIGHT, 4, 1, 3840,
    { 
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0x03a0,  0x0306,  0xf0f0,  0x0180,  0x0403,  0xf002,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x0e02,  0x0c1f,  0xf002,  0x30f0,  
     0x0401,  0x0415,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0x10f0,  0x0e02,  0x072f,  0xf0f0,  0x0310,  0x1506,  0xf004,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x0230,  0x2f0e,  0xf005,  
     0x02f0,  0x0516,  0xf004,  0x40f0,  0xf041,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xb0f0,  0x0e02,  0x0e1f,  0xf001,  0x01d0,  0x0426,  0x21f0,  
     0x0122,  0x0420,  0x1002,  0x0305,  0x0320,  0x5706,  0x0406,  0x1001,  
     0x0503,  0x0210,  0x2004,  0x2201,  0xf011,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0x0280,  0x1f0e,  0xf007,  0x03d0,  0x0516,  0x30f0,  0x0211,  
     0x0103,  0x0100,  0x0305,  0x0100,  0x0406,  0x0410,  0x0507,  0x3203,  
     0x0403,  0x0607,  0x0410,  0x0106,  0x0300,  0x0104,  0x1310,  0xf011,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x07a0,  0x0a2f,  0xd0f0,  0x2605,  
     0xf003,  0x0140,  0x0203,  0x0100,  0x0305,  0x0100,  0x0406,  0x0610,  
     0x7007,  0x0705,  0x0001,  0x0604,  0x0001,  0x0503,  0x0001,  0x0301,  
     0xf001,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x0820,  0x0770,  0x0e3f,  
     0xd0f0,  0x0536,  0x7003,  0xb001,  0x0304,  0x0100,  0x0305,  0x0100,  
     0x0406,  0x1710,  0x0470,  0x0107,  0x0400,  0x0106,  0x0300,  0x0105,  
     0x0100,  0x0103,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x20f0,  0x0a0d,  
     0x0750,  0xf05f,  0x07d0,  0x1526,  0x5002,  0xb011,  0x0304,  0x0100,  
     0x0305,  0x0100,  0x0507,  0x1710,  0x0570,  0x0108,  0x0500,  0x0107,  
     0x0300,  0x0105,  0x0100,  0x0104,  0xf0f0,  0x1100,  0xf0f0,  0xf0f0,  
     0xf0f0,  0x0af0,  0x0a0f,  0x0730,  0x066f,  0xb0f0,  0x0703,  0x2526,  
     0x3002,  0x0112,  0x04b0,  0x0003,  0x0601,  0x0003,  0x0701,  0x1005,  
     0x0807,  0x0570,  0x0108,  0x0500,  0x0107,  0x0300,  0x0106,  0x0100,  
     0x0104,  0x20f0,  0xb014,  0x0a09,  0xf0f0,  0xf0f0,  0xf0f0,  0x06f0,  
     0x0a1f,  0x0710,  0x088f,  0x90f0,  0x1704,  0x2526,  0x0204,  0x2210,  
     0xb001,  0x0304,  0x0100,  0x0406,  0x0100,  0x0507,  0x0710,  0x7008,  
     0x0805,  0x0002,  0x0705,  0x0001,  0x0604,  0x0001,  0x0401,  0xf001,  
     0x0210,  0x0706,  0x9002,  0x1e04,  0xf004,  0xf0f0,  0xf0f0,  0xe0f0,  
     0x0e01,  0x0a1f,  0xaf08,  0xf009,  0x0570,  0x1708,  0x2526,  0x1214,  
     0x1203,  0x02b0,  0x0304,  0x0100,  0x0406,  0x0100,  0x0508,  0x0710,  
     0x0209,  0x0860,  0x0109,  0x0500,  0x0108,  0x0400,  0x0106,  0x0100,  
     0x0304,  0x00f0,  0x1601,  0x0117,  0x0170,  0x1e0c,  0x010d,  0x90f0,  
     0x9b09,  0xf008,  0xf0f0,  0x80f0,  0xff04,  0xf00a,  0x0650,  0x1718,  
     0x2526,  0x2314,  0x4002,  0x1241,  0x1403,  0x0001,  0x0601,  0x0004,  
     0x0801,  0x1005,  0x1903,  0x3708,  0x1908,  0x1006,  0x0805,  0x0001,  
     0x0604,  0x1001,  0x0314,  0x4112,  0x0580,  0x0306,  0x0704,  0x7006,  
     0x0d09,  0x0b09,  0x080f,  0x80f0,  0xbf0a,  0xf009,  0xf0f0,  0x80f0,  
     0xff07,  0x010b,  0x10f0,  0x0701,  0x1728,  0x2526,  0x2314,  0x5001,  
     0x2211,  0x0213,  0x0530,  0x1002,  0x0305,  0x0220,  0x0605,  0x0738,  
     0x0306,  0x0320,  0x1005,  0x0502,  0x0130,  0x2132,  0x0480,  0x0405,  
     0x0610,  0x0408,  0x0550,  0x0c0d,  0x0201,  0x0f0e,  0xf003,  0x0a60,  
     0x0e0f,  0x7405,  0x1f06,  0xf009,  0xf0f0,  0x80f0,  0x0c02,  0x0cef,  
     0xf001,  0x0801,  0x2809,  0x2617,  0x1425,  0x0203,  0xf0f0,  0xd0f0,  
     0x2221,  0x0503,  0x2004,  0x1802,  0x3001,  0x0c02,  0x030d,  0x0810,  
     0x0c0f,  0x50f0,  0x0f0a,  0x030e,  0x0490,  0x091f,  0xf0f0,  0x0570,  
     0xf006,  0x01f0,  0x0704,  0x0305,  0x9f0c,  0x010d,  0x0120,  0x0403,  
     0x0506,  0x0204,  0x0130,  0x2829,  0x2617,  0x3104,  0xf0f0,  0xe0f0,  
     0x1221,  0x2403,  0x3001,  0x0804,  0x3007,  0x0c09,  0x3007,  0x0f0d,  
     0xf007,  0x0a30,  0x0e0f,  0xb003,  0x1f04,  0xf009,  0x40f0,  0x0b02,  
     0x0c1f,  0xf002,  0x20f0,  0x0b01,  0x0b8f,  0x0510,  0x1e0a,  0x2c1d,  
     0x060a,  0x1002,  0x1906,  0x1728,  0x0416,  0xf0f0,  0xf0f0,  0x4170,  
     0x0750,  0x0509,  0x0610,  0x0a0b,  0x0440,  0x011f,  0x10f0,  0x1f0a,  
     0xd003,  0x1f04,  0xf009,  0x20f0,  0x1f07,  0x1f1e,  0x0108,  0xf0f0,  
     0x0a20,  0x0c6f,  0x0300,  0x3e0c,  0x2c1d,  0x0a1b,  0x0106,  0x0600,  
     0x2809,  0x0617,  0xf003,  0xf0f0,  0xf0f0,  0x0130,  0x1219,  0x021b,  
     0x0a50,  0x0d0f,  0x083b,  0x5001,  0x0801,  0x0c2b,  0x031f,  0x04f0,  
     0x091f,  0xf0f0,  0x0d03,  0x0a1f,  0x0911,  0x0e1f,  0xf005,  0x20f0,  
     0x4f09,  0x010d,  0x1f07,  0x1d3e,  0x1b2c,  0x091a,  0x0002,  0x2807,  
     0x0317,  0xf0f0,  0xf0f0,  0x50f0,  0x2904,  0x050b,  0x0160,  0x5f0e,  
     0x050e,  0x0530,  0x5f0e,  0xf003,  0x0410,  0x0c1f,  0x083b,  0x0850,  
     0x2bfb,  0x0d1f,  0x3004,  0x0c03,  0x0b1f,  0xf001,  0x10f0,  0x2f07,  
     0x010e,  0x2f09,  0x1d3e,  0x1b2c,  0x092a,  0x0002,  0x1807,  0x0207,  
     0xf0f0,  0xf0f0,  0x10f0,  0x1605,  0x1001,  0x1a07,  0x1008,  0x1b08,  
     0x2003,  0x4402,  0x1f0b,  0x120c,  0x1f0c,  0x340b,  0x2002,  0x0d07,  
     0x3005,  0x2002,  0x0d03,  0x2009,  0x6f04,  0x020c,  0x0210,  0xff0c,  
     0x084f,  0x0670,  0x0f0e,  0xf009,  0x20f0,  0x0f06,  0x020e,  0x3f07,  
     0x1d3e,  0x1b2c,  0x192a,  0x1711,  0xf002,  0xf0f0,  0xf0f0,  0x0620,  
     0x0417,  0x0110,  0x0a09,  0x0001,  0x0c01,  0x0e0d,  0x9004,  0x0e05,  
     0x0e3f,  0x8005,  0x0f08,  0x2006,  0x0d0a,  0x0320,  0x0b0f,  0x0230,  
     0x0534,  0x0f0d,  0x150e,  0x0f0e,  0x050d,  0x14f4,  0x9002,  0x1f02,  
     0xf005,  0x20f0,  0x0304,  0x4f04,  0x1d3e,  0x1b2c,  0x192a,  0x0007,  
     0xf011,  0xf0f0,  0xf0f0,  0x0630,  0x2027,  0x0403,  0x0410,  0x0e1d,  
     0xa004,  0x0801,  0x081f,  0x9001,  0x0f08,  0x1006,  0x0f02,  0x200d,  
     0x0701,  0x9005,  0x0a01,  0x0a3f,  0xf001,  0x06e0,  0x0e0f,  0xf001,  
     0x30f0,  0x4f0d,  0x1d3e,  0x1b2c,  0x292a,  0xf004,  0xf0f0,  0xf0f0,  
     0x1650,  0x0805,  0x5002,  0x0c09,  0x0e0a,  0xc004,  0xb012,  0x0f08,  
     0x1006,  0x0f02,  0xf00d,  0x0610,  0x061f,  0xf0f0,  0x0b10,  0x0b0f,  
     0xf0f0,  0x0620,  0x3e5f,  0x2c1d,  0x2a1b,  0x0829,  0x80f0,  0x6001,  
     0x5001,  0x3201,  0x8001,  0x1201,  0xf011,  0x1690,  0x0802,  0x4005,  
     0x0c01,  0x0a08,  0x040e,  0x0640,  0x0908,  0x0206,  0x0360,  0x0907,  
     0x0508,  0x0840,  0x060f,  0x0300,  0x0f07,  0x060e,  0x0005,  0x0601,  
     0x1004,  0x0601,  0x0003,  0x0805,  0x0509,  0x1320,  0x0210,  0x0806,  
     0x0709,  0x5004,  0x0804,  0x0809,  0x0105,  0x0240,  0x0907,  0x0608,  
     0x3001,  0x0e01,  0x060f,  0xf0f0,  0x0d10,  0x3e5f,  0x2c1d,  0x2a1b,  
     0x0829,  0xf003,  0x1120,  0x0312,  0x0514,  0x0204,  0x0110,  0x0308,  
     0x0110,  0x0a06,  0x1c0b,  0x0e1d,  0x090d,  0x2001,  0x0a05,  0x1b0c,  
     0x191a,  0x0206,  0x0120,  0x1403,  0x1213,  0x9011,  0x0016,  0x4017,  
     0x0c05,  0x0a03,  0x040e,  0x0420,  0x4f0e,  0x4008,  0x4f0a,  0x030d,  
     0x0820,  0x060f,  0x0900,  0x0c3f,  0x0300,  0x0b0f,  0x0410,  0x090f,  
     0x0f0b,  0x1f0e,  0x010d,  0x0830,  0x0b5f,  0x0a30,  0x0d4f,  0x2003,  
     0x5f07,  0x3005,  0x1f04,  0xf002,  0x01f0,  0x3e6f,  0x2c1d,  0x2a1b,  
     0x0829,  0xf006,  0x7110,  0x0502,  0x0106,  0x0200,  0x0408,  0x0710,  
     0x070a,  0x2304,  0x0604,  0x0e0a,  0x100b,  0x0d04,  0x050b,  0x1304,  
     0x0302,  0x1804,  0x1001,  0x0215,  0x8071,  0x0016,  0x0805,  0x3002,  
     0x0b09,  0x0a00,  0x040e,  0x0110,  0x081f,  0x0001,  0x0e04,  0x070f,  
     0x0820,  0x0d0f,  0x0004,  0x0902,  0x0e0f,  0x1001,  0x0f08,  0x0006,  
     0x0301,  0x0d0f,  0x0102,  0x0300,  0x0b0f,  0x0410,  0x0e1f,  0x0004,  
     0x0a01,  0x0c0f,  0x0720,  0x0d0f,  0x0104,  0x0702,  0x0f0e,  0x1006,  
     0x0f06,  0x030c,  0x0200,  0x0f0a,  0x100c,  0x0f02,  0x040e,  0x0711,  
     0x011f,  0x0930,  0x0d0f,  0xf0f0,  0x4f06,  0x0c0e,  0x0d0b,  0x1d1e,  
     0x0b2c,  0x180a,  0x1839,  0x10f0,  0x7001,  0x0602,  0x0003,  0x0802,  
     0x1004,  0x090a,  0x0d70,  0x100f,  0x0d08,  0x6003,  0x0804,  0x0003,  
     0x0601,  0x7003,  0x8001,  0x0016,  0x0802,  0x2005,  0x0b01,  0x0007,  
     0x0e0a,  0x1004,  0x0f0b,  0x3008,  0x1f02,  0x0002,  0x1f03,  0x3001,  
     0x0f0a,  0x1009,  0x0f08,  0x1006,  0x0f02,  0x200d,  0x0f03,  0x100b,  
     0x1f04,  0x3004,  0x0f0d,  0x1004,  0x0f0d,  0x3003,  0x0f09,  0x1009,  
     0x0f0a,  0x3005,  0x0b0c,  0x0001,  0x0f06,  0x3008,  0x0b09,  0x4003,  
     0x0f0d,  0xf008,  0x09e0,  0x073f,  0x1100,  0x0700,  0x1d0e,  0x042c,  
     0x0530,  0x1819,  0xf001,  0x0100,  0x0170,  0x0406,  0x0200,  0x0408,  
     0x0a10,  0x7008,  0x0f0c,  0x0001,  0x0d09,  0x6002,  0x0803,  0x0003,  
     0x0601,  0x7003,  0x8001,  0x1016,  0x2018,  0x0b05,  0x0002,  0x0e0a,  
     0x1004,  0x011f,  0x0a40,  0x060f,  0x0700,  0x090f,  0x0240,  0x0e0f,  
     0x0810,  0x060f,  0x0210,  0x0d0f,  0x0320,  0x0b0f,  0x0410,  0x0c0f,  
     0x0640,  0x080f,  0x0120,  0x0640,  0x0a0f,  0x0710,  0x0c0f,  0x6003,  
     0x0f03,  0x050e,  0x03a0,  0x041f,  0xd0f0,  0x2f0a,  0x5005,  0x1d09,  
     0x051c,  0x0450,  0x1809,  0xf002,  0x0100,  0x0170,  0x0406,  0x0200,  
     0x0408,  0x0a10,  0x7008,  0x0f0c,  0x0001,  0x0d09,  0x6002,  0x0803,  
     0x0003,  0x0601,  0x7003,  0x8001,  0x1016,  0x0905,  0x1002,  0x0a09,  
     0x0a10,  0x040e,  0x0100,  0x0e0f,  0x0750,  0x080f,  0x0900,  0x060f,  
     0x1f50,  0x0001,  0x0f08,  0x1006,  0x0f02,  0x200d,  0x0f03,  0x100b,  
     0x0f04,  0x400a,  0x0f04,  0x300b,  0x0502,  0x0b08,  0x1f0e,  0x100a,  
     0x0d01,  0x0e1f,  0x050a,  0x3001,  0x2f0b,  0x060b,  0x7001,  0x0f07,  
     0x010e,  0xc0f0,  0x1f0b,  0x600e,  0x1d01,  0x0b0c,  0x2870,  0xf003,  
     0x0100,  0x0170,  0x0406,  0x0200,  0x0408,  0x0a10,  0x7008,  0x0f0c,  
     0x0001,  0x0d09,  0x6002,  0x0803,  0x0003,  0x0601,  0x7003,  0x8001,  
     0x1016,  0x0902,  0x0005,  0x0b01,  0x1006,  0x0e0a,  0x0004,  0x0f03,  
     0x500c,  0x0f06,  0x000a,  0x0f0b,  0x5005,  0x0f0e,  0x0002,  0x0f08,  
     0x1006,  0x0f02,  0x200d,  0x0f03,  0x100b,  0x0f04,  0x4009,  0x0f02,  
     0x100d,  0x0c02,  0x0e2f,  0x0f1a,  0x200a,  0x0801,  0x3f0d,  0x3006,  
     0x0c07,  0x093f,  0x0c70,  0x0a0f,  0xc0f0,  0x1f0a,  0x6006,  0x0b01,  
     0x0c0d,  0x0109,  0x0560,  0x0218,  0x00f0,  0x7001,  0x0601,  0x0004,  
     0x0802,  0x1004,  0x080a,  0x0b70,  0x010e,  0x0900,  0x020d,  0x0360,  
     0x0308,  0x0100,  0x0306,  0x0170,  0x1680,  0x1820,  0x0500,  0x020b,  
     0x0a10,  0x040e,  0x0100,  0x0e0f,  0x0850,  0x080f,  0x0900,  0x060f,  
     0x1f50,  0x0001,  0x0f08,  0x1006,  0x0f02,  0x200d,  0x0f03,  0x100b,  
     0x0f04,  0x400a,  0x0f04,  0x100b,  0x0f0d,  0x050b,  0x1002,  0x0f06,  
     0x500a,  0x0702,  0x1f0c,  0x4004,  0x0601,  0x1f0b,  0x6008,  0x1f08,  
     0xf001,  0x08b0,  0x021f,  0x0340,  0x0e0a,  0x1c1d,  0x070b,  0x4001,  
     0x1803,  0xf001,  0x1100,  0x0360,  0x0306,  0x0200,  0x0408,  0x1a10,  
     0x5001,  0x0e02,  0x100d,  0x0d08,  0x6006,  0x0805,  0x0002,  0x0601,  
     0x7004,  0x8001,  0x2016,  0x0906,  0x0802,  0x2009,  0x0e0a,  0x1004,  
     0x011f,  0x0b40,  0x060f,  0x0700,  0x0a0f,  0x0340,  0x0e0f,  0x0810,  
     0x060f,  0x0210,  0x0d0f,  0x0320,  0x0b0f,  0x0410,  0x0d0f,  0x0840,  
     0x080f,  0x0400,  0x0d0f,  0x0840,  0x0b0f,  0x0410,  0x4007,  0x0f0a,  
     0x0008,  0x0603,  0x3002,  0x0f07,  0x500c,  0x1f05,  0xf004,  0x07c0,  
     0x051f,  0x0120,  0x2e0c,  0x2c1d,  0x071b,  0x0530,  0x0118,  0x00f0,  
     0x2231,  0x0403,  0x0115,  0x0200,  0x0408,  0x0510,  0x091a,  0x1918,  
     0x0d0b,  0x070e,  0x0310,  0x0a1c,  0x1708,  0x0706,  0x0618,  0x0420,  
     0x0405,  0x1203,  0x9031,  0x2016,  0x0902,  0x0a07,  0x2005,  0x0e0a,  
     0x1004,  0x0f09,  0x3009,  0x1f03,  0x0001,  0x1f02,  0x3002,  0x0f0b,  
     0x1009,  0x0f08,  0x1006,  0x0f01,  0x200e,  0x0f03,  0x100b,  0x1f04,  
     0x2004,  0x0e01,  0x030f,  0x0500,  0x0d0f,  0x0230,  0x0f0e,  0x100b,  
     0x0f0c,  0x3007,  0x0f09,  0x0006,  0x0f08,  0x300a,  0x0f06,  0x400a,  
     0x1f03,  0xf006,  0x04d0,  0x0c1f,  0x0110,  0x3e0c,  0x2c1d,  0x0a1b,  
     0x2007,  0x0807,  0xf007,  0x1130,  0x2312,  0x2002,  0x0601,  0x2001,  
     0x0603,  0x0907,  0x092a,  0x0308,  0x0130,  0x0706,  0x0738,  0x0305,  
     0x1240,  0x1213,  0xa011,  0x3016,  0x1a09,  0x2001,  0x0e0a,  0x1004,  
     0x0e01,  0x0a0f,  0x0204,  0x1f06,  0x2007,  0x0f08,  0x060e,  0x0402,  
     0x0f0b,  0x010e,  0x0810,  0x060f,  0x1f20,  0x0609,  0x0300,  0x0b0f,  
     0x0410,  0x062f,  0x0402,  0x0f0d,  0x1009,  0x1f02,  0x0308,  0x0602,  
     0x1f0d,  0x100c,  0x0f05,  0x080e,  0x0814,  0x011f,  0x0200,  0x0a1f,  
     0x0305,  0x0e07,  0x040f,  0x0130,  0x0f0e,  0xf009,  0x0ef0,  0x0b1f,  
     0x0c04,  0x3e0f,  0x0a0d,  0x1c08,  0x1a1b,  0x0306,  0x0907,  0x0408,  
     0xf0f0,  0xf0f0,  0x40f0,  0x3016,  0x0a06,  0x3008,  0x0e0a,  0x2004,  
     0x0c02,  0x074f,  0x0740,  0x0c4f,  0x2002,  0x0f08,  0x2006,  0x2f09,  
     0x0300,  0x0b0f,  0x0410,  0x0c0f,  0x3f0a,  0x3009,  0x4f06,  0x010a,  
     0x011f,  0x0710,  0x0e4f,  0x2002,  0x0e04,  0x054f,  0x0c40,  0x0b0f,  
     0xf0f0,  0x0800,  0x3e5f,  0x110c,  0x0c0a,  0x2a1b,  0x0829,  0x0001,  
     0xf013,  0xf0f0,  0xf0f0,  0x1110,  0x0130,  0x0102,  0x0230,  0x0103,  
     0x0340,  0x0706,  0x0105,  0x0160,  0x0503,  0x0204,  0x0940,  0x070f,  
     0x0230,  0x0405,  0x0100,  0x0204,  0x0410,  0x0b0f,  0x0300,  0x0216,  
     0x0150,  0x0705,  0x0205,  0x0310,  0x0104,  0x0120,  0x0705,  0x0306,  
     0x0460,  0x0316,  0x4001,  0x0f0a,  0x010d,  0xd0f0,  0x050a,  0x0100,  
     0x3e5f,  0x1008,  0x0c05,  0x2a1b,  0x0629,  0x0300,  0x0317,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xb0f0,  0x0f09,  0xc006,  0x0f04,  0xf00b,  0xc0f0,  
     0x0f08,  0x020e,  0xd0f0,  0x1f0b,  0x0004,  0x4f07,  0x063e,  0x0410,  
     0x1b0c,  0x192a,  0x0108,  0x2702,  0x0306,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xa0f0,  0x0f09,  0xc006,  0x0f04,  0xf00b,  0xb0f0,  0x1f05,  0xf004,  
     0x01c0,  0x3f0c,  0x0003,  0x3f0c,  0x063e,  0x0302,  0x0c04,  0x2a1b,  
     0x0419,  0x1802,  0x1617,  0xf003,  0xf0f0,  0xf0f0,  0xf0f0,  0x0990,  
     0x060f,  0x01c0,  0x0b0f,  0xf0f0,  0x03a0,  0x061f,  0x90f0,  0x0011,  
     0x0d02,  0x0e4f,  0x0e12,  0x3e2f,  0x0b09,  0x060c,  0x1b0c,  0x092a,  
     0x0105,  0x1728,  0x0326,  0xf0f0,  0xf0f0,  0x2120,  0x1312,  0x1514,  
     0x1716,  0x1918,  0x1b2a,  0x1d1c,  0x9dce,  0x1001,  0x6f09,  0x044e,  
     0x0610,  0x6e1f,  0xdcdd,  0x0c6b,  0x081f,  0x70f0,  0x0a02,  0xaf0d,  
     0x110e,  0x1f0d,  0x1d3e,  0x1b2c,  0x062a,  0x3801,  0x2617,  0x0405,  
     0x1405,  0x0103,  0xf0f0,  0xc0f0,  0x1221,  0x1403,  0x1615,  0x1817,  
     0x1a19,  0x0c1b,  0x1e1d,  0x7fff,  0x1001,  0xbf0a,  0x1004,  0xff06,  
     0xdfff,  0xf00b,  0x0770,  0x0def,  0x0e11,  0x3e0f,  0x2c1d,  0x2a1b,  
     0x0004,  0x2807,  0x2617,  0x1425,  0x0213,  0xf0f0,  0xf0f0,  0xf1c0,  
     0xa261,  0x0120,  0x01b2,  0x0110,  0xe3f3,  0x05d4,  0xf001,  0x0860,  
     0x0aff,  0x0c10,  0x3e0f,  0x2c1d,  0x2a1b,  0x1004,  0x1806,  0x2617,  
     0x1425,  0x0223,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0x0360,  0x0a2f,  0x08bf,  0x0820,  0x2e0f,  0x1d0a,  0x0a1c,  0x0b06,  
     0x012a,  0x0620,  0x1708,  0x2526,  0x0214,  0x0213,  0xf001,  0x4130,  
     0x4180,  0x0150,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x70f0,  0x1f0c,  
     0x0008,  0x9f04,  0x3007,  0x0f03,  0x081e,  0x0600,  0x1c0d,  0x0005,  
     0x092a,  0x0540,  0x2617,  0x0425,  0x1003,  0x4022,  0x1211,  0x0123,  
     0x0120,  0x0604,  0x4817,  0x3005,  0x0804,  0x2839,  0x0106,  0x0210,  
     0x0106,  0x0110,  0x0302,  0x1122,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0x1fc0,  0x2008,  0x7f04,  0x5005,  0x0e0a,  0x010c,  0x0a10,  0x090c,  
     0x0410,  0x041a,  0x0550,  0x2607,  0x0325,  0x1230,  0x7001,  0x0311,  
     0x0104,  0x0410,  0x0406,  0x0342,  0x0906,  0x1006,  0x0903,  0x0407,  
     0x2203,  0x0403,  0x0117,  0x0300,  0x0105,  0x1310,  0xf011,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0x0f03,  0x4008,  0x5f04,  0x7008,  0x4002,  
     0x3002,  0x7011,  0x2607,  0x0315,  0x0250,  0x9001,  0x0401,  0x1002,  
     0x0405,  0x1870,  0x0610,  0x0109,  0x0460,  0x0207,  0x0300,  0x0105,  
     0x0100,  0x0203,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x10f0,  0x0805,  
     0x0460,  0x084f,  0xc0f0,  0x0536,  0x7004,  0x9001,  0x0301,  0x1002,  
     0x0405,  0x0770,  0x1008,  0x0806,  0x6001,  0x0603,  0x0002,  0x0502,  
     0x0001,  0x0301,  0xf001,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x0110,  
     0x0480,  0x053f,  0xc0f0,  0x2605,  0xf004,  0x0130,  0x0203,  0x0510,  
     0x7003,  0x0806,  0x0610,  0x0108,  0x0360,  0x0206,  0x0200,  0x0105,  
     0x0100,  0x0103,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xc0f0,  0x2f07,  
     0xf001,  0x03c0,  0x0516,  0x40f0,  0x0301,  0x1002,  0x0304,  0x0670,  
     0x1007,  0x0705,  0x6001,  0x0602,  0x0002,  0x0402,  0x0001,  0x0301,  
     0xf001,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x03b0,  0x0b2f,  0xd0f0,  
     0x2601,  0xf004,  0x0340,  0x1002,  0x0304,  0x0670,  0x1007,  0x0705,  
     0x0270,  0x0205,  0x0200,  0x0104,  0x0100,  0x0103,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xa0f0,  0x3f03,  0xf002,  0x03e0,  0x0516,  0xf003,  
     0x0120,  0x0102,  0x1410,  0x0160,  0x1016,  0x0704,  0x6003,  0x0504,  
     0x0001,  0x0402,  0x1001,  0xf012,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0x0390,  0x053f,  0xf0f0,  0x0400,  0x1506,  0xf003,  0x1211,  0x0220,  
     0x1324,  0x0514,  0x0216,  0x0110,  0x4426,  0x0415,  0x0210,  0x0104,  
     0x0110,  0x1102,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x60f0,  0x0e03,  
     0x0c1f,  0xf002,  0x20f0,  0x2502,  0xe003,  0x4021,  0x0201,  0x4403,  
     0x0103,  0x0130,  0x1403,  0x2405,  0x0203,  0x0120,  0x4002,  0xf011,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x1a60,  0x0407,  0xf0f0,  0x0160,  
     0x0302,  0xf001,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  
     0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0xf0f0,  0x40f0,      }
};
