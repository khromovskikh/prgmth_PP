#ifndef __container_atd__
#define __container_atd__
namespace simple_numbers 
{
	struct number;
	struct container
	{
		number* num;
		container* next;
	};
} // end simple_numbers namespace
#endif

