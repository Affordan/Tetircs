#pragma once
#include <graphics.h>
#include <conio.h>
#include<iostream>
#include <cmath>
#include <vector>
#include <random>
#include <time.h>

#define block_width width/40
#define block_height height/40
#define HONEY RGB(240,255,240)
#define Lavender RGB(255,240,245)
#define Azure RGB(240,255,255)
#define Champagne RGB(250,235,215)
#define NKU RGB(126,12,1110)
#define TJU RGB(3,79,163)


using namespace std;

const int width = 800;
const int height = 800;




struct Point 
{
	int x;
	int y;
};

class Block
{
private:
	int blockType;

	//点的相对坐标?实际坐标？
	Point blockLocation[4];
	IMAGE* img;
	static IMAGE* imgs[7];

public:
	Block();
	~Block();
	void draw(int ,int);
	int getBlockType();
	IMAGE* getImages();

};



IMAGE* Block::imgs[7] = { NULL };
//对tilel文件只进行一次裁切
//如果imgs[0]为null则进入加载，否则不加载
Block::Block()
{
	//俄罗斯方块图片资源加载
	//将大图裁切成7张图片并且存储到imgs中
	// 如果没有加载图像(即imgs==NULL)那么就启动加载
	if (imgs[0] == NULL)
	{
		IMAGE imgTemp;
		loadimage(&imgTemp, "image/tiles.png");

		//将工作区设置在临时图片上
		SetWorkingImage(&imgTemp);
		for (int i = 0; i < 7; i++)
		{
			imgs[i] = new IMAGE;
			getimage(imgs[i], i * block_width, 0, block_width, block_height);
		}
		SetWorkingImage();	//恢复工作区
		srand(time(NULL));	//用随机化的种子赋值？能用生成器取代吗？
		
	}

	//相对坐标表示法
	int blocks[7][4] = {
	 1,3,5,7, // 长条
	 2,4,5,7, // Z 1型
	 3,5,4,6, // Z 2型
	 3,5,4,7, // 小T
	 2,3,5,7, // 左手折角
	 3,5,7,6, // 右手折角
	 2,3,4,5, // 愤怒男孩
	};
	blockType = rand() % 7 + 1;
	for (int i = 0; i < 4; i++) {
		blockLocation[i].x = blocks[blockType - 1][i] / 2;
		blockLocation[i].y = blocks[blockType - 1][i] % 2;
	}
	img = imgs[blockType - 1];
}

Block::~Block()
{

}


//用左上角坐标绘制方块
void Block::draw(int leftTop_x, int leftTop_y)
{
	for (int i = 0; i < 4; i++)
	{
		int real_x = leftTop_x + blockLocation[i].x * block_width;
		int real_y = leftTop_y + blockLocation[i].y * block_height;
		putimage(real_x, real_y, img);	//之前按照单元格格式来裁剪，不需要重新裁剪
	}
}

int Block::getBlockType()
{
	return blockType;
}

IMAGE* Block::getImages()
{
	return img;
}

