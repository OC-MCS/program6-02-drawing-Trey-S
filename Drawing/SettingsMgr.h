#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

enum ShapeEnum { CIRCLE, SQUARE};


class SettingsMgr
{
private:
	Color CurrentColor;
	ShapeEnum CurrentShape;
	
public:
	SettingsMgr(Color startingColor, ShapeEnum startingShape )
	{
		CurrentColor = startingColor;
		CurrentShape = startingShape;
	}

	Color getCurColor()
	{
		return CurrentColor;
	}

	ShapeEnum getCurShape()
	{
		return CurrentShape;
	}

};
