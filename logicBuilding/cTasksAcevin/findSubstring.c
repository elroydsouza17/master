#include <stdio.h>
#include <string.h>

int main ()
{

//	char *test1 = "Main string is this test if test2 string exists in test1";
//	char *test2 = "if test2 string exists in test1";
	char test1 [] = "Main string is this test if test2 string exists in test1";
	char test2 [] = "if test2 string exists in test1";
	char *token = strtok(test2," ");
	
	while (token != NULL) {
	char *ret = strstr(test1, token);

	if (ret != NULL)
       	{
		printf("%s",token);
//		for (int i = 0; i < strlen(token); i++)
//       		{
//			printf("%c",ret[i]);
//		}  
	} else 
	{
		printf("String not found");
	}	
	
	token = strtok(NULL," ");
	
	}
}
		


