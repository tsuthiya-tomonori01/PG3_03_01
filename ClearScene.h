#pragma once
#include "Iscene.h"

class ClearScene : public Iscene
{
public:
	void Init() override;
	void Update() override;
	void Draw() override;
};

