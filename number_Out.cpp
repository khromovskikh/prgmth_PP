#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers 
{
	void out(complex &c, ofstream &ofst);
	void out(rational &r, ofstream &ofst);
	float number_to_float(number &num);
	void out(pol_coor &pc, ofstream &ofst);
	void out(number &n, ofstream &ofst) 
	{
		switch (n.k) 
		{
			case number::key::ÑOMPLEX:
				out(n.c, ofst);
				ofst << "float form: " << number_to_float(n) << endl;
				break;
			case number::key::RATIONAL:
				out(n.r, ofst);
				ofst << "float form: " << number_to_float(n) << endl;
				break;
			case number::key::POL_COOR:
				out(n.pc, ofst);
				ofst << "float form: " << number_to_float(n) << endl;
				break;
			default:
				ofst << "Incorrect number!" << endl;
		}
		ofst << "measure = " << n.measure << endl;
	}
} // end simple_numbers namespace