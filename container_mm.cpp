#include <fstream>
#include "container_atd.h"
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	void out(number &num, ofstream &ofst);
	void multi_method(container **begin, ofstream &ofst)
	{
		ofst << "Multimethod." << endl;

		if (*begin != nullptr )
		{

			for (container *first = *begin; first->next != *begin; first = first->next)
			{
				for (container *second = first->next; second != *begin; second = second->next)
				{
					switch (first->num->k)
					{
					case number::ÑOMPLEX:
						switch (second->num->k)
						{
						case number::ÑOMPLEX:
							ofst << "Complex and Complex." << endl;
							break;
						case number::RATIONAL:
							ofst << "Complex and Rational." << endl;
							break;
						case number::POL_COOR:
							ofst << "Complex and Polar coordinate." << endl;
							break;
						default:
							ofst << "Unknown type" << endl;
						}
						break;
					case number::RATIONAL:
						switch (second->num->k)
						{
						case number::ÑOMPLEX:
							ofst << "Rational and Complex." << endl;
							break;
						case number::RATIONAL:
							ofst << "Rational and Rational." << endl;
							break;
						case number::POL_COOR:
							ofst << "Rational and Polar coordinate." << endl;
							break;
						default:
							ofst << "Unknown type" << endl;
						}
						break;
					case number::POL_COOR:
						switch (second->num->k)
						{
						case number::ÑOMPLEX:
							ofst << "Polar coordinate and Complex." << endl;
							break;
						case number::RATIONAL:
							ofst << "Polar coordinate and Rational." << endl;
							break;
						case number::POL_COOR:
							ofst << "Polar coordinate and Polar coordinate." << endl;
							break;
						default:
							ofst << "Unknown type" << endl;
						}
					default:
						ofst << "Unknown type" << endl;
					}
					out(*(first)->num, ofst);
					out(*(second)->num, ofst);
				}
			}
		}
	}
}
