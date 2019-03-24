#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// ��������� ��������� ������� �������
	void In(complex &c, ifstream &ist);
	void In(rational &r, ifstream &ist);
	void In(pol_coor &pc, ifstream &ist);
	// ���� ���������� ����������� ����� �� �����
	number* In(ifstream &ifst)
	{
		number *num;
		int k;
		ifst >> k;

		switch (k) {
		case 1:
			num = new number;
			num->k = number::key::�OMPLEX;
			In(num->c, ifst);
			return num;
		case 2:
			num = new number;
			num->k = number::key::RATIONAL;
			In(num->r, ifst);
			return num;
		case 3:
			num = new number;
			num->k = number::key::POL_COOR;
			In(num->pc, ifst);
			return num;
		default:
			return nullptr;
		}

	}
} // end simple_numbers namespace