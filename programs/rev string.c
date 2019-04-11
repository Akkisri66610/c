#include<stdio.h>
#include<string.h>

int main()
{
	char str[10] = "akash";
	int i;
	for( i = 4;i >= 0;i--)
	{
		printf("%c",str[i]);
	}
	
	//printf("%s",str);
//	puts(str);
	return 0;
}
