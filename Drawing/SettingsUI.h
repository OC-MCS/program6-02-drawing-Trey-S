#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
#include "SettingsMgr.h"

// finish this code; add functions, data as needed
CircleShape MakeCircle(Vector2f Pos, Color color, float Size)
{
	CircleShape circle;
	circle.setPosition(Pos);
	circle.setFillColor(Color::Transparent);
	circle.setOutlineThickness(2);
	circle.setOutlineColor(color);
	circle.setRadius(Size);

	return circle;
}

RectangleShape MakeSqaure(Vector2f Pos, Color color, float Size)
{
	RectangleShape Sqaure;
	Sqaure.setPosition(Pos);
	Sqaure.setFillColor(Color::Transparent);
	Sqaure.setOutlineThickness(2);
	Sqaure.setOutlineColor(color);
	Sqaure.setSize(Vector2f(Size, Size));

	return Sqaure;
}

void MakeLine(Vector2f Pos, Color color, float Size, RenderWindow& win)
{
	RectangleShape Line;
	Line.setPosition(Pos);
	Line.setFillColor(color);
	Line.setSize(Vector2f(2, Size));

	win.draw(Line);
}


class SettingsUI
{
private:
	Color color;
	ShapeEnum shape;
	
	CircleShape Circle1 = MakeCircle(Vector2f(90, 75), Color::Blue, 20);
	CircleShape Circle2= MakeCircle(Vector2f(90, 138), Color::Green, 20);
	CircleShape Circle3 = MakeCircle(Vector2f(90, 200), Color::Red, 20);

	CircleShape Circle4 = MakeCircle(Vector2f(90, 300), Color::Black, 20);
	RectangleShape Sqaure = MakeSqaure(Vector2f(90, 400), Color::Black, 40);

public:
	SettingsUI(SettingsMgr *mgr)
	{
		color = mgr->getCurColor();
		shape = mgr->getCurShape();
	}
	void handleMouseUp(Vector2f mouse)
	{
		
	}

	void draw(RenderWindow& win)
	{
		win.clear(Color::White);

		Font font;
		if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
			die("couldn't load font");

		// title
		Text title("Selected Color", font, 25);
		title.setFillColor(Color::Black);
		title.setPosition(30, 25);
		win.draw(title);

		//Draws Colored Circles
		win.draw(Circle1);
		win.draw(Circle2);
		win.draw(Circle3);

		Text title2("Selected Shape", font, 25);
		title2.setFillColor(Color::Black);
		title2.setPosition(30, 250);
		win.draw(title2);

		//Draws Shapes
		win.draw(Circle4);
		win.draw(Sqaure);

		MakeLine(Vector2f(220, 0), Color::Black, 800, win);
	}
};