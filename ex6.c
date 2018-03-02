#include<stdio.h>
#include<stdlib.h>


/*version 1*/
/*
int palindrome(char ch[])
{
         int i=0;
	int taille=0;
	while(ch[i++]!='\0');
	taille=i-1;
	for(i=0;i<taille-i-1;i++)
		if(ch[i]!=ch[taille-i-1])return 0;
	return 1;
}

int main(void)
{
	char ch[10];
	printf("saisir ch ");scanf("%s",ch);
	printf("%d",palindrome(ch));
	return 0;
}
*/

int palindrome(char *ch)
{
	char *i,*j;
	int taille ;
	i=ch;
	while(*i++!='\0');
	taille=i-ch-1;
	for(i=ch,j=ch+taille-1;i<j;i++,j--)
	if(*i!=*j)return 0;
	return 1;
}

int main(void)
{
	char *ch;
	ch=malloc(10*sizeof(char))
	printf("saisir ch ");scanf("%s",ch);
	printf("%d",palindrome(ch));
	return 0;
}
	
