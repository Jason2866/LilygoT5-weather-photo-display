const uint32_t rain_icon_width = 50;
const uint32_t rain_icon_height = 50;
const uint8_t rain_icon_data[(50*50)/2] = {
0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4A, 0xA4, 0xA4, 0x44, 0x4A, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4A, 0x4A, 0xEA, 0xE4, 0xC4, 0xEA, 0xA4, 0xAA, 0xA4, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xA4, 0xA4, 0xE4, 0xFA, 0xF4, 0xFF, 0xFF, 0xF4, 0xFF, 0xC4, 0xA4, 0xA4, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xA4, 0xA4, 0x4F, 0xFF, 0xFF, 0xFC, 0xFF, 0xEF, 0xFF, 0x4A, 0xFE, 0xC4, 0xA4, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x4A, 0x4C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x11, 0xFF, 0xCF, 0x4A, 0x4A, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xA4, 0xA4, 0xFE, 0xF4, 0xFF, 0xFF, 0xFF, 0xAF, 0xFF, 0xFF, 0x14, 0x81, 0xFF, 0xF4, 0xFF, 0xAA, 0x24, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x4A, 0xFF, 0xF4, 0xFF, 0xFF, 0xFF, 0xAF, 0x84, 0xFF, 0xEF, 0x00, 0xF2, 0xFF, 0xFF, 0x4F, 0x4C, 0x40, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x4E, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0xA0, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0xFF, 0xEF, 0x01, 0x40, 0x4A, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0xA4, 0xA4, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x01, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xA4, 0xA4, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0xA4, 0xF4, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xAC, 0xFE, 0xAA, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x4A, 0xCE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEC, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x82, 0xFF, 0xFF, 0xFF, 0xFF, 0x44, 0x84, 0x44, 0x44, 
	0x44, 0x44, 0x4A, 0x4F, 0xFF, 0xFF, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0xB0, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0xA4, 0x44, 0x44, 
	0x44, 0xA4, 0xF4, 0xFF, 0xFF, 0xEF, 0x33, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0x0A, 0x10, 0x4A, 0x4A, 0x44, 
	0x44, 0xC4, 0xC4, 0xFE, 0xFF, 0x0B, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xFB, 0xFF, 0xFF, 0xFF, 0x08, 0xA1, 0x4F, 0x4A, 0x44, 
	0x44, 0x4A, 0xFF, 0xFF, 0xEF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEC, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xFC, 0xEF, 0xA4, 0x44, 
	0x44, 0x4C, 0xFA, 0xFF, 0xCF, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA4, 0x44, 
	0xA4, 0xF4, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x75, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x4E, 0x4A, 
	0x44, 0x4C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0xFF, 0xCF, 0x44, 
	0xA4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1B, 0xFA, 0xFF, 0xE4, 0xA4, 
	0x44, 0xC4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8B, 0x34, 0x01, 0x00, 0x10, 0x63, 0xE9, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xFE, 0xFF, 0xCF, 0x4A, 
	0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB3, 0xFF, 0xFF, 0x08, 0x30, 0xFF, 0xFF, 0x4F, 0x4C, 
	0xA4, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0xFF, 0x05, 0xC1, 0xFF, 0xFF, 0xEF, 0x4C, 
	0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF7, 0xCF, 0xFE, 0xFF, 0xFF, 0x4F, 0x4C, 
	0x44, 0xFA, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4C, 
	0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xFF, 0xFF, 0xFF, 0xCF, 0xA4, 
	0x44, 0xFA, 0xFF, 0xFF, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0x4C, 
	0xEA, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xFF, 0xFF, 0x4F, 0x4E, 
	0xA4, 0xF4, 0xFF, 0xAF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xEF, 0x4C, 
	0xE4, 0xFF, 0xFF, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xCE, 0xA4, 
	0xA4, 0xE4, 0xFF, 0x33, 0x66, 0x46, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x65, 0x46, 0xF3, 0xFF, 0xFF, 0x4A, 
	0xA4, 0xEF, 0xAF, 0xFC, 0xFF, 0xFF, 0xEF, 0x39, 0x00, 0x00, 0x53, 0x87, 0x33, 0x67, 0x04, 0x00, 0x00, 0x92, 0xFF, 0xFF, 0xFF, 0xAE, 0xFF, 0x4C, 0xA4, 
	0x44, 0xC4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0xFB, 0xFF, 0xFF, 0x58, 0xFF, 0xFF, 0x8C, 0x52, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x44, 
	0xA4, 0xCE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xFF, 0x68, 0xFF, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC4, 0x44, 
	0x44, 0x44, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x4A, 
	0xA4, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x68, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x4C, 0x44, 
	0x44, 0xA4, 0xC4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA4, 0x44, 
	0x44, 0x4A, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x68, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE4, 0x44, 0x44, 
	0x44, 0x44, 0x4A, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x4A, 0x44, 
	0x44, 0x44, 0x4A, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x68, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4C, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0xA4, 0xC4, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAC, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x4C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x68, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4C, 0x4E, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0xA4, 0xC4, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4A, 0x4A, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x4A, 0x4C, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x68, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4C, 0x4C, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xA4, 0xA4, 0xEC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x4F, 0x4C, 0x4A, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x4A, 0x4C, 0xCF, 0xEF, 0xFF, 0x7F, 0xF6, 0xFF, 0x67, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x4C, 0x4C, 0x4A, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xC4, 0xC4, 0xEE, 0x8F, 0xF1, 0xFF, 0x84, 0xFF, 0xFF, 0xFF, 0xEE, 0x4F, 0x4F, 0x4A, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x4A, 0x4A, 0x4E, 0xAE, 0xCF, 0x44, 0x58, 0xC3, 0xEF, 0xCF, 0xCE, 0xE4, 0x4A, 0x4E, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4A, 0x44, 0x4C, 0x4C, 0x48, 0xCF, 0xFC, 0xF4, 0xA4, 0x4F, 0x4A, 0x4A, 0x4A, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4C, 0x4A, 0x4C, 0xAC, 0xC4, 0xC4, 0x4A, 0x4F, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4A, 0xA4, 0xA4, 0x44, 0x4A, 0xA4, 0xA4, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	};
