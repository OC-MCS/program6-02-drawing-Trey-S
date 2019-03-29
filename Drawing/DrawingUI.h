#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
#include "ShapeMgr.h"

// finish this code; add functions, data as needed

class DrawingUI
{
private:

	//Holds Current Dimmensions of open Window
	float WindowWidth;
	float WindowHeight;

	Vector2f MousePos; //Holds Current Mouse Position

	ShapeEnum CurrentShape;
	DrawingShape Shape;
	Color color;

public:
	DrawingUI(Vector2f p)
	{
		MousePos = p;
	}

	void draw(RenderWindow& win, ShapeMgr *mgr)
	{
		WindowWidth = win.getSize().x;
		WindowHeight = win.getSize().y;

		//Shape = mgr->addShape(Vector2f(MousePos.x, MousePos.y), CurrentShape, Color::Blue);


	}
	
	bool isMouseInCanvas(Vector2f mousePos)
	{
		bool OnCanvas;

		//If Mouse position isn't within drawing area, return false
		if (mousePos.x < 225 || mousePos.y < 225 || mousePos.x > WindowWidth || mousePos.y > WindowHeight)
		{
			
			OnCanvas = false;
		}
		else
		{
			OnCanvas = true;
		}

		return OnCanvas;
	}

};

