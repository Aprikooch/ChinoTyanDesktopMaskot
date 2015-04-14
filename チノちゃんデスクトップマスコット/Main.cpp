
// Main.cppからGlobal.hを呼ぶ場合、externをつけないで変数を宣言する
#define GLOBAL_INSTANCE 
#include "Global.h"

/*=====================================
	WinMain
=====================================*/
int WINAPI WinMain( HINSTANCE hCurInst, HINSTANCE hPrevInst, LPSTR lpsCmdLine, int nCmdShow )
{
	// GDI+ 初期化処理
	GdiplusStartupInput GDIPStartupInput;
	ULONG_PTR GDIPToken;
	GdiplusStartup( &GDIPToken, &GDIPStartupInput, NULL );

	MSG msg;	// メッセージ
	BOOL bRet;

	if( !MakeWindowClass( hCurInst ) )
		return FALSE;
	if( !MakeWindow( hCurInst, nCmdShow ) )
		return FALSE;

	/*=====================================
		メインループ
	=====================================*/
	while( ( bRet = GetMessage( &msg, NULL, 0, 0 ) != 0 ) )
	{
		if( bRet == -1 )
		{
			break;
		}
		else
		{
			TranslateMessage( &msg );	// キーボードメッセージを文字メッセージに
			DispatchMessage( &msg );	// メッセージをウィンドウプロシージャへ送る
		}
	}

	// GDI+ 終了処理
	GdiplusShutdown( GDIPToken );

	return (int)msg.wParam;
}