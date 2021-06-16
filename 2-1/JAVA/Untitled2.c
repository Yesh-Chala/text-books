#include<stdio.h>
#include<conio.h>
main()
{
	int curr, prev;
	int len=0, maxlen=0;
	printf("enter 1st value");
	scanf("%d",&prev);
	if(prev!=-1)
	{
		len=1;
		printf("enter 2nd value");
	    scanf("%d",&curr);
	    while(curr!=-1)
	    {
	    	len=len+1;
	    	printf("enter next value");
	    	scanf("%d",&curr);
	    	if(prev<curr)
	    	{
	    		len=len+1;
	    		prev=curr;
	    		printf("enter next value");
	    		scanf("%d",&curr);
	    		if(prev>curr)
	    		{
	    			if(len>maxlen)
	    			{
	    				maxlen=len;	
	    				len=1;
					}
				}
			}
			else
			{
			maxlen=len;	
			}
	   }
	   printf("the maximum length is %d",maxlen);
   }
}
