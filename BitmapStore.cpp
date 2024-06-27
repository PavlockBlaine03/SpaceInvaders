#include "BitmapStore.h"
#include <assert.h>
using namespace std;
using namespace sf;

BitmapStore* BitmapStore::m_s_Instance = nullptr;
BitmapStore::BitmapStore()
{
	assert(m_s_Instance == nullptr);
	m_s_Instance = this;
}
void BitmapStore::addBitmap(std::string const& filename)
{
	// Get a reference to m_Texture using m_s_Instance
	auto& bitmapMap = m_s_Instance->m_BitmapsMap;
	auto keyValuePair = bitmapMap.find(filename);

	if (keyValuePair == bitmapMap.end())
	{
		// Create a new key value pair using filename
		auto& texture = bitmapMap[filename];
		texture.loadFromFile(filename);
	}
}

sf::Texture& BitmapStore::getBitmap(std::string const& filename)
{
	auto& m = m_s_Instance->m_BitmapsMap;
	auto keyValuePair = m.find(filename);

	if (keyValuePair != m.end()) return keyValuePair->second;
	else
	{
#ifdef debuggingOnConsole
		cout << "BitmapStore::getBitmap()Texture not found!" << endl;
#endif
		return keyValuePair->second;
	}
}