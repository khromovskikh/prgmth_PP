#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// ��������� ��������� ������� �������
	void In(complex &c, ifstream &ist);
	void In(rational &r, ifstream &ist);
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
			default:
				return nullptr;
			}

	}
} // end simple_numbers namespace