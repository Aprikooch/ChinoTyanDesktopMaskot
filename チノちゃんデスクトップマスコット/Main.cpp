
// Main.cpp����Global.h���Ăԏꍇ�Aextern�����Ȃ��ŕϐ���錾����
#define GLOBAL_INSTANCE 
#include "Global.h"

/*=====================================
	WinMain
=====================================*/
int WINAPI WinMain( HINSTANCE hCurInst, HINSTANCE hPrevInst, LPSTR lpsCmdLine, int nCmdShow )
{
	// GDI+ ����������
	GdiplusStartupInput GDIPStartupInput;
	ULONG_PTR GDIPToken;
	GdiplusStartup( &GDIPToken, &GDIPStartupInput, NULL );

	MSG msg;	// ���b�Z�[�W
	BOOL bRet;

	if( !MakeWindowClass( hCurInst ) )
		return FALSE;
	if( !MakeWindow( hCurInst, nCmdShow ) )
		return FALSE;

	/*=====================================
		���C�����[�v
	=====================================*/
	while( ( bRet = GetMessage( &msg, NULL, 0, 0 ) != 0 ) )
	{
		if( bRet == -1 )
		{
			break;
		}
		else
		{
			TranslateMessage( &msg );	// �L�[�{�[�h���b�Z�[�W�𕶎����b�Z�[�W��
			DispatchMessage( &msg );	// ���b�Z�[�W���E�B���h�E�v���V�[�W���֑���
		}
	}

	// GDI+ �I������
	GdiplusShutdown( GDIPToken );

	return (int)msg.wParam;
}