#include <fstream>
#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров комплексного числа из файла
	void In(complex &c, ifstream &ifst) {
		ifst >> c.x >> c.y;
	}
} // end simple_numbers namespace