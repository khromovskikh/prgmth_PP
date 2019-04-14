#include <fstream>
#include "container_atd.h"
#include "number_atd.h"
using namespace std;
namespace simple_numbers 
{
	void out(number &num, ofstream &ofst);
	void filter_complex(container &con, ofstream &ofst)
	{
		ofst << "Only complex numbers." << endl;
		container *cur = &con;
		int i = 1;
		if (&con != nullptr)
		{
			do
			{
				if (cur->num->k == number::ÑOMPLEX)
				{
					ofst << i << ": ";
					out(*(cur)->num, ofst);
				}
				cur = cur->next;
				i++;
			} while (cur != &con);
		}
	}
}