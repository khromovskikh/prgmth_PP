#ifndef __number_atd__
#define __number_atd__
// ����������� ����������� ����� ������
#include "complex_atd.h"
#include "rational_atd.h"
namespace simple_numbers {
	// ���������, ���������� ��� ��������� ���� �����
	struct number {
		// �������� ������ ��� ������� �� �����
		enum key { �OMPLEX, RATIONAL };
		key k; // ����
			   // ������������ ������������
		union { // ���������� ���������
			complex c;
			rational r;
		};
	};
} // end simple_numbers namespace
#endif

