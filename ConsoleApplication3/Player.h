#pragma once
class Player
{
	friend class Game;
public:
	Player(Game &game);
	~Player();

private:

	Game &game;						  //��Ϸ����
	bool test;						  //�Ƿ��Թ����¼���
	bool nodiscard;					  //������־
	int score;						  //��ҵ�ǰ����
};

