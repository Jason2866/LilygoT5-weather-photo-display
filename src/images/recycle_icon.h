const uint32_t recycle_icon_width = 50;
const uint32_t recycle_icon_height = 50;
const uint8_t recycle_icon_data[(50*50)/2] = {
0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFF, 0xFF, 0xFF, 0xEF, 0xAB, 0xAA, 0xAA, 0xAA, 0xAA, 0xBA, 0xFC, 0xAF, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xF4, 0xEF, 0x15, 0x10, 0xC6, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xEF, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFC, 0x0C, 0x00, 0x00, 0x00, 0xAC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x4A, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFF, 0x02, 0x00, 0x00, 0x00, 0xF2, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF5, 0x4F, 0xA4, 0xCC, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0xE4, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0xEF, 0xFF, 0xFF, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0xF4, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x10, 0x5E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xFF, 0xBF, 0xFF, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0xFF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 0x74, 0xEF, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xA4, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xFE, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF1, 0x4F, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xF4, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0xFF, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFA, 0x4C, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xFC, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xEF, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x4C, 0xFF, 0x02, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xAF, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0xE4, 0xCF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x50, 0xFF, 0x44, 0xFC, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x4F, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0xA4, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xAF, 0xA4, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xA4, 0xFF, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xA4, 0xFF, 0x4C, 0x00, 0x00, 0x00, 0xF8, 0x4F, 0xFF, 0xCF, 0x02, 0x00, 0x00, 0x00, 0x90, 0xFF, 0xFE, 0xFF, 0x4E, 0x44, 0x44, 
	0xCA, 0xCA, 0x4C, 0xAE, 0x4C, 0xFF, 0xFF, 0x2B, 0x00, 0x10, 0xFF, 0x44, 0xFE, 0x5A, 0x55, 0x55, 0x55, 0x55, 0xF5, 0xFF, 0xFF, 0xE6, 0xAF, 0x44, 0x44, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0xA0, 0xCF, 0x44, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x50, 0xFF, 0x44, 0x44, 
	0xFE, 0x7B, 0x77, 0x77, 0x77, 0x67, 0xF8, 0xFF, 0xEF, 0xF8, 0x4F, 0x44, 0xCC, 0xCE, 0xCE, 0xCE, 0xCE, 0xFF, 0xFF, 0x3B, 0x00, 0x00, 0xFB, 0x4C, 0x44, 
	0xFC, 0xBF, 0x02, 0x00, 0x00, 0x00, 0xB0, 0xCF, 0xFE, 0xFF, 0x4A, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFF, 0x5E, 0x00, 0x00, 0x00, 0xF3, 0x4F, 0x44, 
	0xA4, 0xFF, 0x2F, 0x00, 0x00, 0x00, 0x20, 0xFF, 0xA4, 0xFF, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFE, 0x8F, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xCF, 0x44, 
	0x44, 0xFC, 0x0C, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x4F, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xC4, 0xEF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x10, 0xFF, 0x44, 
	0x44, 0xFF, 0x02, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x4F, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFF, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x4F, 
	0xE4, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xFF, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFC, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xAF, 
	0xF4, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFB, 0x4A, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xF4, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xEF, 
	0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF3, 0x4F, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xA4, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
	0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0xA2, 0x4F, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFE, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 
	0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x70, 0xFF, 0xBF, 0xAF, 0x44, 0x44, 0x44, 0x44, 0x44, 0xEA, 0xCF, 0xF4, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
	0xFE, 0x08, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xCF, 0xFF, 0xEF, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFF, 0xFF, 0xC4, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x30, 0xEF, 
	0xF4, 0x2F, 0x00, 0x00, 0x00, 0x00, 0xF9, 0x4E, 0xC4, 0xFF, 0x44, 0x44, 0x44, 0x44, 0xC4, 0xCF, 0xFF, 0x44, 0xFF, 0x02, 0x00, 0x00, 0x00, 0xA0, 0xAF, 
	0xC4, 0xAF, 0x00, 0x00, 0x00, 0x20, 0xFF, 0x44, 0x44, 0xFA, 0x44, 0x44, 0x44, 0x44, 0xF4, 0x3F, 0xFF, 0x44, 0xFA, 0x0B, 0x00, 0x00, 0x00, 0xF7, 0x4F, 
	0x44, 0xFF, 0x03, 0x00, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x44, 0xFF, 0x18, 0xFF, 0xFF, 0xFF, 0x4F, 0x01, 0x11, 0xA2, 0xFF, 0x44, 
	0x44, 0xFA, 0x0C, 0x00, 0x00, 0xF4, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xEC, 0xEF, 0xA4, 0xEF, 0x10, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x8B, 0xAF, 0x44, 
	0x44, 0xF4, 0x6F, 0x00, 0x00, 0xAC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0xF4, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x4F, 0x44, 
	0x44, 0x44, 0xEF, 0x01, 0x60, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xEF, 0xFA, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0x44, 0x44, 
	0x44, 0x44, 0xFE, 0x08, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0x44, 0x44, 
	0x44, 0x44, 0xF4, 0x2F, 0xE7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x4F, 0x44, 0x44, 
	0x44, 0x44, 0xC4, 0xBF, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x4E, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0xFF, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0xFA, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xEF, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0xC4, 0xEF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x4F, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xFE, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xEF, 0xFF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF3, 0x4F, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xF4, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xEF, 0xF4, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x4A, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0xA4, 0xFF, 0x6B, 0x44, 0x44, 0x44, 0x44, 0x64, 0xEF, 0xE4, 0x8F, 0x00, 0x44, 0x44, 0x44, 0xA4, 0xFF, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x44, 0xFF, 0x12, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xC4, 0xEC, 0xEE, 0xEE, 0xEE, 0xEE, 0x4C, 0x44, 0xFC, 0x1B, 0xFF, 0xFE, 0xFC, 0xCC, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xF4, 0x6F, 0xEF, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xA4, 0xEF, 0xFF, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xFF, 0xEF, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4A, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	};
