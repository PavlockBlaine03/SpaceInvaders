#include "SelectInputHandler.h"
#include "SoundEngine.h"
#include "WorldState.h"
#include <iostream>

int WorldState::WAVE_NUMBER;

void SelectInputHandler::handleKeyPressed(Event& event, RenderWindow& window)
{
	// Quit Game
	if (Keyboard::isKeyPressed(Keyboard::Escape)) window.close();
}

void SelectInputHandler::handleLeftClick(string& buttonInteractedWith, RenderWindow& window)
{
	if (buttonInteractedWith == "Play")
	{
		SoundEngine::playClick();
		WorldState::WAVE_NUMBER = 0;
		getPointerToScreenManagerRemoteControl()->loadLevelInPlayMode("level1");
	}
	if (buttonInteractedWith == "Quit")
	{
		SoundEngine::playClick();
		window.close();
	}
}
