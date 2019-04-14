#include "number_atd.h"
#include "container_atd.h"
namespace simple_numbers 
{
	bool compare_num(number *first, number *second);
	container* sort_c(container **con)
	{
		container *head = *con;
		container *nxt, *out = nullptr, *cur, *pr; //out - ����� - ������� ����
		if (*con != nullptr)
		{
			do 
			{ //���� �� ����� �������� ������
				nxt = *con; 
				*con = (*con)->next; //��������� ��������� �������
				for (cur = out, pr = nullptr; cur != nullptr && compare_num(nxt->num, cur->num); pr = cur, cur = cur->next);
				//����, ���� �������� ��������� ������� 
				if (pr == nullptr) 
				{ 
					nxt->next = out; out = nxt;
				} //��������� � ������
				else
				{
					nxt->next = cur; pr->next = nxt;
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