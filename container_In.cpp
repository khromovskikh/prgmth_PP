#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций
	number *In(ifstream &ifdt);
		// Ввод содержимого контейнера из указанного потока
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
						(*begin)->num = temp;   // который считывает голову списка
						(*begin)->next = *begin;
						kol++;
					}
				}
				else
				{
					temp = In(ifst);
					if (temp != NULL) {
						end->next = new container; // указатель выделяет память под новый эл
						end = end->next;  // и авняется след эл 
						end->num = temp;
						end->next = *begin;
						kol++;
					}
				}
			}
		}
} // end simple_numbers namespace
