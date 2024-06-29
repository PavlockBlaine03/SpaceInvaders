#pragma once
#include "GameObjectBlueprint.h"
#include <string>
using namespace std;

class BlueprintObjectParser
{
	string extractStringBetweenTags(string stringToSearch, string startTag, string endTag);
public:

	void parseNextObjectToBlueprint(ifstream& reader, GameObjectBlueprint& bp);
};