#ifndef __number_atd__
#define __number_atd__
// ����������� ����������� ����� ������
#include "complex_atd.h"
#include "rational_atd.h"
#include <string>
namespace simple_numbers {
	// ���������, ���������� ��� ��������� ���� �����
	struct number {
		// �������� ������ ��� ������� �� �����
		enum key { �OMPLEX, RATIONAL };
		key k; // ����
		std::string ed_izm;
			   // ������������ ������������
		union { // ���������� ���������
			complex c;
			rational r;
		};
	};
} // end simple_numbers namespace
#endif

