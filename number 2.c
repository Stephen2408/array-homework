#include<stdio.h>
void main()
{
	int aray[10],i,total,high;
	for(i=0;i<10;i++){
		printf("\nEnter value %d : ",i);
		scanf("%d",&aray[i]);
		high = aray[0];}
	for(i=1;i<10;i++){
		if(aray[i]>high)
			high = aray[i];
		}
			printf("the highest is :%d",high);
	
	for(i=0,total = 0;i<10;i++)
		total += aray[i];
	
	printf("\nthe average value entered was: %d",total/i);
}
