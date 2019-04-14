#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_numbers 
{
	number *in(ifstream &ifdt);
	void in(container **begin, ifstream &ifst) 
	{
		int kol = 0;
		container *end = nullptr;
		number *temp;
		while (!ifst.eof())
		{
			if (kol == 0)
			{
				temp = in(ifst);
				if (temp != NULL)
				{
					*begin = new container;
					end = *begin;
					(*begin)->num = temp;   // ������� ��������� ������ ������
					(*begin)->next = *begin;
					kol++;
				}
			}
			else
			{
				temp = in(ifst);
				if (temp != NULL) 
				{
					end->next = new container; // ��������� �������� ������ ��� ����� ��
					end = end->next;  // � �������� ���� �� 
					end->num = temp;
					end->next = *begin;
					kol++;
				}
			}
		}
	}
} // end simple_numbers namespace
