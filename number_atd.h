#ifndef __number_atd__
#define __number_atd__
// Подключение необходимых типов данных
#include "complex_atd.h"
#include "rational_atd.h"
namespace simple_numbers {
	// структура, обобщающая все имеющиеся виды чисел
	struct number {
		// значения ключей для каждого из чисел
		enum key { СOMPLEX, RATIONAL };
		key k; // ключ
			   // используемые альтернативы
		union { // используем включение
			complex c;
			rational r;
		};
	};
} // end simple_numbers namespace
#endif

