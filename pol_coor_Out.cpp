#include <fstream>
#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод параметров комплексного числа в поток
	void Out(pol_coor &pc, ofstream &ofst) {
		ofst << "It is Polar coordinates: (" << pc.phi
			<< ", " << pc.d << ")" << endl;
	}
} // end simple_numbers namespace