#include <fstream>
#include "complex_atd.h"
using namespace std;
namespace simple_numbers 
{
	void out(complex &c, ofstream &ofst) 
	{
		ofst << "It is Complex number: "<< c.re
			<< " + i * (" << c.im << ")" << endl;
	}
} // end simple_numbers namespace