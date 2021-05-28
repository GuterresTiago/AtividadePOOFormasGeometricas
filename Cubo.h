#pragma once
#include "F_Geometrica.h"
class Cubo : public F_Geometrica
{
public:
	void CalculaArea();
	void SetLateral(int a);
	void CalculaVolume();
private:
	double lateral;


};

