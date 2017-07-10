#ifndef _FRACTION_HPP
#define _FRACTION_HPP

struct Fraction
{
	int numerator;
	int denominator;
	
	void setup(int n, int d)
	{
		numerator = n;
		denominator = d;
	}
	
	void display()
	{
		cout << numerator << "/" << denominator;
	}

	Fraction add(Fraction other)
	{
		Fraction result;
		Fraction common1;
		Fraction common2;

		common1.setup(this->numerator * other.denominator, this->denominator * other.denominator);
		common2.setup(other.numerator * this->denominator, this->denominator * other.denominator);
		
		result.numerator = common1.numerator + common2.numerator;
		result.denominator = common1.denominator;

		return result;
	}

	Fraction subtract(Fraction other)
	{
		Fraction result;
		Fraction common1;
		Fraction common2;

		common1.setup(this->numerator * other.denominator, this->denominator * other.denominator);
		common2.setup(other.numerator * this->denominator, this->denominator * other.denominator);

		result.numerator = common1.numerator - common2.numerator;
		result.denominator = common1.denominator;

		return result;
	}

	Fraction multiply(Fraction other)
	{
		Fraction result;
		result.numerator = this->numerator * other.numerator;
		result.denominator = this->denominator * other.denominator;
		return result;
	}
	
	Fraction divide(Fraction other)
	{
		Fraction result;
		result.numerator = this->numerator * other.denominator;
		result.denominator = this->denominator * other.numerator;
		return result;

	}
};

#endif