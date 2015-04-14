
#include "Global.h"

/*---------------------------
	ウィンドウクラスの登録
---------------------------*/
ATOM MakeWindowClass( HINSTANCE _hInst )
{
	WNDCLASSEX WndClass;

	WndClass.cbSize			= sizeof( WNDCLASSEX );
	WndClass.style			= CS_HREDRAW | CS_VREDRAW;
	WndClass.lpfnWndProc	= WndProc;
	WndClass.cbClsExtra		= 0;
	WndClass.cbWndExtra		= 0;
	WndClass.hInstance		= _hInst;
	WndClass.hIcon			= (HICON)LoadImage( NULL, MAKEINTRESOURCE(IDI_APPLICATION), IMAGE_ICON, 0, 0, LR_DEFAULTSIZE | LR_SHARED );
	WndClass.hCursor		= (HCURSOR)LoadImage( NULL, MAKEINTRESOURCE(IDC_ARROW), IMAGE_CURSOR, 0, 0, LR_DEFAULTSIZE | LR_SHARED );
	WndClass.hbrBackground	= (HBRUSH)GetStockObject(BLACK_BRUSH);	// 背景色を黒に
	WndClass.lpszMenuName	= NULL;
	WndClass.lpszClassName	= _T("Aprikooch");	// ウィンドウクラス名
	WndClass.hIconSm		= (HICON)LoadImage( NULL, MAKEINTRESOURCE(IDI_APPLICATION), IMAGE_ICON, 0, 0, LR_DEFAULTSIZE | LR_SHARED );

	return (RegisterClassEx( &WndClass ));
}

/*---------------------------
	ウィンドウの作成
---------------------------*/
BOOL MakeWindow( HINSTANCE _hInst, int _nCmdShow )
{
	/*
	hWnd = CreateWindow(
		_T("Aprikooch"),
		_T("めうめう"),
		WS_OVERLAPPEDWINDOW,
		0,	// ウィンドウ初期位置x
		0,	// ウィンドウ初期位置y
		640,				// ウィンドウサイズx
		480,				// ウィンドウサイズy
		NULL,
		NULL,
		_hInst,
		NULL
	);
	*/

	hWnd = CreateWindowEx(
		WS_EX_LAYERED | WS_EX_TOPMOST | WS_EX_TOOLWINDOW,	// 透明をON、常時最前面、ツールウィンドウ（タスクバーが出ない）
		_T("Aprikooch"),
		_T("あぁ＾～"),
		//WS_OVERLAPPEDWINDOW,
		WS_POPUP,	// ポップアップウィンドウに
		0,			// ウィンドウ初期位置x
		0,			// ウィンドウ初期位置y
		325,		// ウィンドウサイズx
		486,		// ウィンドウサイズy
		NULL,
		NULL,
		_hInst,
		NULL
	);

	// ウィンドウ出現
	ShowWindow( hWnd, _nCmdShow );

	// ウィンドウ更新
	UpdateWindow( hWnd );

	return TRUE;
}
