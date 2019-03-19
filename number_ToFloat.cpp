#include "number_atd.h"

namespace simple_numbers {
	float complex_ToFloat(complex &c);
	float rational_ToFloat(rational &r);

	float number_ToFloat(number &num)
	{
		switch (num.k) {
		case number::key::ÑOMPLEX:
			return complex_ToFloat(num.c);
		case number::key::RATIONAL:
			return rational_ToFloat(num.r);
		default:
			return -1;
		}
	}
}