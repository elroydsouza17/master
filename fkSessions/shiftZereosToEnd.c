#include <stdio.h>

int main () {
	int arr [] = {1, 0, 2, 0, 3};

	int length = sizeOf(arr) / sizeOf(arr[0]);
	int zeroCounter = 0;
	for (int i = 0; i < length; i++) 
	{
		if ( arr[i] == 0 ) {
			zeroCounter++;
			arr[i] = arr[i + zeroCounter];
		}
	}
