#include "Complex.h"

Complex::Complex(double re, double im) :re(re), im(im) {}

Complex::Complex(const Complex & complex) : re(complex.re), im(complex.im) {}

Complex::~Complex()
{
	this->re = 0;
	this->im = 0;
}

void Complex::setRe(double re)
{
	this->re = re;
}

void Complex::setIm(double im)
{
	this->im = im;
}

double Complex::getRe()
{
	return this->re;
}

double Complex::getIm()
{
	return this->im;
}

void Complex::print()
{
	if (this->re != 0) { std::cout << this->re; }
	if (this->im > 0) { std::cout << "+"; }
	if (this->im != 0) { std::cout << this->im << "i"; }
	std::cout << std::endl;
}

Complex& Complex::operator=(const Complex & complex)
{
	this->re = complex.re;
	this->im = complex.im;
	return *this;
}

Complex Complex::reverse()
{
	return Complex(-this->re, -this->im);
}

Complex Complex::conj()
{
	return Complex(this->re, -this->im);
}

double Complex::abs()
{
	return (double)sqrt(this->re * this->re + this->im * this->im);
}

double Complex::arg()
{
	if (this->re > 0) { return atan(this->im / this->re); }
	else if (this->re < 0) {
		if (this->im >= 0) {return (3.14159 + atan(this->im / this->re));}
		else { return (-3.14159 + atan(this->im / this->re)); }
	}
	else if (this->im >= 0) { return 1.57080; }
		else { return -1.57080;}
}

/*void Complex::sqrtn(int n)
{
	for (int i = 0; i < n; ++i)
	{
		std::cout << pow(this->abs, 1 / n) * cos((this->arg + i * 6.28319) / n) << "+" << pow(this->abs, 1 / n) * sin((this->arg + i * 6.28319) / n) << "i" << std::endl;

	}
}

/*void Complex::sqrt(int n, std::ostream & stream)
{
	for (int i = 0; i < n; ++i)
	{
		stream << pow(sqrt(this->re * this->re + this->im * this->im), 1 / n) * cos((this->arg + i * 6.28319) / n) << "+" << pow(sqrt(this->re * this->re + this->im * this->im), 1 / n) * sin((this->arg + i * 6.28319) / n) << "i" << std::endl;
		
	}
}*/


Complex operator+(const Complex& compl1, const Complex& compl2)
{
	return Complex(compl1.re + compl2.re, compl1.im + compl2.im);
}

Complex operator-(const Complex & compl1, const Complex & compl2)
{
	return Complex(compl1.re - compl2.re, compl1.im - compl2.im);
}

Complex operator*(const Complex & compl1, const Complex & compl2)
{
	return Complex(compl1.re * compl2.re - compl1.im * compl2.im, compl1.re * compl2.im + compl1.im * compl2.re);
}

Complex operator*(double mult, const Complex & complex)
{
	return Complex(mult * complex.re, mult * complex.im);
}

Complex operator*(const Complex & complex, double mult)
{
	return Complex(mult * complex.re, mult * complex.im);
}

Complex operator/(const Complex & compl1, const Complex & compl2)
{
	return Complex((compl1.re * compl2.re + compl1.im * compl2.im) / (compl2.re * compl2.re + compl2.im * compl2.im), (compl1.im * compl2.re - compl1.re * compl2.im) / (compl2.re * compl2.re + compl2.im * compl2.im));
}

Complex operator/(const Complex & complex, double mult)
{
	return Complex(complex.re / mult, complex.im / mult);
}

Complex operator/(double mult, const Complex & complex)
{
	return Complex((mult * complex.re) / (complex.re * complex.re + complex.im * complex.im), ((-1) * mult * complex.im) / (complex.re * complex.re + complex.im * complex.im));
}

std::ostream & operator<<(std::ostream & stream, const Complex & complex)
{
	if (complex.re != 0)
	{
		if (complex.im > 0 ) 
		{
			if (complex.im != 1)
			{
				stream << complex.re << "+" << complex.im << "i";
				return stream;
			}
			else
			{
				stream << complex.re << "+" << "i";
				return stream;
			}
			
		}
		else if (complex.im < 0)
		{
			if (complex.im != -1)
			{
				stream << complex.re << complex.im << "i";
				return stream;
			}
			else
			{
				stream << complex.re << "-" << "i";
				return stream;
			}
		}
		else
		{
			stream << complex.re;
			return stream;
		}
	}
	else
	{
		if (complex.im != 1 && complex.im != -1)
		{
			stream << complex.im << "i";
			return stream;
		}
		else if(complex.im == 1)
		{
			stream << "i";
			return stream;
		}
		else
		{
			stream << "-i";
			return stream;
		}
	}
}



/*(a + bi)(c - di)  = ac
(c + di)     c*c + d*d*/
