#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main: main entry point for program
 * return: return zero if successful, otherwise, return non-zero value
 */
int main(void)
{
	int n;
	int lastdigit;
	srand(time(0));                                                                                 
        
	n = rand() - RAND_MAX / 2;                                                      
        lastdigit = n / 2;                                                                           
        
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}	                                                        
	else if	(lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n");
	else if (lastdigit < 6 && != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}  
