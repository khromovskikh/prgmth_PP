#include "number_atd.h"
namespace simple_numbers 
{
	// ��������� ��������� ������� 
	float number_to_float(number &num);
	// C�������� ������ ���� ����������� �������� 
	bool compare_num(number *first, number *second)
	{
		return number_to_float(*first) < number_to_float(*second);
	}
}