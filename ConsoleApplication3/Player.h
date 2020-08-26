#pragma once
class Player
{
	friend class Game;
public:
	Player(Game &game);
	~Player();

private:

	Game &game;						  //游戏对象
	bool test;						  //是否试过送下家走
	bool nodiscard;					  //不出标志
	int score;						  //玩家当前分数
};

