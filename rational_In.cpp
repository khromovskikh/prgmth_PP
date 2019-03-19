#include <fstream>
#include "rational_atd.h"
using namespace std;
namespace simple_numbers {
	// ¬вод параметров дроби из потока
	void In(rational &r, ifstream &ifst)
	{
		float A, B;
		ifst >> A >> B;
		if (B == 0) B=1;

		r.a = (int)A;
		r.b = (int)B;
	}
} // end simple_numbers namespace
