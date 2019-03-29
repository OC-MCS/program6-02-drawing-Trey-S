#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Shape.h"

using namespace std;
using namespace sf;

// finish the ShapeMgr class.

class ShapeMgr
{
private:
	vector<DrawingShape> Shapes;

public:
	ShapeMgr()
	{
	}

	void addShape(Vector2f pos, ShapeEnum whichShape, Color color, RenderWindow &win)
	{
		if(whichShape == SQUARE)
		{ 
			Shapes.push_back(Sqaure(pos, color, 5));

			Sqaure Sqaure(pos, color, 40);
			Sqaure.draw(win);
		}
		else
		{
			Shapes.push_back(Circle(pos, color, 5));

			Circle circle(pos, color, 20);
			circle.draw(win);
		}


 	}

	void SaveDrawing()
	{
		FILE* Sfile;

		Sfile = fopen("file.binary", "wb");
		fwrite(&Shapes, sizeof(DrawingShape), sizeof(Shapes), Sfile);
		fclose(Sfile);
	}

};


void die(string msg)
{
	cout << msg << endl;
	exit(-1);
}
