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
    int hImgBackground;//”wŒi‰æ‘œ‚Ìƒnƒ“ƒhƒ‹
};

