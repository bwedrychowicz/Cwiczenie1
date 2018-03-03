#pragma once
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <random>
#include <iostream>


using namespace std;


class Person
{
public:
	int genotypeSize;
	
	Person();
	Person(int genotypeSize);
	~Person();

	int getGenotypeSize();
	void setGenotypeSize(int size);

	int qapFunction(Person person);
	int getFlow(int gen1, int gen2);
	int getDistance(int gen1, int gen2);

	void showPerson();

private:
	int *genotype;
	int fittnes; 

};

