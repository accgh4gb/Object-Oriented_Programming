#include "Player.h"

Player::Player(const std::string& name) : GenericPlayer(name) {}

bool Player::IsHitting() const
{
	std::cout << GenericPlayer::GetName() << ", do you want a hit? (Y/N): ";
	char response;
	std::cin >> response;
	return (response == 'y' || response == 'Y');
}

void Player::Win() const
{
	std::cout << GenericPlayer::GetName() << " wins.\n";
}

void Player::Lose() const
{
	std::cout << GenericPlayer::GetName() << " loses.\n";
}

void Player::Push() const
{
	std::cout << GenericPlayer::GetName() << " pushes.\n";
}

Player::~Player() {}
