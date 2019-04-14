#include "number_atd.h"
namespace simple_numbers 
{
	float complex_to_float(complex &c);
	float rational_to_float(rational &r);
	float pol_coor_to_float(pol_coor &pc);
	float number_to_float(number &num)
	{
		switch (num.k) 
		{
			case number::key::ÑOMPLEX:
				return complex_to_float(num.c);
			case number::key::RATIONAL:
				return rational_to_float(num.r);
			case number::key::POL_COOR:
				return pol_coor_to_float(num.pc);
			default:
				return -1;
		}
	}
}