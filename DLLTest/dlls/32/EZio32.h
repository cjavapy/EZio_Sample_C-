namespace Ezio32
{

#define EZWEB_API __declspec(dllimport)

#ifdef __cplusplus
	extern "C" {
#endif

		EZWEB_API int  __stdcall sendbuf(char *ch1, int len);
		EZWEB_API int __stdcall sendcommand(char *command);
		EZWEB_API int __stdcall setbaudrate(int rate);
		EZWEB_API int  __stdcall RcvBuf(unsigned char * buf, int len);
		EZWEB_API int __stdcall openport(char *comprt);
		EZWEB_API int  __stdcall GetDllVersion(char *buf);
		EZWEB_API void __stdcall closeport();
		EZWEB_API int __stdcall OpenUSB(char *usbID);
		EZWEB_API int __stdcall FindFirstUSB(char *usbID);
		EZWEB_API int __stdcall FindNextUSB(char *usbID);
		EZWEB_API int __stdcall setup(int mm, int dark, int speed, int mode, int gap, int top);
		EZWEB_API int __stdcall ecTextOutFine(int x, int y, int height, char *fontname, char *TEXT, int width, int weight, int degree, int Italic, int Underline, int StrikeOut, int Inverse);
		EZWEB_API int __stdcall OpenDriver(char *usbID);
		EZWEB_API int __stdcall putimage(int x, int y, char *fname, int degree);
		EZWEB_API int __stdcall putimage_Halftone(int x, int y, char *fname, int degree, int nHalftone);
		EZWEB_API int __stdcall ecTextOut(int x, int y, int height, char *fontname, char *TEXT);
		EZWEB_API int __stdcall intloadimage(char *fname, char *name, char *type);
		EZWEB_API int __stdcall ecTextDownLoad(int height, char *fontname, char *TEXT, int width, int weight, int degree, char *name);
		EZWEB_API int __stdcall downloadimage(char *fname, int degree, char *name);
		EZWEB_API int __stdcall ecTextOutR(int x, int y, int height, char *fontname, char *TEXT, int width, int weight, int degree);
		EZWEB_API int __stdcall extloadimage(char *fname, char *name, char *type);
		EZWEB_API int __stdcall FindFirstNet(char *cIP, char *cPort);
		EZWEB_API int __stdcall FindNextNet(char *cIP, char *cPort);
		EZWEB_API int __stdcall OpenNet(char *cIP, char *cPort);
		EZWEB_API int __stdcall ecTextOutW(int x, int y, int height, char *fontname, char *TEXT, int len);
		EZWEB_API int __stdcall ecTextOutRW(int x, int y, int height, char *fontname, char *TEXT, int width, int weight, int deg, int len);
		EZWEB_API int __stdcall ecTextOutFineW(int x, int y, int height, char *fontname, char *TEXT, int width, int weight, int deg, int Italic, int Underline, int StrikeOut, int Inverse, int len);
		EZWEB_API int __stdcall ecTextDownLoadW(int height, char *fontname, char *TEXT, int width, int weight, int deg, char *name, int len);
		EZWEB_API int __stdcall Bar(char *BarcodeType, int PosX, int PosY, int Narrow, int Wide, int Height, int Rotation, int Readable, char *data);
		EZWEB_API int __stdcall Bar_S(char *BarcodeType, int PosX, int PosY, char *data);
		EZWEB_API int __stdcall Bar_GS1DataBar(char *BarcodeType, int PosX, int PosY, int Narrow, int Segment, int Height, int Rotation, int Readable, char *data);
		EZWEB_API int __stdcall Bar_GS1DataBar_S(char *BarcodeType, int PosX, int PosY, char *data);
		EZWEB_API int __stdcall Bar_PDF417(int PosX, int PosY, int Width, int Height, int Row, int Column, int ErrorLevel, int Len, int Rotation, char *data);
		EZWEB_API int __stdcall Bar_PDF417_S(int PosX, int PosY, int Len, char *data);
		EZWEB_API int __stdcall Bar_MicroPDF417(int PosX, int PosY, int Width, int Height, int Mode, int Len, int Rotation, char *data);
		EZWEB_API int __stdcall Bar_MicroPDF417_S(int PosX, int PosY, int Len, char *data);
		EZWEB_API int __stdcall Bar_Maxicode(int PosX, int PosY, int SymbolNo, int SetNo, int Mode, char *CountryCode, char *PostalCode, char *Class, int Rotation, char *data);
		EZWEB_API int __stdcall Bar_Maxicode_S(int PosX, int PosY, char *CountryCode, char *PostalCode, char *Class, int Rotation, char *data);
		EZWEB_API int __stdcall Bar_DataMatrix(int PosX, int PosY, int Enlarge, char *RotationR, int Len, char *data);
		EZWEB_API int __stdcall Bar_DataMatrix_S(int PosX, int PosY, int Len, char *data);
		EZWEB_API int __stdcall Bar_QRcode(int PosX, int PosY, int Mode, int Type, char *ErrorLevel, int Mask, int Mul, int Len, int Rotation, char *data);
		EZWEB_API int __stdcall Bar_QRcode_S(int PosX, int PosY, int Len, char *data);
		EZWEB_API int __stdcall Bar_QRcodeW(int PosX, int PosY, int Mode, int Type, char *ErrorLevel, int Mask, int Mul, int Len, int Rotation, char *data);
		EZWEB_API int __stdcall Bar_QRcodeW_S(int PosX, int PosY, int Len, char *data);
		EZWEB_API int __stdcall Bar_Aztec(int PosX, int PosY, int Rotation, int Mul, char *ECICs, int Type, char *MenuSymbol, int Len, char *data);
		EZWEB_API int __stdcall Bar_Aztec_S(int PosX, int PosY, int Len, char *data);

		EZWEB_API int __stdcall ecTextOutW_Align(int x, int y, int height, int Align, LPSTR fontname, unsigned short int * TEXT, int len);
		EZWEB_API int __stdcall ecTextOutRW_Align(int x, int y, int height, int Align, LPSTR fontname, unsigned short int * TEXT, int width, int weight, int deg, int len);
		EZWEB_API int __stdcall ecTextOutFineW_Align(int x, int y, int height, int Align, LPSTR fontname, unsigned short int * TEXT, int width, int weight, int deg, int Italic, int Underline, int StrikeOut, int Inverse, int len);

#ifdef __cplusplus
	}
#endif

}