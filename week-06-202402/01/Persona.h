#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
class Persona
{
public:
	Persona(float x, float y);
	void borrar();
	void mover();
	void dibujar();
	float getX() { return x; }
	float getY() { return y; }
private:
	float x, y;
};

