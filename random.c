#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	
	printf( "argv[0] %s \n" , argv[0] );
	printf( "argv[1] %s \n" , argv[1] );
	printf( "argv[2] %s \n" , argv[2] );
	time_t t;
	int i, value, randomvalue;
	int loopvalue = atoi( argv[1]);
	int modvalue = atoi( argv[2]);
	
	srand((unsigned) time(&t));
	
	for( i = 0 ; i < loopvalue; i++ )
	{
		randomvalue = rand();
		value = randomvalue % modvalue;
		printf("%d is %d \n" , randomvalue, value);
	}
	
	return(0);
	
}
