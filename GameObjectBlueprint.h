#pragma once
#include <vector>
#include <string>
#include <map>
using namespace std;

class GameObjectBlueprint
{
	string m_Name = "";
	vector<string> m_ComponentsList;
	string m_BitmapName = "";
	float m_Width;
	float m_Height;
	float m_LocationX;
	float m_LocationY;
	float m_Speed;
	bool m_EncompassingRectCollider = true;
	string m_EncompassingRectColliderLabel = "";

public:
	float getWidth();
	void setWidth(float width);
	float getHeight();
	void setHeight(float height);
	float getLocationX();
	float getLocationY();
	void setLocationX(float locationX);
	void setLocationY(float locationY);
	void setName(string name);
	string getName();
	vector<string>& getComponentList();
	void addComponentToList(string newComponent);
	string getBitmapName();
	void setBitmapName(string bitmapName);
	string getEncompassingRectColliderLabel();
	bool getEncompassingRectCollider();
	void setEncompassingRectCollider(string label);
};