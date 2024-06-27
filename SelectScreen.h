#pragma once
#include "Screen.h"

class SelectScreen : public Screen
{
	ScreenManagerRemoteControl* m_ScreenManagerRemoteControl;
	Texture m_BackgroundTexture;
	Sprite m_BackgroundSprite;

public:
	SelectScreen(ScreenManagerRemoteControl* smrc, Vector2i res);
	void virtual draw(RenderWindow& window);
};