#include "dividebyzeroerror.h"
#include "gcd.h"
#include "integer.h"
#include "rational.h"

#define BOOST_TEST_MODULE Rational
#include <boost/test/unit_test.hpp>

using namespace ExactArithmetic;

Rational rational1 = Rational(1, 3);
Rational rational2 = Rational(1, 3);

BOOST_AUTO_TEST_SUITE(simple_operation)
BOOST_AUTO_TEST_CASE(addition_test)
{
	int num1, ;
	int denom;
	

	BOOST_CHECK_EQUAL(rational1 + rational2, result);
}

BOOST_AUTO_TEST_SUITE_END()