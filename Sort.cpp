#include "number_atd.h"
#include "container_atd.h"
namespace simple_numbers {
	// ��������� ��������� �������
	bool Compare(number *first, number *second);
	// ���������� ����������� ���������� 
	container* Sort(container **con)
	{
	
			container *head = *con;
			container *q, *out = nullptr, *p, *pr; //out - ����� - ������� ����
			if (*con != nullptr){
			do { //���� �� ����� �������� ������
				q = *con; *con = (*con)->next; //��������� ��������� �������
				for (p = out, pr = nullptr; p != nullptr && Compare(q->num, p->num); pr = p, p = p->next);
				//����, ���� �������� ��������� ������� 
				if (pr == nullptr) 
				{ 
					q->next = out; out = q;
				} //��������� � ������
				else
				{
					q->next = p; pr->next = q;
				} //��� ����� �����������
			} while (*con != head);
			container *cur = out;
			while (cur->next != nullptr)
			{
				cur = cur->next;
			}
			cur->next = out;
		}
		return out;
	}
}