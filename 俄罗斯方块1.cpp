#include "Tetris.hpp"
#include "Block.hpp"


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