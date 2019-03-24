#include "number_atd.h"
namespace simple_numbers {
	// Сигнатуры требуемых функций 
	float number_ToFloat(number &num);
	// Cравнение ключей двух программных объектов 
	bool Compare(number *first, number *second)
	{
		return number_ToFloat(*first) < number_ToFloat(*second);
	}
}