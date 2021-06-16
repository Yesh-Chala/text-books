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
	    if(prev<curr)
	    {
	    	len=len+1;
	    	printf("enter next value");
	    	scanf("%d",&curr);
	    	while(curr!=-1)
	    	{
	    		len=len+1;
	    		prev=curr;
	    		printf("enter next value");
	    		scanf("%d",&curr);
	    		if(prev>curr)
		  		 {  
		  		   len=1;
		  		 }
		  		 if(maxlen<len)
	        	{
	    		maxlen=len;
		    	}
		}
	    	}
	    	
		else
		{
			maxlen=len;
		}
	}
					  
	printf("the series of max lengths is %d",maxlen);
}
