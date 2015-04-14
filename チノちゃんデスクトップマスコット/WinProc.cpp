
#include "Global.h"

/*=====================================
	�E�B���h�E�v���V�[�W��
=====================================*/
LRESULT CALLBACK WndProc( HWND _hWnd, UINT _msg, WPARAM _wp, LPARAM _lp )
{

	// �摜���[�h
	static Image hIMG_chino( L"chino50%.png" );

	switch( _msg )
	{
	/*----------------------------
		
	----------------------------*/
	/*----------------------------
		�E�B���h�E�����ꂽ�Ƃ�
	----------------------------*/
	case WM_CREATE:

		// �J���[�L�[�ݒ�
		SetLayeredWindowAttributes(
			_hWnd,
			RGB(0,0,0),
			0,
			LWA_COLORKEY
		);
		
		break;

	/*----------------------------
		�ĕ`�悪�K�v�ȂƂ�
	----------------------------*/
	case WM_PAINT:

		PAINTSTRUCT ps_pai;

		// �`��J�n
		hdc = BeginPaint( _hWnd, &ps_pai );

		// �`�揈��
		DrawImage( 0, 0, &hIMG_chino );

		// �`��I��
		EndPaint( _hWnd, &ps_pai );
		
		break;

	/*----------------------------
		�E�B���h�E�T�C�Y���ύX���ꂽ�Ƃ�
	----------------------------*/
	case WM_SIZE:
		break;

	/*----------------------------
		�~�{�^�������ꂽ�Ƃ�
	----------------------------*/
	case WM_CLOSE:
		int id;
		id = MessageBox(
			hWnd,
			_T("�I�����܂����H"),
			_T("�m�F"),
			MB_YESNO | MB_ICONQUESTION
		);
		// �u�͂��v�������ꂽ��E�B���h�E�j�����ďI��
		if( id == IDYES ) DestroyWindow( hWnd );
		break;

	/*----------------------------
		�}�E�X����
	----------------------------*/
	// ������
	case WM_LBUTTONDOWN:
		PostMessage( _hWnd, WM_NCLBUTTONDOWN, (WPARAM)HTCAPTION, _lp );
		break;

	/*----------------------------
		�E�B���h�E���j�������Ƃ�
	----------------------------*/
	case WM_DESTROY:
		// �v���O�����I�����N�G�X�g�𑗂�
		PostQuitMessage( 0 );
		break;

	/*----------------------------
		�f�t�H���g����
	----------------------------*/
	default:
		return DefWindowProc( _hWnd, _msg, _wp, _lp );
	}

	return 0;
}
