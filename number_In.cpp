#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers 
{
	void in(complex &c, ifstream &ist);
	void in(rational &r, ifstream &ist);
	void in(pol_coor &pc, ifstream &ist);
	number* in(ifstream &ifst)
	{
		number *num;
		int k;
		ifst >> k;
		switch (k) 
		{	
			case 1:
				num = new number;
				num->k = number::key::ÑOMPLEX;
				in(num->c, ifst);
				ifst >> num->measure;
				return num;
			case 2:
				num = new number;
				num->k = number::key::RATIONAL;
				in(num->r, ifst);
				ifst >> num->measure;
				return num;
			case 3:
				num = new number;
				num->k = number::key::POL_COOR;
				in(num->pc, ifst);
				ifst >> num->measure;
				return num;
			default:
				return nullptr;
		}
	}
} // end simple_numbers namespace