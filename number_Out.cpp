#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// ��������� ��������� ������� �������.
	void Out(complex &c, ofstream &ofst);
	void Out(rational &r, ofstream &ofst);
	// ����� ���������� �������� ����� � �����
	void Out(number &n, ofstream &ofst) {//������ � ��� �� ����� �������?
		switch (n.k) {
		case number::key::�OMPLEX:
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