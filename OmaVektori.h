#pragma once
#include <iostream>

template<typename T>
class OmaVektori
{
public:

	OmaVektori(int parakoko);
	~OmaVektori(void) { delete[] taulukko; }

	void lisaa(T uusiAlkio);
	void poista(int indeksi);
	bool onkoTaulukossa(int luku);

	void tulosta()
		{
		for (int i = 0; i < koko; i++)
		{
			std::cout << taulukko[i] << std::endl;
		}
		}
private:

	int koko;
	int maxKoko;
	T* taulukko;
};


template<typename T> OmaVektori<T>::OmaVektori(int parakoko)
{
	maxKoko = parakoko;
	koko = 0;
	taulukko = new T[maxKoko];
}

template<typename T> void OmaVektori<T>::lisaa(T uusiAlkio)
{
	if (koko = maxKoko)
	{
		T* thaulukko = taulukko;
		maxKoko += 1;

		taulukko = new T[maxKoko];

			for (int i = 0; i < koko; i++)
			{
				taulukko[i] = thaulukko[i];
			}

		delete [] thaulukko;

	}

	taulukko[koko] = uusiAlkio;
	koko++;
}


template<typename T> void OmaVektori<T>::poista(int indeksi)
{
	for (; indeksi < koko; indeksi++)
	{
		taulukko[indeksi] = taulukko[indeksi + 1];
	}
	koko--;
}

template<typename T> bool OmaVektori<T>::onkoTaulukossa(int luku)
{
	for (int i = 0; i < koko; i++)
	{
		if (taulukko[i] = luku)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}