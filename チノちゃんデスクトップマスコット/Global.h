
// externがついた場合、同じソリューション内なら変数が使えるようになる
// （二重宣言にならない）

#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern
#endif

/*=====================================
	インクルード
=====================================*/
#include <windows.h>

#include <gdiplus.h>
#pragma comment (lib, "Gdiplus.lib")
using namespace Gdiplus;

#include <tchar.h>	// _T("")が定義されています
#include <string>

using namespace std;	// stringはstd領域を使用しているので

/*=====================================
	自作ヘッダのインクルード
=====================================*/
#include "Define.h"
//#include "Struct.h"
#include "Function.h"

/*=====================================
	変数
=====================================*/
GLOBAL HWND hWnd;
GLOBAL HDC hdc;