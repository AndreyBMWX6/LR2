#include "Vector.h"
Vector :: Vector()
{
	p = nullptr;
	n = 0;
}

Vector :: Vector(double* p, int n)
{
	this->n = n;
	this->p = new double[n];
	for (int i = 0; i < n; i++) this->p[i] = p[i];
}

Vector :: Vector(const Vector& V)
{
	n = V.n;
	p = new double[n];
	for (int i = 0; i < n; i++)
		p[i] = V.p[i];
}

Vector :: Vector(Vector&& V) : p(V.p), n(V.n)
{
	V.p = nullptr;
	V.n = 0;
}

Vector :: ~Vector()
{
	if (p != nullptr) delete[] p;
}

double& Vector :: operator[](int i)
{
	return p[i];
}

Vector& Vector :: operator=(Vector& v2)
{
	this->n = v2.n;
	this->p = v2.p;
	return *this;
}
