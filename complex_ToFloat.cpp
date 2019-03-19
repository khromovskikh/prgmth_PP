#include "complex_atd.h"
#include <cmath>;
using namespace std;
namespace simple_numbers {
	float complex_ToFloat(complex &c)
	{
		return (sqrt((c.x)*(c.x) + (c.y)*(c.y)));
	}
}