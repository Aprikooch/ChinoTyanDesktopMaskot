
#include "Global.h"

void DrawImage( int _x, int _y, Image *_img )
{
	// Dxlib�ł����ALoadGraph()�݂����Ȃ��́H
	Graphics graph( hdc );

	// �`��
	graph.DrawImage( _img, _x, _y );

	return;
}