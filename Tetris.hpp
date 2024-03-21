#pragma once
#include <graphics.h>
#include <conio.h>
#include<iostream>
#include <cmath>
#include <vector>
#include <random>
#include <time.h>

#define block_width width/40
#define block_height height/24
#define HONEY RGB(240,255,240)
#define Lavender RGB(255,240,245)
#define Azure RGB(240,255,255)
#define Champagne RGB(250,235,215)
#define NKU RGB(126,12,1110)
#define TJU RGB(3,79,163)




using namespace std;

const int width = 1200;
const int height = 742;

//表示俄罗斯方块的各个空间位置
enum{UP=0,DOWN,LEFT,RIGHT};

class Tetris;

/*
Oriange_Ricky 橙色瑞克   右手折角
Blue_Ricky 蓝色瑞克      左手折角
Clevenlan_Z 克利夫兰Z    Z形
Rhode_Island 罗德岛      反Z形
Hero 英雄                长条
TeeWee 小T               小T
Smash_Boy 粉碎男孩       方块
*/

enum{Oriange_Ricky=0,Blue_Ricky,Clevenlan_Z, Rhode_Island
, Hero, TeeWee, Smash_Boy};


class Tetris
{
private:
	//用二维数组(前两个使用枚举值来表示所以可以被显化的概念表示)
	int TerisType[7][4][4][2] =
	{

		//右手直角
		{{{0, 0}, {-1, 0}, {1, 0}, {1, 1}},
		 {{0, 0}, {0, -1}, {0, 1}, {-1, 1}},
		 {{0, 0}, {1, 0}, {-1, 0}, {-1, -1}},
		 {{0, 0}, {0, 1}, {0, -1}, {1, -1}}},
		 //左手直角
		 {{{0, 0}, {-1, 0}, {1, 0}, {1, -1}},
		  {{0, 0}, {0, -1}, {0, 1}, {1, 1}},
		  {{0, 0},{1, 0}, {-1, 0}, {-1, 1}},
		  {{0, 0}, {0, 1}, {0, -1}, {-1, -1}}},
		  //Z形
		  {{{0, 0}, {-1, -1}, {0, -1}, {1, 0}},
		   {{0, 0}, {1, -1}, {1, 0}, {0, 1}},
		   {{0, 0}, {1, 1}, {0, 1}, {-1, 0}},
		   {{0, 0}, {-1, 1}, {-1, 0}, {0, -1}}},
		   //反Z形
		   {{{0, 0}, {-1, 0}, {0, -1}, {1, -1}},
			{{0, 0}, {0, -1}, {1, 0}, {1, 1}},
			{{0, 0}, {1, 0}, {0, 1}, {-1, 1}},
			{{0, 0}, {0, 1}, {-1, 0}, {-1, -1}}},
			//长条
			{{{0, 0}, {-2, 0}, {-1, 0}, {1, 0}},
			 {{0, 0}, {0, -2}, {0, -1}, {0, 1}},
			 {{0, 0}, {2, 0}, {1, 0}, {-1, 0}},
			 {{0, 0}, {0, 2}, {0, 1}, {0, -1}}},
			 //小T
			 {{{0, 0}, {-1, 0}, {0, -1}, {1, 0}},
			  {{0, 0}, {0, -1}, {1, 0}, {0, 1}},
			  {{0, 0}, {1, 0}, {0, 1}, {-1, 0}},
			  {{0, 0}, {0, 1}, {-1, 0}, {0, -1}}},
			  //方块
			  {{{0, 0}, {-1, 0}, {-1, -1}, {0, -1}},
			   {{0, 0}, {0, -1}, {1, -1}, {1, 0}},
			   {{0, 0}, {1, 0}, {1, 1}, {0, 1}},
			   {{0, 0}, {0, 1}, {-1, 1}, {-1, 0}}},
	};

	struct TetisType
	{

	};





	void DrawBK()
	{
		setbkcolor(BLACK);

	}


};

