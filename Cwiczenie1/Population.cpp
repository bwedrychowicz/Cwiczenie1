#include "stdafx.h"
#include "Population.h"


Population::Population(int populationSize, int genotypeSize){
	population = new Person[populationSize];


	for (int i = 0; i < populationSize; i++) {
		Person person (genotypeSize);
		population[i] = person;
	}
}


Population::~Population(){
}

int Population::getPopulationSize(){
	return populationSize;
}

void Population::setPopulationSize(int size){
	populationSize = size;
}

void Population::showPopulation(){
	for (int i = 0; i < populationSize; i++) {
		population[i].showPerson();
	}
	cout << endl;
}
