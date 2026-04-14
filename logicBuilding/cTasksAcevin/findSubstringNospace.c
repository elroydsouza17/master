#include <stdio.h>
#include <string.h>

int getCharCount(char* str, int searchSize, int startIndex); //  gets char count of substring

int main ()
{

	char str1 [] = "hellofourtwooneworld";
	char str2 [] = "onetwofour";
 	int searchWindowSize = strlen(str2);
	int str2CharCount = 0;	
	int str1CharCount = 0;	
	
	str2CharCount = getCharCount(str2, searchWindowSize, 0);


	for (int i = 0; i < strlen(str1); i++)
	{
		str1CharCount = 0;

		if((searchWindowSize + i) > strlen(str1))
		{	
			printf("Sub String not found exiting!!");
			break;
		}

		str1CharCount = getCharCount(str1, searchWindowSize, i);

		if(str2CharCount == str1CharCount)
		{
			printf("Index where count matches is : %d\n", i);

			for (int j = i; j < (i + searchWindowSize); j++)
			{
				printf("%c",str1[j]);
			}
			printf("\n");
			break;	
		}
	}

	return 0;
}

int getCharCount(char* str, int searchSize, int startIndex)
{	
	int charCount = 0;

	for (int i = startIndex; i < searchSize + startIndex; i++) 
	{	
		charCount = charCount + str[i];
	}

	return charCount;
}
