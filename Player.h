#pragma once
#include "Library\\GameObject.h"

class Player :
    public GameObject
{
public:
    Player();
    ~Player();
    void Update() override;
    void Draw() override;
private:
    int hImgPlayer;//�摜�̃n���h��
    float px, py;//�L�����N�^�̍��W
    float speed;
};

