#include "Player.h"

#include <iostream>

Player::Player(Game &game)
	: game(game), test(false), nodiscard(false), score(1000)
{
   
	printf(("player was create"));


	
}


Player::~Player()
{
}
