//File Created By: Brendon Skiba                     |
//Computer Used: Dell OPTIPLEX 9020 Desktop          |
//Memory (RAM): 16 Gb                                |
//Processor: Intel Core i5-4590 CPU @ 3.30Ghz x 4    |
//Graphics Card: Nvidia GeForce GTX 745/PCIe/SSE2    |
//Base system: Debian GNU/Linux 8 (jessie) 64-bit    |
//====================================================

#include <stdio.h>
	int bsearch(int array[], int key);
	int main ()
	{
	int array[256] = {2,5,6,11,12,13};
	int searchValue = 11;
	int index = bsearch(array, searchValue);
	printf("Found 11 at %d \n\n", index);

	}
	
	int bsearch(int array[], int key){
		int start = 0;
		int end = sizeof(array);
		int mid;
		while (start <= end) {
			mid = (start + end) / 2;
			if (key == array[mid]) {
				return mid;
			}
			if (key < array[mid]) {
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
		return -1;
	}
