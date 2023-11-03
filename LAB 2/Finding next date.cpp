/*Program to find the next date of a given date*/
#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Date:");
	scanf("%d %d %d",&d,&m,&y);
	if(m==2)
	{
		if(d>=1 && d<=27)
		{
		d+=1;
		printf("%d %d %d",d,m,y);
	    }
		else if(y%4!=0)
		{
			if(d==28)
			{
			  d=1;
			  m+=1;
			  printf("%d %d %d",d,m,y);
		    }
			else printf("Invalid input");
		}
		if(y%4==0)
	    {
	    	if(y%100==0)
	    	{
	    		if(y%400==0 && d==28)
	    		{
	    			d+=1;
	    			printf("%d %d %d",d,m,y);
				}
				else if(y%400==0 && d==29)
				{
				  m+=1;
				  d=1;
				  printf("%d %d %d",d,m,y);
				}
				else if(y%400!=0)
		        {
		    	 if(d==28)
		    	 {
		    	   d=1;
		    	   m+=1;
		    	   printf("%d %d %d",d,m,y);
		         }
		    	 else printf("Invaid input");
		        }
		    }
		    else if(y%100!=0)
		    {
		    	if(d==28)
		    	{
				
		    	  d+=1;
		    	  printf("%d %d %d",d,m,y);
		        }
		    	else if(d==29)
		    	{
				  d=1;
		    	  m+=1;
		    	  printf("%d %d %d",d,m,y);
		        }
		    	else printf("Invalid input");
			}
		}
	}
	else if(m==1||m==3||m==5||m==7||m==8||m==10)
	{
	   if(d>=1 && d<=30)
	   {
	     d+=1;
	     printf("%d %d %d",d,m,y);
	   }
	   else if(d==31)
	   {
	     m+=1;
	     d=1;
	     printf("%d %d %d",d,m,y);
	   }
	   else printf("Invalid input");
	}
	else if(m==4||m==6||m==9||m==11)
	{
		if(d>=1 && d<=29)
	    {
			d+=1;
		    printf("%d %d %d",d,m,y);
		}
		else if(d>=31)
		{
		 printf("Invalid input");
	    }
		else if(d==30)
		{
		  d=1;
		  m+=1;
		  printf("%d %d %d",d,m,y);;
	    }
	}
	else if(m==12)
	{
		if(d>=1 && d<=30)
		{
		  d+=1;
		  printf("%d %d %d",d,m,y);
	    }
		else if(d==31)
	    {
	    	m=1;
		    d=1;
		    y+=1;
		    printf("%d %d %d",d,m,y);
	    }
		else printf("Invalid input");
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
