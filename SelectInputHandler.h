#pragma once
#include "InputHandler.h"

class SelectInputHandler : public InputHandler
{
public:
	void handleKeyPressed(Event& event, RenderWindow& window) override;
	void handleLeftClick(string& buttonInteractedWith, RenderWindow& window) override;
};