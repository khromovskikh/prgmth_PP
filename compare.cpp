#include "number_atd.h"
namespace simple_numbers {
	// ��������� ��������� ������� 
	float number_ToFloat(number &num);
	// C�������� ������ ���� ����������� �������� 
	bool Compare(number *first, number *second)
	{
		return number_ToFloat(*first) < number_ToFloat(*second);
	}
}