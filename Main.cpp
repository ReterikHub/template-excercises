#include "OmaPino.h"
#include "OmaVektori.h"


int main()
{
	OmaPino<int> pino(8);

	int x;
	for (int i = 0; i < 8; i++)
	{
		x = rand() % 10 + 1;
		pino.push(x);
	}
	
	pino.print();

	std::cout << " " << std::endl;

	pino.pop();
	pino.push(10);
	pino.print();

//------------------------------------------------------------------------
	std::cout << std::endl;
	std::cout << "omavektori:" << std::endl;

	OmaVektori<int> Vektori(6);

	for (int i = 0; i < 13; i++)
	{
		x = rand() % 10 + 1;
		Vektori.lisaa(x);
	}
	

	Vektori.tulosta();

}