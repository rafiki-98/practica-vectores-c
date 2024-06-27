#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vdato1[4]={0,0,0,0};
	int vdato2[4]={0,0,0,0};
	int vres[4]={0,0,0,0};
	int c=0;
	
	for(c=0;c<=3;c++)
	{
	  printf("ingrese la posicion %d\n", c);
	  scanf("%d",&vdato1[c]);
	  printf("ingrese la posicion %d\n", c);
	  scanf("%d",&vdato2[c]);
	  
	  vres[c]=vdato1[c]+vdato2[c];
	}
	
	for(c=0;c<=3;c++)
	{
	  printf("ingrese la posicion %d\n son %d\n",c ,vres[c]);
	}
	return 0;
}
