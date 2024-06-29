#pragma once
#include "Component.h"
#include "GraphicsComponent.h"
#include <string>

class Component;
class StandardGraphicsComponent : public GraphicsComponent
{
	sf::Sprite m_Sprite;
	string m_SpecificType = "standard";

public:
	/*From Component interface base class*/
	string Component::getSpecificType() { return m_SpecificType; }
	void Component::start(GameObjectSharer* gos, GameObject* self) {}

	/*From Graphics Component*/
	void draw(RenderWindow& window, shared_ptr<TransformComponent> t) override;
	void initializeGraphics(string bitmapName, Vector2f objectSize) override;
};