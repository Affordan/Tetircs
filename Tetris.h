#pragma once
#include <graphics.h>
#include <conio.h>
#include<iostream>
#include <cmath>
#include <vector>
#include <random>
#include <time.h>
#include <map>

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

struct pointSet
{
	int x_y[4][2];

};



class Tetris
{
private:
	struct TetrisType
	{
		pointSet ATeris;
	};


public:
	Tetris()
	{
		TetrisType O_Oriange_Ricky[4]
		{

		};

		TetrisType O_Blue_Ricky[4]
		{

		};

		TetrisType O_Clevenlan_Z[4]
		{

		};
		TetrisType O_Rhode_Island[4]
		{

		};

		TetrisType O_Hero[4]
		{

		};

		//小T
		TetrisType O_TeeWee[4]
		{
		 O_TeeWee[0] = {{0, 0}, {0, -1}, {1, 0}}
		};

		//愤怒男孩
		TetrisType O_Smash_Boy[4]
		{

		};
	}

};

map <string, struct TetrisType> mappling();
