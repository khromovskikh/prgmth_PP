#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// ��������� ��������� ������� �������
	void Out(number &num, ofstream &ofst);
	// ����� ����������� ���������� � ��������� �����
	void Out(container **begin, ofstream &ofst) {
		container *p = *begin;
		int i = 1;
		int  kol = 0;
//		if ((*begin)->next != nullptr)
		if (*begin != nullptr)
		{
			do
			{
				kol++;
				p = p->next;
			}while (p != *begin);
			p = *begin;
		}
		ofst << "Container contains " << kol
			<< " elements." << endl;
//		if ((*begin)->next != nullptr)
		if (*begin != nullptr)
		{
			do
			{
				ofst << i << ": ";
				Out(*(p)->num, ofst);     /////// p->a  ������������� � ��������� �������� ���������� 
				p = p->next;
				i++;
			} while (p != *begin);
		}
	}
} // end simple_nubers namespace
