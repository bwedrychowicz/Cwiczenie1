#include "stdafx.h"
#include "Read.h"


Read::Read()
{
}


Read::~Read()
{
}

void Read::read(){
	ifstream plik;
	plik.open("12.txt");

	plik >> genotypeSize;

	distanceMatrix = new int*[genotypeSize];
	flowMatrix = new int*[genotypeSize];

	for (int i = 0; i < genotypeSize; i++) {
		distanceMatrix[i] = new int[genotypeSize];
		flowMatrix[i] = new int[genotypeSize];
	}
	
	for (int i = 0; i < genotypeSize; i++) {
		for (int j = 0; j < genotypeSize; j++) {
			plik>>distanceMatrix[i][j];
		}		
	}


	for (int i = 0; i < genotypeSize; i++) {
		for (int j = 0; j < genotypeSize; j++) {
			plik >> flowMatrix[i][j];
		}
	}

}

void Read::show(){

	cout << genotypeSize << endl;

	for (int i = 0; i < genotypeSize; i++) {
		for (int j = 0; j < genotypeSize; j++) {
			cout << distanceMatrix[i][j] << "  ";
		}
		cout << endl;
	}

	for (int i = 0; i < genotypeSize; i++) {
		for (int j = 0; j < genotypeSize; j++) {
			cout << distanceMatrix[i][j] << "  ";
		}
		cout << endl;
	}
}
