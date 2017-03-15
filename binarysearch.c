#include <stdio.h>
#include <stdlib.h>
int binarysearch( int a[], int key, int alength);

int main()
{
	time_t t; //make sure to type time underscore t
	int i;
	srand((unsigned) time(&t)); /* Intializes random number generator */
	int length = 25;
	int primes[25] = {2 ,3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	//print array
	for (i = 0; i < length; i++) printf("%d " ,primes[i]);
	//
	int searchValue;
	searchValue = rand() % 100;
	//searchValue = 97;
	int index = binarysearch(primes, searchValue, length);
	printf("Found %d at %d \n", searchValue, index);
	return (0);
}
			int binarysearch( int a[], int key, int alength){
						int start = 0;
						int end = alength - 1;
						printf("end = %d \n", end);
						int mid;
						while (start <= end) {
							mid = (start + end) / 2;
							if (key == a[mid]) {
							return mid;
							}
							if (key < a[mid]) {
							end = mid -1;
							} else {
								start = mid + 1;
							}
						}
					return -1;
				}
