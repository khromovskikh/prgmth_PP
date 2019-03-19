#include "container_atd.h"
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// ������������� ����������
	void Init(container **begin)
	{
		*begin = nullptr;

	}
	// ������� ���������� �� ���������
	// (������������ ������)
	void Clear(container **begin) {
		if (*begin == 0)
			return;
		container *p = *begin;
		container *t;
		
		if (*begin != nullptr)
		{
			do
			{
				t = p;
				p = p->next;
				delete t;
			} while (p != *begin);
		}
		*begin = nullptr;
	}
} // end simple_numbers namespace