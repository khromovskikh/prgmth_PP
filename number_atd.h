#ifndef __number_atd__
#define __number_atd__
#include "complex_atd.h"
#include "rational_atd.h"
#include "pol_coor_atd.h"
#include <string>
namespace simple_numbers 
{
	struct number 
	{
		enum key { �OMPLEX, RATIONAL, POL_COOR };
		key k; // ����
		std::string measure;
		union
		{
			complex c;
			rational r;
			pol_coor pc;
		};
	};
} // end simple_numbers namespace
#endif

