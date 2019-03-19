#include <fstream>
#include "rational_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод параметров дроби в поток
	void Out(rational &r, ofstream &ofst)
	{
		ofst << "It is Rational number: "
			<< r.a << "/" << r.b << endl;
	}
} // end simple_numbers namespace