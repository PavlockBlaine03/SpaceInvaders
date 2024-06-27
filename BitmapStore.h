#pragma once
#include <SFML/Graphics.hpp>
#include <map>

class BitmapStore
{
	std::map<std::string, sf::Texture> m_BitmapsMap;
	static BitmapStore* m_s_Instance;

public:
	BitmapStore();
	static sf::Texture& getBitmap(std::string const& filename);
	static void addBitmap(std::string const& filename);
};