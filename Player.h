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
    int hImgPlayer;//画像のハンドル
    float px, py;//キャラクタの座標
    float speed;
};

