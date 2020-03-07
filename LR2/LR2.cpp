// LR2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector.h"
#include <fstream>

Vector& operator+(Vector& v2, double* p)
{
	int n = v2.n;
	Vector a(v2.p, v2.n);
	for (int i = 0; i < n; i++) a.p[i] += p[i];
	return a;
}

std :: ostream& operator<<(ostream& out, Vector& V)
{
	out << "n=" << V.n << endl << "Vector:";
	for (int i = 0; i < V.n; i++)
		out << V.p[i] << " ";
	return out;
}

std :: istream& operator>>(istream& in, Vector& V)
{
	in >> V.n;
	in.ignore(2, '\n');
	for (int i = 0; i < V.n; i++)
		in >> V.p[i];
	return in;
}

ofstream& operator<<(ofstream& fout, Vector& V)
{
	fout << V.n << endl;
	for (int i = 0; i < V.n; i++)
		fout << V.p[i] << " ";
	return fout;
}

ifstream& operator>>(ifstream& fin, Vector& V)
{
	fin >> V.n;
	fin.ignore(2, '\n');
	for (int i = 0; i < V.n; i++)
		fin >> V.p[i];
	return fin;
}


int main()
{
	int n;
	double* p;
	ifstream fint("input.txt");
	if (!fint) cout << "klaun" << endl;
	fint >> n;
	p = new double[n];
	fint.ignore(2,'\n');
	for (int i = 0; i < n; i++) fint >> p[i];
	fint.close();
	Vector v(p,n);
	Vector v2 = v;
	v2[3] = 10;
	cout << v2 << endl;
	Vector v3;
	cout << "Vvedite vector:\n";
	cin >> v3;
	ofstream fout("output.txt");
	fout << v3;
	fout.close();
	// ljgbcfnm pltcm ///////////////////////////////
	cin >> n;
	p = new double[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	Vector a1(p, n);
	Vector a2;
	a2 = a1 + p;
	cout << endl << a2;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
