#include "number_atd.h"

namespace simple_numbers {
	float complex_ToFloat(complex &c);
	float rational_ToFloat(rational &r);
	float pol_coor_ToFloat(pol_coor &pc);

	float number_ToFloat(number &num)
	{
		switch (num.k) {
		case number::key::ÑOMPLEX:
			return complex_ToFloat(num.c);
		case number::key::RATIONAL:
			return rational_ToFloat(num.r);
		case number::key::POL_COOR:
			return pol_coor_ToFloat(num.pc);
		default:
			return -1;
		}
	}
}