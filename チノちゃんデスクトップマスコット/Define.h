
/*=====================================
	マクロ置き換え
=====================================*/

// WS_EX_LAYERED使用
#pragma warning( disable: 4005 )
#define _WIN32_WINNT 0x0500

// 円周率
#define PI	3.1415926535898

// GetMouse[LEFT], [RIGHT]のように使えるように
#define LEFT	0	// 左
#define RIGHT	1	// 右

// 色
#define WHITE	GetColor(255,255,255)
#define BLACK	GetColor(0,0,0)