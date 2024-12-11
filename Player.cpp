#include "Player.h"
#include "Library//Input.h"

Player::Player()
	:hImgPlayer(-1),px(0.0f),py(600.0f),speed(2.0)
{
	hImgPlayer = LoadGraph("data//player.png");
}

Player::~Player()
{
	if (hImgPlayer > 0)
	{
		DeleteGraph(hImgPlayer);
		hImgPlayer = -1;
	}
}

void Player::Update()
{
	//ã‰º¶‰E‚ğ“ü—Í‚µ‚½‚çA‚»‚Á‚¿‚É“®‚­‚æ
	if (Input::IsKeepKeyDown(KEY_INPUT_UP))
	{

	}
	if (Input::IsKeepKeyDown(KEY_INPUT_DOWN))
	{

	}
	px = px + speed;
}

void Player::Draw()
{
	DrawRectGraph(px, py, 157, 0, 43, 50,hImgPlayer, TRUE, FALSE);

}
