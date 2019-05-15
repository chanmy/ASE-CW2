#ifndef INTEGER_H
#include "integer.h"
#endif INTEGER_H

using namespace ExactArithmetic;

Integer::Integer()
{
	digits.push_back(0);
}

//  Converting constructor.
Integer::Integer(unsigned long long int x)
{
	while (x > 0)
	{
		digits.push_back(x % 10);
		x = x / 10;
	}
}

//  Explicit converting constructor, will not be implicity applied.
Integer::Integer(const std::string & str)
{
	
}

//  Arithmetic Operators
Integer Integer::operator+(const Integer & intNum) const
{
	Integer result;

	return result;
}

Integer Integer::operator-(const Integer & intNum) const
{
	Integer result;

	return result;
}

Integer Integer::operator*(const Integer & intNum) const
{
	Integer result;

	return result;
}

Integer Integer::operator/(const Integer & intNum) const // Throws a DivideByZeroException for a 0 divisor.
{
	Integer result;

	return result;
}

Integer Integer::operator%(const Integer & intNum) const // Throws a DivideByZeroException for a 0 divisor.
{
	Integer result;

	return result;

}

// Comparison operators
bool Integer::operator<(const Integer & intNum) const
{
	bool result = false;
	
	return result;
}

bool Integer::operator>(const Integer & intNum) const
{
	bool result = false;

	return result;
}

bool Integer::operator<=(const Integer & intNum) const
{
	bool result = false;

	return result;
}

bool Integer::operator>=(const Integer & intNum) const
{
	bool result = false;

	return result;
}

bool Integer::operator==(const Integer & intNum) const
{
	bool result = false;

	return result;
}

bool Integer::operator!=(const Integer & intNum) const
{
	bool result = false;

	return result;
}

// Compound Assignment operators
Integer & Integer::operator+=(const Integer & intNum)
{
	return (*this);
}

Integer & Integer::operator-=(const Integer & intNum)
{
	return (*this);
}

Integer & Integer::operator*=(const Integer & intNum)
{
	return (*this);
}

Integer & Integer::operator/=(const Integer & intNum) // Throws a DivideByZeroException for a 0 divisor.
{
	return (*this);
}

Integer & Integer::operator%=(const Integer & intNum) // Throws a DivideByZeroException for a 0 divisor.
{
	return (*this);
}

// Increment and Decrement operators
Integer & Integer::operator++()	// pre-increment
{
	return (*this);
}  

Integer Integer::operator++(int intNum)	 // post-increment
{
	Integer result;

	return result;
}

Integer & Integer::operator--()		// pre-decrement
{
	return (*this);
}  

Integer Integer::operator--(int intNum)
{
	Integer result;

	return result;
} // post-decrement

std::string Integer::toString() const
{
	std::string result;

	return result;
}

std::ostream & operator<<(std::ostream &out, const Integer & intNum)
{
	return out;
}

std::istream & operator>>(std::istream &out, Integer & intNum)
{
	return out;
}

