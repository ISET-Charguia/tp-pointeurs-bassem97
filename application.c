#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char nom[20],prenom[20];
	int age;
	char groupe[10];
}etudiant;

void saisir(etudiant *t,int n)
{
	etudiant *p=*t;
	for(p=t;p<t+n-1;p++)
	{
		printf("tapez le nom de %d eme etudaint",p-t);scanf("%s",&);

int main(void)
{
	int n;
	etudiant *t;
	printf("saisir la taille de tableau ");scanf("%d/n",&n);
	t=malloc(n*sizeof(*t));
	saisir(*t,n);
	

	return 0;
}
