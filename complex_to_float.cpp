#include "complex_atd.h"
#include <cmath>;
using namespace std;
namespace simple_numbers 
{
	float complex_to_float(complex &c)
	{
		return (sqrt((c.re)*(c.re) + (c.im)*(c.im)));
	}
}