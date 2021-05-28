// AtividadePOO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Quadrado.h"
#include "Cubo.h"
#include "Cilindro.h"

int main()
{
	Cilindro a;
	Cubo c;
	Quadrado q;

	a.SetRaioAltura(2, 3);
	a.imprime();

	c.SetLateral(5);
	c.imprime();

	q.SetLateral(6);
	//teste objetos planos 2 dimensoes
	q.CalculaVolume();
	q.imprime();
}


