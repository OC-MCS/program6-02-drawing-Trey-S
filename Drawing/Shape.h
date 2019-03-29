#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;

// finish this code; add functions, classes, data as needed

// DrawingShape should be an abstract base class 
// for Circle and Square
struct ShapeData
{
	Vector2f Position;
	ShapeEnum Shape;
	float Size;
	Color color;

};

class DrawingShape 
{

	public:
		ShapeData DATA;

		ShapeData ReturnData()
		{

		return DATA;
		}
	
};

// add Circle, Square classes below. These are derived from DrawingShape
class Circle : public DrawingShape
{

	public:

	Circle()
	{
	}

	void GetInput(Vector2f Pos, Color color, float Radius)
	{
		DATA.Position = Pos;
		DATA.Size = Radius;
		DATA.color = color;
		DATA.Shape = CIRCLE;
	}

	Circle(Vector2f Pos, Color color, float Radius)
	{
		CircleShape circle;

		DATA.Position = Pos;
		DATA.Size = Radius;
		DATA.color = color;
		DATA.Shape = CIRCLE;
	}

	void draw(RenderWindow &win)
	{
		CircleShape circle;
		circle.setPosition(DATA.Position);
		circle.setFillColor(DATA.color);
		circle.setRadius(DATA.Size);

		win.draw(circle);
	}

	ShapeData getFileRecord()
	{
		DATA;
	}

};

class Sqaure : public DrawingShape
{

	public:

	Sqaure()
	{
	}

	void GetInput(Vector2f Pos, Color color, float Size)
	{
		DATA.Position = Pos;
		DATA.Size = Size;
		DATA.color = color;
		DATA.Shape = SQUARE;
	}

	Sqaure(Vector2f Pos, Color color, float Size)
	{
		RectangleShape Square;
		ShapeData Data;

		DATA.Position = Pos;
		DATA.Size = Size;
		DATA.color = color;
		DATA.Shape = SQUARE;
	}

	void draw(RenderWindow &win)
	{
		RectangleShape Square;
		Square.setPosition(DATA.Position);
		Square.setFillColor(DATA.color);
		Square.setSize(Vector2f(DATA.Size, DATA.Size));

		win.draw(Square);
	}

	ShapeData getFileRecord()
	{
		DATA;
	}

};


