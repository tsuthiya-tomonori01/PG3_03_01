#pragma once

enum SceneType {
	kTitle,
	kStage,
	kClear,
	kSceneMax
};

class Iscene
{

protected:

	static int sceneNo;
	char* keys_;
	char* prekyes_;

public:

	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	virtual ~Iscene();

	int GetSceneNo();

	void SetKeys(char* keys, char* prekyes);
};

