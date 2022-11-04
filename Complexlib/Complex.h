#pragma once
#include  <iostream>
using namespace std;

namespace Complexfunc {
	class Complex
	{

	public:
		double real;
		double imagine;
		Complex() { real = imagine = 0; }
		Complex(double r, double i) { real = r, imagine = i; }
		Complex operator+(Complex M);
		Complex operator=(Complex M);

		Complex Read();
		void Display();

		Complex Add(Complex M);
		Complex Sub(Complex M);
		Complex Mul(Complex M);
		Complex Div(Complex M);
		void Conj();

	};
}