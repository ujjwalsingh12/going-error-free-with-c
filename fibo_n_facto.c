/*
*The program contains four explicitly defined functions
*
*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
int conv(char c[]);
int fact();
long int fib(int a);
int fibo();
int table();
int menu();
void main()
{

	int ch;
	printf("Created by:\n\n\tUjjwal Singh\n\tUCER 2nd Year B.Tech\n\tJuly 2019\n\n");
	do
	{
		ch=menu();
	}while(ch!=4);
}
int menu() 
{
	int n,er=0;
	char chr[10];				//choice is taken as character because otherwise in case of non-interger entry the program may behave unexpectedly
	int ch;

	printf("\n**********************\nMENU\n**********************\n");
	printf("1. Factorial\n2. Nth of Fibonacci\n3. Table\n4. Exit\n");
	printf("**********************\n");
	printf("Enter your Choice: ");	



	scanf("%s",chr);			// %s is used instead of %c to avoid unexpected behaviour when more than one word entry is given in choice

		switch(chr[0])										//to check the value of string
		{
			case 't':;
			case 'T':chr[0]='3';chr[1]='\0';break;
			case 'f':;
			case 'F':
				switch(chr[1])
				{
					case 'i':;
					case 'I': chr[0]='2';chr[1]='\0';break;
					case 'a':;
					case 'A': chr[0]='1';chr[1]='\0';break;
					default:;
				}
				break;
			case 'n':;
			case 'N':chr[0]='2';chr[1]='\0';break;
			case 'e':;
			case 'E':chr[0]='4';chr[1]='\0';break;
			default:;
		}
		ch=conv(chr);
		switch(ch)												//to check the value of ch and run the respective function
		{
			case 1:er=fact();getch();break;
			case 2:er=fibo();getch();break;
			case 3:er=table();getch();break;
			case 4:break;
			default:er=2;
		}
		switch(er)												//to check which error flag is flagged
		{
			case 0: break;
			case 1: printf("\nERROR: Wrong value given for conversion");break;
			case 2: printf("\nERROR: Wrong Choice");break;
			case 3: printf("\nERROR: Value too large\n");
		}
		return ch;
	}

int fact()															//to caculate the factorial for the given number
{
	char c[10];long long int n1=1;int n,ex=0,n2=0,cn=0;
	printf("\nEnter the value to find its Factorial(approx result for >20): ");
	scanf("%s",c);
	n=conv(c);
	if(n>0&&n<=20)
	{	
		while(n>0)
		{	
			n1=n1*n;
			n=n-1;
			
		}	
		printf("\nThe Factorial for the given number is : %lld ",n1);
		return 0;
	}
	else if(n>20&&n<32000)
	{	//printf("%d\n",n);
	
		while(n>0)
		{	
			if(n1>=279496122328932)
			{
				n2=n;
				while(n2>0){ n2=n2/10;cn++;}
				ex=ex+cn;
				cn=pow(10,cn);
				n1=n1/cn;
				}
			n1=n1*n;
			n=n-1;
			cn=0;
			
		}	
		printf("\nThe Factorial for the given number is (approx): %lld ",n1);
		if(ex>0)
			printf("x 10^%d",ex);
		printf("\n");
		return 0;
	}
	else if(n>=32000) return 3;
	else return 1;
}
int fibo()															// for calculation of value of nth term of fibonacci
{
	char c[10];int n;long int n1;
	printf("\nEnter the term of Fibonacci value you want to know: ");
	scanf("%s",c);
	n=conv(c);
	if(n>0&&n<32000)
	{
		n1=fib(n);
		printf("\nThe Fibonacci at given term is : %ld\n",n1);
		return 0;
	}
	else if(n>32000) return 3;
	else return 1;
}
int table()
{
	char c[10];int n,n1=0;
	printf("\nEnter the value to print its table: ");
	scanf("%s",c);
	n=conv(c);
	if(n>0&&n<32000)
	{
		printf("\nThe table of given number is :\n");
		while(n1++<10)
		{
			printf("	%d x %d = %d\n",n,n1,n*n1);
		}
		return 0;
	}
	else if(n>32000) return 3;
	else return 1;
}


int conv(char c[])												//for conversion of string value to integer
{
	int n=0,i=0;
do{
 	if(c[i]<58&&c[i]>47)
 	{
 		n=n*10+(c[i]-48);
 		if(c[(1+i)]=='\0') break;
 	}
 	else {n=-1;break;}

 	i++;
 }while(1);
 return n;
}


long int fib(int a)													// calculates the value for the nth fibonacci term passed as argument
{
	// if(a==0)
	// 	return 0;
	// if(a==1)
	// 	return 1;
	// else
	// 	return fib(a-1)+fib(a-2);
int i;long int r,r1 = 0,r2=1;
for(i=2;i<=a;i++)
{
	r = r1+r2;
	r1=r2;
	r2=r;
}
return r2;
}
