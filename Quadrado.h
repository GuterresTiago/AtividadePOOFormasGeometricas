#pragma once

#include "F_Geometrica.h"

class Quadrado : public F_Geometrica
{
public:
	 void CalculaArea();
	 void CalculaVolume();
	 void SetLateral(int a);
private:
	double lateral;
};

