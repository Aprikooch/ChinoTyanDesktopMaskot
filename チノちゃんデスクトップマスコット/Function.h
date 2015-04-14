
/*=====================================
	ウィンドウプロシージャ
=====================================*/
GLOBAL LRESULT CALLBACK WndProc( HWND _hWnd, UINT _msg, WPARAM _wp, LPARAM _lp );

/*=====================================
	Image.cpp
=====================================*/
/*---------------------------
	画像を読み込んで1ピクセルずつ取得
---------------------------*/
GLOBAL void DrawImage( int _x, int _y, Image *_img );

/*=====================================
	String.cpp
=====================================*/
/*---------------------------
	文字描画
---------------------------*/
GLOBAL void DrawStringAPI( int _x, int _y, const char *_string, COLORREF _color );
/*---------------------------
	フォント作成
---------------------------*/
GLOBAL HFONT CreateFontToHandleAPI( char *_FontName, int _size, int _weight );
/*---------------------------
	自作フォント使用して文字描画
---------------------------*/
GLOBAL void DrawStringToHandleAPI( int _x, int _y, const char *_string, COLORREF _color, HFONT hFont );

/*=====================================
	Window.cpp
=====================================*/
/*---------------------------
	ウィンドウクラスの登録
---------------------------*/
GLOBAL ATOM MakeWindowClass( HINSTANCE _hInst );
/*---------------------------
	ウィンドウの作成
---------------------------*/
GLOBAL BOOL MakeWindow( HINSTANCE _hInst, int _nCmdShow );