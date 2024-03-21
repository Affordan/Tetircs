#pragma once
#include <graphics.h>
#include <conio.h>
#include<iostream>
#include <cmath>
#include <vector>
#include <random>
#include <time.h>

#define block_width width/50
#define block_height height/36
#define HONEY RGB(240,255,240)
#define Lavender RGB(255,240,245)
#define Azure RGB(240,255,255)
#define Champagne RGB(250,235,215)
#define NKU RGB(126,12,1110)
#define TJU RGB(3,79,163)


using namespace std;

const int width = 1200;
const int height = 742;
struct Point 
{
	int x;
	int y;
};

class Block
{
private:
	int blockType;
	
	IMAGE* img;
	static IMAGE* imgs[7];

public:
	Block();
	~Block();

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

}