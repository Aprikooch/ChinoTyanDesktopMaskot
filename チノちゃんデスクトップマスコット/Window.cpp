
#include "Global.h"

/*---------------------------
	�E�B���h�E�N���X�̓o�^
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
	WndClass.hbrBackground	= (HBRUSH)GetStockObject(BLACK_BRUSH);	// �w�i�F������
	WndClass.lpszMenuName	= NULL;
	WndClass.lpszClassName	= _T("Aprikooch");	// �E�B���h�E�N���X��
	WndClass.hIconSm		= (HICON)LoadImage( NULL, MAKEINTRESOURCE(IDI_APPLICATION), IMAGE_ICON, 0, 0, LR_DEFAULTSIZE | LR_SHARED );

	return (RegisterClassEx( &WndClass ));
}

/*---------------------------
	�E�B���h�E�̍쐬
---------------------------*/
BOOL MakeWindow( HINSTANCE _hInst, int _nCmdShow )
{
	/*
	hWnd = CreateWindow(
		_T("Aprikooch"),
		_T("�߂��߂�"),
		WS_OVERLAPPEDWINDOW,
		0,	// �E�B���h�E�����ʒux
		0,	// �E�B���h�E�����ʒuy
		640,				// �E�B���h�E�T�C�Yx
		480,				// �E�B���h�E�T�C�Yy
		NULL,
		NULL,
		_hInst,
		NULL
	);
	*/

	hWnd = CreateWindowEx(
		WS_EX_LAYERED | WS_EX_TOPMOST | WS_EX_TOOLWINDOW,	// ������ON�A�펞�őO�ʁA�c�[���E�B���h�E�i�^�X�N�o�[���o�Ȃ��j
		_T("Aprikooch"),
		_T("�����O�`"),
		//WS_OVERLAPPEDWINDOW,
		WS_POPUP,	// �|�b�v�A�b�v�E�B���h�E��
		0,			// �E�B���h�E�����ʒux
		0,			// �E�B���h�E�����ʒuy
		325,		// �E�B���h�E�T�C�Yx
		486,		// �E�B���h�E�T�C�Yy
		NULL,
		NULL,
		_hInst,
		NULL
	);

	// �E�B���h�E�o��
	ShowWindow( hWnd, _nCmdShow );

	// �E�B���h�E�X�V
	UpdateWindow( hWnd );

	return TRUE;
}
