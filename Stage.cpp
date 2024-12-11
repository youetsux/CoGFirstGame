#include "Stage.h"
#include <DxLib.h>
//#include "Library\\Input.h"
#include "Source\\Screen.h"

Stage::Stage()
	:hImgBackground(-1) //メンバイニシャライザ
{
	hImgBackground = LoadGraph("data//background.png");
}

Stage::~Stage()
{
	if (hImgBackground > 0)
	{
		DeleteGraph(hImgBackground);
		hImgBackground = -1;
	}
}

void Stage::Update()
{
	//メンバの更新を書く
}

void Stage::Draw()
{
	//描画処理を書く
	if (hImgBackground > 0)
	{
		DrawExtendGraph(0, 0,Screen::WIDTH, Screen::HEIGHT, 
			                          hImgBackground, FALSE);
	}
}
