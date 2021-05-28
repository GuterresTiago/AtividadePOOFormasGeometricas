#pragma once
#include <iostream>
using namespace std;


class F_Geometrica
{
public:
	virtual void CalculaArea() = 0;
	virtual void CalculaVolume() = 0;
	void imprime();


protected:
	double area;
	double volume;
	string nome;
};

