#include <fstream>
#include "container_atd.h"
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	void Out(number &num, ofstream &ofst);
	void OutComplex(container &con, ofstream &ofst)
	{
		ofst << "Only complex numbers." << endl;
		container *p = &con;
		int i = 1;
		if (&con != nullptr)
		{
			do
			{
				if (p->num->k == number::ÑOMPLEX)
				{
					ofst << i << ": ";
					Out(*(p)->num, ofst);
				}
				p = p->next;
				i++;
			} while (p != &con);
		}
	}
}