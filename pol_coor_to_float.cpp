#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers 
{
	float pol_coor_to_float(pol_coor &pc)
	{
		return (pc.phi + pc.d);
	}
}