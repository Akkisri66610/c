#include<stdio.h>
#include<string.h>

void main()
{
	char str[10] = "cgc";
	int x =strlen(str);
	
	printf("%d\n", x);
	
	char str1[10] = "cgc";
	strrev(str1);
	printf("%s\n",str1);
	
	strupr(str1);
	printf("%s\n",str1);
	
	strlwr(str1);
	printf("%s\n",str1);
	
	int i = strcmp(str,str1);
	printf("%d\n",i);
	
	char source[10] = "Sayonara";
	char target[20];
	
	strcpy(target,source);
	printf("%s\n",source);
	printf("%s\n",target);
	
	strcat(target,str1);
	printf("source string %s\n",str1);
	printf("target string %s",target);
	
}
