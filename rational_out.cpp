#include <fstream>
#include "rational_atd.h"
using namespace std;
namespace simple_numbers 
{
	void out(rational &r, ofstream &ofst)
	{
		ofst << "It is Rational number: "
			<< r.chis << "/" << r.znam << endl;
	}
} // end simple_numbers namespace