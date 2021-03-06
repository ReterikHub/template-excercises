#pragma once
#include <iostream>

template<typename tyyppi>
class OmaPino
{
public:

	OmaPino(int koko);
	~OmaPino(void) { delete[] pinoTaulu; }

	void push(tyyppi alkio);
	tyyppi pop();
	void print() 
	{
		for(int i = 0; i < max; i++)
		{
			std::cout << pinoTaulu[i] << std::endl;
		}
	};

private:
	int max;
	int top;
	tyyppi* pinoTaulu;
};



template< typename tyyppi > OmaPino< tyyppi >::OmaPino(int koko)
{
	max = koko;
	top = -1;
	pinoTaulu = new tyyppi[koko];
}
template< typename tyyppi > void OmaPino< tyyppi >::push(tyyppi alkio)
{
	if (top != (max - 1))
	{
		pinoTaulu[++top] = alkio;
	}
}
template< typename tyyppi > tyyppi OmaPino< tyyppi >::pop()
{
	tyyppi alkio;

	if (top != -1)
	{
		alkio = pinoTaulu[top--];
	}
	
	return alkio;
}