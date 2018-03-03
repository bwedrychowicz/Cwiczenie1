#pragma once
#include "Person.h"

class Population
{
public:
	int populationSize;
	Population(int populationSize, int genotypSize);
	~Population();

	int getPopulationSize();
	void setPopulationSize(int size);

	void showPopulation();

private:
	
	Person *population;

};

