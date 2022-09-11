#include<stdio.h>
void main()
{
	char alpha[26];
	int i,j;
	for(i=65,j=0;j<91;i++,j++)
	{
		alpha[j]=i;
		printf("the character now is %c\n",alpha[j]);
	}
	getchar();

	}
