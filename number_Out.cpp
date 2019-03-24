#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций.
	void Out(complex &c, ofstream &ofst);
	void Out(rational &r, ofstream &ofst);
	float number_ToFloat(number &num);
	void Out(pol_coor &pc, ofstream &ofst);
	// Вывод параметров текущего числа в поток
	void Out(number &n, ofstream &ofst) {//почему в ооп не будет аналога?
		switch (n.k) {
		case number::key::СOMPLEX:
			Out(n.c, ofst);
			ofst << "float form: " << number_ToFloat(n) << endl;
			break;
		case number::key::RATIONAL:
			Out(n.r, ofst);
			ofst << "float form: " << number_ToFloat(n) << endl;
			break;
		case number::key::POL_COOR:
			Out(n.pc, ofst);
			break;
		default:
			ofst << "Incorrect number!" << endl;
		}
	}
} // end simple_numbers namespace