
// extern�������ꍇ�A�����\�����[�V�������Ȃ�ϐ����g����悤�ɂȂ�
// �i��d�錾�ɂȂ�Ȃ��j

#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern
#endif

/*=====================================
	�C���N���[�h
=====================================*/
#include <windows.h>

#include <gdiplus.h>
#pragma comment (lib, "Gdiplus.lib")
using namespace Gdiplus;

#include <tchar.h>	// _T("")����`����Ă��܂�
#include <string>

using namespace std;	// string��std�̈���g�p���Ă���̂�

/*=====================================
	����w�b�_�̃C���N���[�h
=====================================*/
#include "Define.h"
//#include "Struct.h"
#include "Function.h"

/*=====================================
	�ϐ�
=====================================*/
GLOBAL HWND hWnd;
GLOBAL HDC hdc;