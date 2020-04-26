#include "BitmapFile.h"

int BitmapLoad(Image *img, const char *path) {
	BITMAPFILEHEADER * fileHeader = new BITMAPFILEHEADER();
	BITMAPINFOHEADER * infoHeader = new BITMAPINFOHEADER();

	FILE *stream;
	errno_t errno;
	errno = fopen_s(&stream, path, "rb");

	if (errno != 0) {
		printf("ERROR: 파일 로드 중 에러가 발생했습니다. (%d)", errno);
		return errno;
	}

	fread(fileHeader, sizeof(BITMAPFILEHEADER), 1, stream);
	fread(infoHeader, sizeof(BITMAPINFOHEADER), 1, stream);

	if (fileHeader->bfType != 0x4D42) {
		printf("ERROR: 올바른 비트맵 파일이 아닙니다.");
		return -1;
	}

	if (infoHeader->biBitCount != 32) {
		printf("ERROR: 32bit 비트맵 파일이 아닙니다.");
		return -1;
	}

	int size = infoHeader->biSizeImage / 4;

	img->width = infoHeader->biWidth;
	img->height = infoHeader->biHeight;
	img->argb = new unsigned int[size];

	fread(img->argb, sizeof(unsigned int), size, stream);

	fclose(stream);

	delete fileHeader;
	delete infoHeader;

	return 0;
}

void BitmapDraw(Image *img, float px, float py) {
	for (int y = img->height - 1, i = 0; y > 0; y--, i++) {
		for (int x = 0; x < img->width; x++) {
			SetPixel(x + px, i + py, img->argb[y * img->width + x]);
		}
	}
}