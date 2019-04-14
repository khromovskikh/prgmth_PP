#include "rational_atd.h"
using namespace std;
namespace simple_numbers 
{
	float rational_to_float(rational &r)
	{
		return float(r.chis)/float(r.znam);
	}
}