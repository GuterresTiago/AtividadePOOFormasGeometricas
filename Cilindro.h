#pragma once
#include "F_Geometrica.h"
class Cilindro : public F_Geometrica
{
public:
	void CalculaArea();
	void SetRaioAltura(int a, int b);
	void CalculaVolume();
private:
	double raio;
	double altura;

};

