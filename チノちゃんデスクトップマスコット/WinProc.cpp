
#include "Global.h"

/*=====================================
	ウィンドウプロシージャ
=====================================*/
LRESULT CALLBACK WndProc( HWND _hWnd, UINT _msg, WPARAM _wp, LPARAM _lp )
{

	// 画像ロード
	static Image hIMG_chino( L"chino50%.png" );

	switch( _msg )
	{
	/*----------------------------
		
	----------------------------*/
	/*----------------------------
		ウィンドウが作られたとき
	----------------------------*/
	case WM_CREATE:

		// カラーキー設定
		SetLayeredWindowAttributes(
			_hWnd,
			RGB(0,0,0),
			0,
			LWA_COLORKEY
		);
		
		break;

	/*----------------------------
		再描画が必要なとき
	----------------------------*/
	case WM_PAINT:

		PAINTSTRUCT ps_pai;

		// 描画開始
		hdc = BeginPaint( _hWnd, &ps_pai );

		// 描画処理
		DrawImage( 0, 0, &hIMG_chino );

		// 描画終了
		EndPaint( _hWnd, &ps_pai );
		
		break;

	/*----------------------------
		ウィンドウサイズが変更されたとき
	----------------------------*/
	case WM_SIZE:
		break;

	/*----------------------------
		×ボタン押されたとき
	----------------------------*/
	case WM_CLOSE:
		int id;
		id = MessageBox(
			hWnd,
			_T("終了しますか？"),
			_T("確認"),
			MB_YESNO | MB_ICONQUESTION
		);
		// 「はい」が押されたらウィンドウ破棄して終了
		if( id == IDYES ) DestroyWindow( hWnd );
		break;

	/*----------------------------
		マウス処理
	----------------------------*/
	// 左押下
	case WM_LBUTTONDOWN:
		PostMessage( _hWnd, WM_NCLBUTTONDOWN, (WPARAM)HTCAPTION, _lp );
		break;

	/*----------------------------
		ウィンドウが破棄されるとき
	----------------------------*/
	case WM_DESTROY:
		// プログラム終了リクエストを送る
		PostQuitMessage( 0 );
		break;

	/*----------------------------
		デフォルト処理
	----------------------------*/
	default:
		return DefWindowProc( _hWnd, _msg, _wp, _lp );
	}

	return 0;
}
