#include "dividebyzeroerror.h"
#include "gcd.h"
#include "integer.h"
#include "rational.h"

#define BOOST_TEST_MODULE Rational
#include <boost/test/unit_test.hpp>

using namespace ExactArithmetic;

BOOST_AUTO_TEST_SUITE(arithmethic_operation)
BOOST_AUTO_TEST_CASE(addition)
{
	int num1 = 1, num2 = 1, numResult = 2;
	int denom1 = 3, denom2 = 3, denomResult = 3;

	Rational test = Rational(num1 * denom2 + denom1 * num2, denom1 * denom2);
	Rational result = Rational(numResult, denomResult);
	BOOST_CHECK_EQUAL(test, result);
}
BOOST_AUTO_TEST_CASE(subtraction)
{
	int num1 = 1, num2 = 1, numResult = 0;
	int denom1 = 3, denom2 = 3, denomResult = 1;

	Rational test = Rational(num1 * denom2 - denom1 * num2, denom1 * denom2);
	Rational result = Rational(numResult, denomResult);
	BOOST_CHECK_EQUAL(test, result);
}
BOOST_AUTO_TEST_CASE(multiplication)
{
	int num1 = 1, num2 = 1, numResult = 1;
	int denom1 = 3, denom2 = 3, denomResult = 9;

	Rational test = Rational(num1 * num2, denom1 * denom2);
	Rational result = Rational(numResult, denomResult);
	BOOST_CHECK_EQUAL(test, result);
}
BOOST_AUTO_TEST_CASE(division)
{
	int num1 = 1, num2 = 1, numResult = 1;
	int denom1 = 3, denom2 = 3, denomResult = 1;

	Rational test = Rational(num1 * denom2, denom1 * num2);
	Rational result = Rational(numResult, denomResult);
	BOOST_CHECK_EQUAL(test, result);
}
BOOST_AUTO_TEST_SUITE_END()