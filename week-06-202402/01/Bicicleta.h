#pragma once
#include "Terrestre.h"
class Bicicleta : public Terrestre
{
public:
	Bicicleta(float x, float y);
	void borrar() override;
	void mover() override;
	void dibujar() override;
	void cambiarVelocidad(float velocidad) override;
};
