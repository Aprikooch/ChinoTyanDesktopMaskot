
#include "Global.h"

void DrawImage( int _x, int _y, Image *_img )
{
	// Dxlibでいう、LoadGraph()みたいなもの？
	Graphics graph( hdc );

	// 描画
	graph.DrawImage( _img, _x, _y );

	return;
}