#pragma once
#include "Library\\GameObject.h"

class Stage :
    public GameObject
{
public:
    Stage();
    ~Stage();
    void Update() override;
    void Draw() override;
private:
    int hImgBackground;//�w�i�摜�̃n���h��
};

