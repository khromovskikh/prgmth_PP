#include <fstream>
#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// ���� ���������� ������������ ����� �� �����
	void In(complex &c, ifstream &ifst) {
		ifst >> c.x >> c.y;
	}
} // end simple_numbers namespace