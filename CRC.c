#include<stdio.h>
#include<stdlib.h>
//C Program: Cyclic Redundancy Check - CodeWithC.com



void main()
{
int i,j,f[20],temp,quotient[20],z[10];
int n=0 , m=0;
char *ptr;
char *ptr1;

 
printf("enter the number of N\n");
scanf("%d",&n);
ptr = (char *) malloc (n);

printf("enter the number\n");
for(i=0;i<n;i++)
{
	scanf("%d",&ptr[i]);
  
}

printf("enter the number of M\n");
scanf("%d",&m);
ptr1 = (char *) malloc(m);

printf("enter the divisor\n");
for(i=0;i<m;i++)
{
	scanf("%d",&ptr1[i]);
	
}


/*********************/
for(i=n;i<m;i++)
{
ptr[i]=0;
}
for(i=0;i<n;i++)
{
temp=i;
if(ptr[i]==1)
{
for (j=0;j<m;j++)
{
if (ptr[temp]==ptr1[j])
{ptr[temp]=0;
f[j]=0;}
else
{ptr[temp]=1;
f[j]=1;}
temp=temp+1;

}
quotient[i]=1;
}
else
quotient[i]=0;
}
printf("\nthe quotient is \n");
for(i=0;i<n;i++)
printf("%d",quotient[i]);

printf("\n and the remainder is \n ");

for(j=0;j<m;j++)
printf("%d",f[j]);


}
