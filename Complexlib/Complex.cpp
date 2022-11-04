//Copyright (c), Semeniuta Diana 202 TN, 2022
#include "Complex.h"
#include <iostream>
#include <string>
using namespace std;

namespace Complexfunc {

	Complex Complex::Read()
	{
		Complex tmp;
		tmp.real = real;
		tmp.imagine = imagine;
		cout << "Input real" << endl;
		cin >> tmp.real;
		cout << "Input imagine" << endl;
		cin >> tmp.imagine;
		return tmp;
	}

	void Complex::Display()
	{
		Complex tmp;
		tmp.real = real;
		tmp.imagine = imagine;
		cout << "Real = " << tmp.real << endl;
		cout << endl;
		cout << "Imagine =" << tmp.imagine << endl;
		cout << endl;

	}

	//Перевизначення оператора присвоєння "="
	Complex Complex::operator=(Complex M)
	{
		real = M.real;
		imagine = M.imagine;

		return *this;
	}

	//Перевантаження оператора додавання "+"
	Complex Complex::operator+(Complex M)
	{
		Complex tmp;
		tmp.real = real;
		tmp.imagine = imagine;
		tmp.real = this->real + M.real;
		tmp.imagine = this->imagine + M.imagine;
		return tmp;
	}


	Complex Complex::Sub(Complex M)
	{
		Complex tmp;
		tmp.real = real;
		tmp.imagine = imagine;
		tmp.real = this->real - M.real;
		tmp.imagine = this->imagine - M.imagine;
		return tmp;
	}

	Complex Complex::Mul(Complex M)
	{
		Complex tmp;
		tmp.real = real;
		tmp.imagine = imagine;
		tmp.real = tmp.real * M.real - tmp.imagine * M.imagine;
		return tmp;
	}
	Complex Complex::Div(Complex M)
	{
		Complex tmp;
		tmp.real = real;
		tmp.imagine = imagine;
		tmp.real = (tmp.real * M.real + tmp.imagine * M.imagine) / (pow(M.real, 2) + pow(M.imagine, 2));
		tmp.imagine = (tmp.real * M.imagine - tmp.real * M.imagine) / (pow(M.real, 2) + pow(M.imagine, 2));
		return tmp;

	}

	void Complex::Conj()
	{
		Complex tmp;
		tmp.real = real;
		tmp.imagine = imagine;
		tmp.real = tmp.real;
		tmp.imagine = -tmp.imagine;
		return;
	}
}