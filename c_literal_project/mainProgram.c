#include <stdio.h>

typedef struct
    {
	size_t length;
	unsigned char *start;
    } str_t;

#define length(s) (sizeof(s) - 1)

#define str_set(str, text)  do       \
    {                                    \
        (str)->length = length(text);    \
        (str)->start = (unsigned char *) text;  \
    } while(0)					\


int main () {
	str_t str;
	str_set(&str, "foo");
//	printf("string is:  %s and length is: %d \n",str.start, str.length);
	printf("1st string set:"); 
	for (int i = 0; i < str.length; i++)
       	{
		printf("%c",str.start[i]);
	}


	printf("\n2nd string set:"); 
	str_set(&str, 1 ? "someword" : "another");	
	for (int i = 0; i < str.length; i++)
       	{
		printf("%c",str.start[i]);
	}
//	printf("string is:  %s and length is: %d \n",str.start, str.length);
}
