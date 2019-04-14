#include <fstream>
#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers 
{
	// Ввод параметров комплексного числа из файла
	void in(pol_coor &pc, ifstream &ifst) 
	{
		float d_float = 0;
		ifst >> pc.phi >> d_float;//????????????????????????????
		pc.d = abs((int)d_float);
	}
} // end simple_numbers namespace