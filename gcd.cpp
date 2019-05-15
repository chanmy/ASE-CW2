#include <cstdlib> // for abs(long long int)
#include <algorithm> // for min()

#include "gcd.h"

namespace ExactArithmetic
{

long long int gcd(long long int i, long long int j)
/*
 *  Note:
 *  This is a very inefficent algorithm for computing the greatest common divisor.
 *  Euclid's Algorithm would be much more efficient.
 */
{
	long long int temp;
	while (j != 0) {
		temp = j;
		j = i % j;
		i = temp;
	}
	return i;
}

} // End of namespace ExactArithmetic
