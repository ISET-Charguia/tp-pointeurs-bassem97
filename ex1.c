#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *p,*q=p+1;

	if(p!=NULL)
	{printf("%d\n",p);
	 printf("%d\n",q);
	 printf("%d\n",sizeof(char,int,double));
	}
	return 0;
}
