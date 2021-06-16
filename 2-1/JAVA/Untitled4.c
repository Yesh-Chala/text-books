#include<stdio.h>
#include<conio.h>
main()
{
	int curr, prev;
	int len=0, maxlen=0;
	printf("enter 1st value");
	scanf("%d",&prev);
	while(prev!=-1)
	{
		printf("enter the next value");
		scanf("%d",&curr);
		if(curr>prev)
		{
			len=len+1;
		}
		maxlen=len;
		prev=curr;
		
	}
	printf("length is %d",maxlen);
}
