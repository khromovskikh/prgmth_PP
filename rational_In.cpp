#include <fstream>
#include "rational_atd.h"
using namespace std;
namespace simple_numbers 
{
	void in(rational &r, ifstream &ifst)
	{
		float chisl_float, znam_float;
		ifst >> chisl_float >> znam_float;
		if (znam_float == 0) znam_float=1;
		r.chis = (int)chisl_float;
		r.znam = (int)znam_float;
	}
} // end simple_numbers namespace
