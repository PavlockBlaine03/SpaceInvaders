#include "GameObjectBlueprint.h"

float GameObjectBlueprint::getWidth() { return m_Width; }
float GameObjectBlueprint::getHeight() { return m_Height; }
void GameObjectBlueprint::setWidth(float width) { m_Width = width; }
void GameObjectBlueprint::setHeight(float height) { m_Height = height; }
float GameObjectBlueprint::getLocationX() { return m_LocationX; }
float GameObjectBlueprint::getLocationY() { return m_LocationY; }
void GameObjectBlueprint::setLocationX(float locationX) { m_LocationX = locationX; }
void GameObjectBlueprint::setLocationY(float locationY) { m_LocationY = locationY; }
void GameObjectBlueprint::setName(string name) { m_Name = "" + name; }
string GameObjectBlueprint::getName() { return m_Name; }
vector<string>& GameObjectBlueprint::getComponentList() { return m_ComponentsList; }
void GameObjectBlueprint::addComponentToList(string newComponent) { m_ComponentsList.push_back(newComponent); }
string GameObjectBlueprint::getBitmapName() { return m_BitmapName; }
void GameObjectBlueprint::setBitmapName(string bitmapName) { m_BitmapName = "" + bitmapName; }
string GameObjectBlueprint::getEncompassingRectColliderLabel() { return m_EncompassingRectColliderLabel; }
bool GameObjectBlueprint::getEncompassingRectCollider() { return m_EncompassingRectCollider; }
void GameObjectBlueprint::setEncompassingRectCollider(string label)
{
	m_EncompassingRectCollider = true;
	m_EncompassingRectColliderLabel = "" + label;
}