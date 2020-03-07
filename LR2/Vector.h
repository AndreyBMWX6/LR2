#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Vector
{
	double* p;
	int n;
public:
	
	Vector();

	Vector(double* p, int n);

	Vector(const Vector& V);

	Vector(Vector&& V);

	~Vector();

	friend Vector& operator+(Vector& v2, double* p);

	friend ostream & operator<<(ostream & out,Vector & V);

	friend istream& operator>>(istream& in, Vector& V);

	friend ofstream& operator<<(ofstream& fout, Vector& V);

	friend ifstream& operator>>(ifstream& fin, Vector& V);

	double& operator[](int i);

	Vector& operator=(Vector & v2);
};
