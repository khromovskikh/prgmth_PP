#include <fstream>
#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers 
{
	void out(pol_coor &pc, ofstream &ofst) 
	{
		ofst << "It is Polar coordinates: (" << pc.phi
			<< ", " << pc.d << ")" << endl;
	}
} // end simple_numbers namespace