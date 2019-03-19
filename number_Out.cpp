#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций.
	void Out(complex &c, ofstream &ofst);
	void Out(rational &r, ofstream &ofst);
	// Вывод параметров текущего числа в поток
	void Out(number &n, ofstream &ofst) {//почему в ооп не будет аналога?
		switch (n.k) {
		case number::key::СOMPLEX:
			Out(n.c, ofst);
			break;
		case number::key::RATIONAL:
			Out(n.r, ofst);
			break;
		default:
			ofst << "Incorrect number!" << endl;
		}
		ofst << "measure = " << n.ed_izm << endl;
	}
} // end simple_numbers namespace