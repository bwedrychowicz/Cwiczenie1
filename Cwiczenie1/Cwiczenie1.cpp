// Cwiczenie1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Population.h"
#include "Osobnik.h"
#include "Read.h"
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));
	Read r;
	r.read();

	int genotypeSize = r.genotypeSize;


	int populationSize = 10;
	Population population1(populationSize, genotypeSize);
	population1.setPopulationSize(populationSize);
	population1.showPopulation();

	system("pause");

}

