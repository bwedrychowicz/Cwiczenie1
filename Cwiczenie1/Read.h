#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Read
{
public:
	Read();
	~Read();

	void read();
	void show();

	int genotypeSize;
	int **flowMatrix;
	int **distanceMatrix;
};

