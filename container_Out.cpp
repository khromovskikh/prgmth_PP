#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_numbers 
{
	void out(number &num, ofstream &ofst);
	float number_to_float(number &num);
	void out(container **begin, ofstream &ofst) 
	{
		container *cur = *begin;
		int i = 1;
		int  kol = 0;
		if (*begin != nullptr)
		{
			do
			{
				kol++;
				cur = cur->next;
			}while (cur != *begin);
			cur = *begin;
		}
		ofst << "Container contains " << kol<< " elements." << endl;
		if (*begin != nullptr)
		{
			do
			{
				ofst << i << ": ";
				out(*(cur)->num, ofst);     /////// p->a  разименовываю и отправл€ю значение переменной 
				cur = cur->next;
				i++;
			} while (cur != *begin);
		}
	}
} // end simple_nubers namespace