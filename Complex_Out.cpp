#include <fstream>
#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// ����� ���������� ������������ ����� � �����
	void Out(complex &c, ofstream &ofst) {
		ofst << "It is Complex number: "<< c.x
			<< " + i * (" << c.y << ")" << endl;
	}
} // end simple_numbers namespace