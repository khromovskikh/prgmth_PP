#include <fstream>
#include "complex_atd.h"
using namespace std;
namespace simple_numbers 
{
	void in(complex &c, ifstream &ifst)
	{
		ifst >> c.re >> c.im;
	}
} // end simple_numbers namespace