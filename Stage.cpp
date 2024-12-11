#include "Stage.h"
#include <DxLib.h>
//#include "Library\\Input.h"
#include "Source\\Screen.h"

Stage::Stage()
	:hImgBackground(-1) //�����o�C�j�V�����C�U
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
	//�����o�̍X�V������
}

void Stage::Draw()
{
	//�`�揈��������
	if (hImgBackground > 0)
	{
		DrawExtendGraph(0, 0,Screen::WIDTH, Screen::HEIGHT, 
			                          hImgBackground, FALSE);
	}
}
