#include "Tetris.h"


int main()
{
	initgraph(width, height);
	setbkcolor(BLACK);
	cleardevice();

	BeginBatchDraw();
	while (1)
	{


		FlushBatchDraw();
	};

	EndBatchDraw();




	return 0;
}