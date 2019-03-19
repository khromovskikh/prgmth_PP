#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций
	void In(complex &c, ifstream &ist);
	void In(rational &r, ifstream &ist);
	// Ввод параметров обобщенного числа из файла
	number* In(ifstream &ifst)
	{
		number *num;
		int k;
		ifst >> k;
			switch (k) {
			case 1:
				num = new number;
				num->k = number::key::СOMPLEX;
				In(num->c, ifst);
				return num;
			case 2:
				num = new number;
				num->k = number::key::RATIONAL;
				In(num->r, ifst);
				return num;
			default:
				return nullptr;
			}

	}
} // end simple_numbers namespace