
#include "Global.h"

void DrawImage( int _x, int _y, Image *_img )
{
	// DxlibÇ≈Ç¢Ç§ÅALoadGraph()Ç›ÇΩÇ¢Ç»Ç‡ÇÃÅH
	Graphics graph( hdc );

	// ï`âÊ
	graph.DrawImage( _img, _x, _y );

	return;
}