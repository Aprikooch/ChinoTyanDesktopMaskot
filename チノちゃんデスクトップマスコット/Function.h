
/*=====================================
	�E�B���h�E�v���V�[�W��
=====================================*/
GLOBAL LRESULT CALLBACK WndProc( HWND _hWnd, UINT _msg, WPARAM _wp, LPARAM _lp );

/*=====================================
	Image.cpp
=====================================*/
/*---------------------------
	�摜��ǂݍ����1�s�N�Z�����擾
---------------------------*/
GLOBAL void DrawImage( int _x, int _y, Image *_img );

/*=====================================
	String.cpp
=====================================*/
/*---------------------------
	�����`��
---------------------------*/
GLOBAL void DrawStringAPI( int _x, int _y, const char *_string, COLORREF _color );
/*---------------------------
	�t�H���g�쐬
---------------------------*/
GLOBAL HFONT CreateFontToHandleAPI( char *_FontName, int _size, int _weight );
/*---------------------------
	����t�H���g�g�p���ĕ����`��
---------------------------*/
GLOBAL void DrawStringToHandleAPI( int _x, int _y, const char *_string, COLORREF _color, HFONT hFont );

/*=====================================
	Window.cpp
=====================================*/
/*---------------------------
	�E�B���h�E�N���X�̓o�^
---------------------------*/
GLOBAL ATOM MakeWindowClass( HINSTANCE _hInst );
/*---------------------------
	�E�B���h�E�̍쐬
---------------------------*/
GLOBAL BOOL MakeWindow( HINSTANCE _hInst, int _nCmdShow );