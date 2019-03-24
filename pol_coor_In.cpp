#include <fstream>
#include "pol_coor_atd.h"

using namespace std;
namespace simple_numbers {
	// Ввод параметров комплексного числа из файла
	void In(pol_coor &pc, ifstream &ifst) {

		float D = 0;

		ifst >> pc.phi >> D;//????????????????????????????

		pc.d = abs((int)D);

	}
} // end simple_numbers namespace