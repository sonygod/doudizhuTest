#pragma once
#include "Player.h"


enum Status {
	NOTSTART,//游戏未开始
	GETLANDLORD,//叫地主阶段
	SENDLANDLORDCARD,//发地主牌阶段
	DISCARD,//出牌阶段
	GAMEOVER//游戏结束
};


class Game
{
	friend class Player;
public:
	Game();
	~Game();

private:
	Player *player[3];	 //真人玩家编号为0
	Player *landlord;	 //地主
	Player *curplayer;	 //当前出牌玩家
	Player *lastone;	 //最后出牌方
	int callscore[3];	 //各家叫地主的分数
	int callbegin;		 //第一个叫地主的玩家
	int basescore;		 //本局基本分
	int times;			 //本局倍率
	int questioned;		 //已询问数量
	int landlordcard[3]; //本局地主的专属牌存储区
};

