#include <reg51.h>

//for 11.0592MHz
void delay(unsigned int count)
{
	unsigned int i;
	while(count)
	{
		i = 115;
		while(i > 0)
			i--;
		count--;
	}
}



//main function called
void main ()
{

	while(1)
	{

	}

}
