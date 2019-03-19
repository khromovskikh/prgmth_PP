#ifndef __container_atd__
#define __container_atd__
namespace simple_numbers {
	// Ссылка на описание числа.
	// Знание структуры самого числа для представленной
	// реализации контейнера не требуется
	struct number;//?????
	// Простейший контейнер на основе одномерного массива
	struct container
	{
		number* num;
		container* next;
	};
} // end simple_numbers namespace
#endif

