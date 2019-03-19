#include "rational_atd.h"
using namespace std;
namespace simple_numbers {
	float rational_ToFloat(rational &r)
	{
		return float(r.a)/float(r.b);
	}
}