#include "stdafx.h"
#include "Person.h"


Person::Person() {

}

Person::Person(int genotypeSize){

	genotype = new int[genotypeSize];

	for (int i = 0; i < genotypeSize; i++) {
		genotype[i] = i;
	}
	for (int i = 0; i < (genotypeSize/2); i++) {
		int gene1 = (rand() % genotypeSize);
		int gene2 = (rand() % genotypeSize);

		int geneTmp = genotype[gene1];
		genotype[gene1] = genotype[gene2];
		genotype[gene2] = geneTmp;
	}
	
	setGenotypeSize(genotypeSize);
}



Person::~Person(){
}

int Person::getGenotypeSize(){
	return genotypeSize;
}

void Person::setGenotypeSize(int size){
	genotypeSize = size;
}

int Person::qapFunction(Person person){
	return 0;
}

int Person::getFlow(int gen1, int gen2){
	return 0;
}

int Person::getDistance(int gen1, int gen2){
	return 0;
}

void Person::showPerson(){
	for (int i = 0; i < genotypeSize; i++) {
		cout << genotype[i]<<" ";
	}
	cout << endl;
}
