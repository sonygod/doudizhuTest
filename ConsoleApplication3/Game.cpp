#include "Game.h"



Game::Game()
	: landlord(nullptr), curplayer(nullptr), lastone(nullptr), basescore(0), times(0), questioned(0),  callbegin(0)
{
	for (int i = 0; i < 3; ++i)
	{
		callscore[i] = 0;
		player[i] = new Player(*this);
	}
}


Game::~Game()
{
}
