#include "number_atd.h"
namespace simple_numbers 
{
	// Сигнатуры требуемых функций 
	float number_to_float(number &num);
	// Cравнение ключей двух программных объектов 
	bool compare_num(number *first, number *second)
	{
		return number_to_float(*first) < number_to_float(*second);
	}
}