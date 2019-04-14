#include "container_atd.h"
#include "number_atd.h"
using namespace std;
namespace simple_numbers 
{
	void init(container **begin)
	{
		*begin = nullptr;
	}
	void clear(container **begin) 
	{
		if (*begin == 0)
			return;
		container *cur = *begin;
		container *cur_next;
		if (*begin != nullptr)
		{
			do
			{
				cur_next = cur;
				cur = cur->next;
				delete cur_next;
			} while (cur != *begin);
		}
		*begin = nullptr;
	}
} // end simple_numbers namespace