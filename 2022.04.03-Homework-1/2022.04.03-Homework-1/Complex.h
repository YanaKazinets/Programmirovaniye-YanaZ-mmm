#pragma once
#include<iostream>

class Complex
{
private:
	double re;
	double im;

public:
	Complex(double re = 0, double im = 0);
	Complex(const Complex& complex);
	~Complex();

	void setRe(double re);
	void setIm(double im);
	double getRe();
	double getIm();

	void print();

	Complex& operator=(const Complex& complex);
	friend Complex operator+(const Complex& compl1, const Complex& compl2);
	friend Complex operator-(const Complex& compl1, const Complex& compl2);
	friend Complex operator*(const Complex& compl1, const Complex& compl2);
	friend Complex operator*(double mult, const Complex& complex);
	friend Complex operator*(const Complex& complex, double mult);
	friend Complex operator/(const Complex& compl1, const Complex& compl2);
	friend Complex operator/(const Complex& complex, double mult);
	friend Complex operator/(double mult, const Complex& complex);
	friend std::ostream& operator<<(std::ostream& stream, const Complex& complex);

	Complex reverse();
	Complex conj();
	double abs();
	double arg();
	/*void sqrt(int n, std::ostream& stream);
	void sqrtn(int n);*/



};

