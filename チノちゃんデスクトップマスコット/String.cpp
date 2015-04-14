
#include "Global.h"

/*---------------------------
	文字描画
---------------------------*/
void DrawStringAPI( int _x, int _y, const char *_string, COLORREF _color )
{
	// 描画する（文字の）背景を透明に
	SetBkMode( hdc, TRANSPARENT );
	// 文字の色を白に
	SetTextColor( hdc, _color );
	// 文字描画
	TextOut( hdc, _x, _y, _string, lstrlen( _string ) );	

	return;
}

/*---------------------------
	フォント作成
---------------------------*/
HFONT CreateFontToHandleAPI( char *_FontName, int _size, int _weight )
{
	HFONT hFont;
	hFont = CreateFont(
		_size,		// フォント高さ（サイズ？）
		0,
		0,
		0,
		_weight*100,
		FALSE,
		FALSE,
		FALSE,
		SHIFTJIS_CHARSET,
		OUT_DEFAULT_PRECIS,
		CLIP_DEFAULT_PRECIS,
		PROOF_QUALITY,	// PROOF_QUALITY // ANTIALIASED_QUALITY
		FIXED_PITCH | FF_MODERN,
		_FontName
	);

	return hFont;
}

/*---------------------------
	自作フォント使用して文字描画
---------------------------*/
void DrawStringToHandleAPI( int _x, int _y, const char *_string, COLORREF _color, HFONT hFont )
{
	// 描画する（文字の）背景を透明に
	SetBkMode( hdc, TRANSPARENT );
	// 文字の色を白に
	SetTextColor( hdc, _color );

	// フォント変更
	SelectObject( hdc, hFont );

	// 文字描画
	TextOut( hdc, _x, _y, _string, lstrlen( _string ) );

	// フォント変更を終了
	DeleteObject( hFont );

	return;
}