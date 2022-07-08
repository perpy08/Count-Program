#include <stdio.h>

void display()
{
	FILE *fcount;
	int i;
	fcount=fopen("Count.c","r");
	fscanf(fcount,"%d",&i);
	fclose(fcount);
	
	if(i >= 100)
	{
		//for hundreths
	printf("\n\n\n");
	printf("\t\t\t      [Current Count]\n\n");
	printf("\t\t\t\t***********\n");
	printf("\t\t\t\t*         *\n");
	printf("\t\t\t\t*    %d  *\n",i);
	printf("\t\t\t\t*         *\n");
	printf("\t\t\t\t***********\n");
	}
	else if(i < 100 && i >= 10)
	{
		//for tenths
	printf("\n\n\n");
	printf("\t\t\t      [Current Count]\n\n");
	printf("\t\t\t\t***********\n");
	printf("\t\t\t\t*         *\n");
	printf("\t\t\t\t*    %d   *\n",i);
	printf("\t\t\t\t*         *\n");
	printf("\t\t\t\t***********\n");
	}
	else if(i<10)
	{
		//for ones
	printf("\n\n\n");
	printf("\t\t\t      [Current Count]\n\n");
	printf("\t\t\t\t***********\n");
	printf("\t\t\t\t*         *\n");
	printf("\t\t\t\t*    %d    *\n",i);
	printf("\t\t\t\t*         *\n");
	printf("\t\t\t\t***********\n");
	}
	
	
	
	return 0;
	
}

void count()
{
	
	FILE *fcount;
	int i,n;

	while(i != 1 || i!=0)
	{
		display();
		printf("\n\n\n\n");
		printf("\t\t\t[ 1 ] - Input 1 to add 1\n");
		printf("\t\t\t[ 0 ] - Input 0 to subtract 1\n\n\n");
		printf("\t\t\t[ 69 ]input 69 to exit \n");
		printf("\n\n\t\t\t\t\t");
		scanf("%d",&i);
		system("cls");
		
		if(i==69)
		    {
		         return -1;
		    }
		else if(i==1)
		{
			fcount = fopen("Count.c", "r");
			fscanf(fcount,"%i", &n);
			fclose(fcount);
			
			fcount = fopen("Count.c", "w+");
			
			n=n+1;
			
			fprintf(fcount,"%d", n);
			
			fclose(fcount);
		}
		else if(i==0)
		{
			fcount = fopen("Count.c", "r");
			fscanf(fcount,"%i", &n);
			fclose(fcount);
			
			fcount = fopen("Count.c", "w+");
			
			n=n-1;
			
			fprintf(fcount,"%d", n);
			
			fclose(fcount);
		}
		    
		while(i != 1 && i!=0)
		{
			display();
			printf("\n\n\n");
			printf("\t\t\t      WRONG INPUT!\n");
			printf("\t\t\t[ 1 ] - Input 1 to add 1\n");
		    printf("\t\t\t[ 0 ] - Input 0 to subtract 1\n\n\n");
		    printf("\t\t\t[ 69 ]input 69 to exit \n");
		    printf("\n\n\t\t\t\t\t");
		    scanf("%d",&i);
		    system("cls");
		    if(i==69)
		    {
		         return -1;
		    }
		    else if(i==1)
		    {
			    fcount = fopen("Count.c", "r");
			    fscanf(fcount,"%i", &n);
			    fclose(fcount);
			
			    fcount = fopen("Count.c", "w+");
			
			    n=n+1;
			
			fprintf(fcount,"%d", n);
			
			fclose(fcount);
		}
		    
		}
		
		
		
		
		
	}
	
	    return 0;
	
}


void restart()
{
	FILE *fcount;
	
	fcount=fopen("Count.c","w+");
	fprintf(fcount,"0");
	fclose(fcount);
	
	printf("\n\n\n\n\n");
	printf("\t\t\t[Restarting Counter file data]\n\n\n");
	sleep(1);
	printf("\t\t\t\t*");
	sleep(1);
	printf(" *");
	sleep(1);
	printf(" *");
	sleep(1);
	printf(" *");
	sleep(1);
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t [Wiping Data, Please wait]\n\n\n");
	printf("\t\t\t\t* * * *");
	sleep(1);
	printf(" *");
	sleep(1);
	printf(" *");
	sleep(1);
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t   [Count Data Reset to 0 ]\n\n\n");
	sleep(2);
	system("cls");
}

void check()
{
	FILE *fcount;
	
	
	if((fcount=fopen("Count.c","r"))==NULL)
	{
		
	    printf("\n\n\n\n\n");
	    printf("\t\t    [This is your first time opening this program]\n\n\n");
	    sleep(3);
	    system("cls");
	    printf("\n\n\n\n\n");
	    printf("\t\t    [Creating \"Count.c\" file, Do not delete file]\n\n\n");
	    sleep(3);
	    printf("\t\t\t\t*");
	    sleep(1);
	    printf(" *");
	    sleep(1);
	    printf(" *");
	    sleep(1);
	    printf(" *");
	    sleep(1);
	    printf(" *");
	    sleep(1);
	    printf(" *");
	    sleep(1);
	    printf(" *");
	    sleep(1);
	    printf(" *");
	    sleep(1);
	                     fcount=fopen("Count.c","w+");
	                     fprintf(fcount,"0");
	                     fclose(fcount);
	    system("cls");
	    printf("\n\n\n\n\n");
	    printf("\t\t\t[File \"Count.c\" created successfully]\n\n\n");
	    sleep(3);
	    
	    return -1;
	}
	else
	{
		return -1;
	}
	
	
}

int main()
{
    system("MODE 80,25");
    FILE *fcount;
    int i;
    char op[1];
    
    check();
    

    while(i != 1 || i != 2 || i != 0 )
    {
    	display();
    	printf("\n\n\n");
        printf("\t\t\t Simple count-tracking program\n");
        printf("\t\t\t          [ INPUT ]\n\n");
    	printf("\t\t\t [ 1 ] Start\n");
    	printf("\t\t\t [ 2 ] Re-Start back to zero\n");
    	printf("\n\n");
    	printf("\t\t\t [ 0 ] Exit\n");
    	printf("\n\n\t\t\t\t\t");
    	scanf("%d",&i);
    	system("cls");
    	
    	while (i!=1 && i!=2 && i!=0)
    	{
    		display();
    		printf("\n\n\n");
    	    printf("\t\t\t        [ WRONG INPUT ]\n");
            printf("\t\t\t Simple counting tracking program\n");
    	    printf("\t\t\t [ 1 ] Start\n");
    	    printf("\t\t\t [ 2 ] Re-Start back to zero\n");
    	    printf("\n\n\n\n");
    	    printf("\t\t\t [ 0 ] Exit\n");
    	    printf("\n\n\t\t\t\t\t");
    	    scanf("%d",&i);
    	    system("cls");
		}
    /*	printf("\n\n\n\n\n\n");
    	printf("\t\t\t        [ WRONG INPUT ]\n");
        printf("\t\t\t Simple counting tracking program\n");
    	printf("\t\t\t [ 1 ] Start\n");
    	printf("\t\t\t [ 2 ] Re-Start back to zero\n");
    	printf("\n\n\n\n");
    	printf("\t\t\t [ 0 ] Exit\n");
    	scanf("%d",&i);
    	system("cls"); */
    	
    	if(i==0)
		    {
		         return -1;
		    }
    	else
    	
    	switch(i)
	    {
		  case 1: 
		        count();
		        break;
		  case 2:
		  	    restart();
		  	    break;
		        
	    }
    	
    	
	}
	
	return 0;
}
