#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// ��������� ��������� ������� �������
	number *In(ifstream &ifdt);
		// ���� ����������� ���������� �� ���������� ������
		void In(container **begin, ifstream &ifst) {
			int kol = 0;
			//container *end = *begin;
			container *end = nullptr;
			number *temp;
			while (!ifst.eof())
			{
				//if (!ifst.)
				if (kol == 0)
				{
					temp = In(ifst);
					if (temp != NULL) {
						*begin = new container;
						end = *begin;
						//(*begin)->next = nullptr;
						(*begin)->num = temp;   // ������� ��������� ������ ������
						(*begin)->next = *begin;
						kol++;
					}
				}
				else
				{
					temp = In(ifst);
					if (temp != NULL) {
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
