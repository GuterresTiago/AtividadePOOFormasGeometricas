#include "Quadrado.h"
void Quadrado::CalculaArea()
{
	area = lateral*lateral;
}

void Quadrado::SetLateral(int a)
{
	nome = "Quadrado";
	lateral = a;
	CalculaArea();
}
void Quadrado::CalculaVolume()
{
	cout << "quadrado e um formato plano nao possui volume\n";
}