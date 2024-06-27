#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Button.h"
#include "Screen.h"
#include "ScreenManagerRemoteControl.h"
using namespace sf;
using namespace std;

class Screen;
class InputHandler
{
	Screen* m_ParentScreen;
	vector<shared_ptr<Button>> m_Buttons;
	View* m_PointerToUIPanelView;
	ScreenManagerRemoteControl* m_ScreenManagerRemoteControl;

public:
	void initialiseInputHandler(ScreenManagerRemoteControl* sw, vector<shared_ptr<Button>>, View* pointerToView, Screen* parentScreen);
	void handleInput(RenderWindow& window, Event& event);
	virtual void handleGamepad();
	virtual void handleKeyPressed(Event& event, RenderWindow& window);
	virtual void handleKeyReleased(Event& event, RenderWindow& window);
	virtual void handleLeftClick(string& buttonInteractedWith, RenderWindow& window);
	View* getPointerToUIView();
	ScreenManagerRemoteControl* getPointerToScreenManagerRemoteControl();
	Screen* getmParentScreen();
};