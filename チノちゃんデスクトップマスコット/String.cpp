
#include "Global.h"

/*---------------------------
	�����`��
---------------------------*/
void DrawStringAPI( int _x, int _y, const char *_string, COLORREF _color )
{
	// �`�悷��i�����́j�w�i�𓧖���
	SetBkMode( hdc, TRANSPARENT );
	// �����̐F�𔒂�
	SetTextColor( hdc, _color );
	// �����`��
	TextOut( hdc, _x, _y, _string, lstrlen( _string ) );	

	return;
}

/*---------------------------
	�t�H���g�쐬
---------------------------*/
HFONT CreateFontToHandleAPI( char *_FontName, int _size, int _weight )
{
	HFONT hFont;
	hFont = CreateFont(
		_size,		// �t�H���g�����i�T�C�Y�H�j
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
	����t�H���g�g�p���ĕ����`��
---------------------------*/
void DrawStringToHandleAPI( int _x, int _y, const char *_string, COLORREF _color, HFONT hFont )
{
	// �`�悷��i�����́j�w�i�𓧖���
	SetBkMode( hdc, TRANSPARENT );
	// �����̐F�𔒂�
	SetTextColor( hdc, _color );

	// �t�H���g�ύX
	SelectObject( hdc, hFont );

	// �����`��
	TextOut( hdc, _x, _y, _string, lstrlen( _string ) );

	// �t�H���g�ύX���I��
	DeleteObject( hFont );

	return;
}