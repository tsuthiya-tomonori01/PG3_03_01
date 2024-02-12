#include "Iscene.h"

int Iscene::sceneNo = kTitle;

Iscene::~Iscene()
{
}

int Iscene::GetSceneNo()
{
	return sceneNo;
}

void Iscene::SetKeys(char* keys, char* prekyes)
{
	keys_ = keys;
	prekyes_ = prekyes;

}
