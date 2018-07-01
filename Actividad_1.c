#include<stdio.h>
//#include<stlib.h>

void main ()
{
	int gato = 4;
	int iguana;
	printf("\t cuantas patas va a tener tu iguana: ");
	scanf("%i", &iguana);
	
	if(iguana == gato)	
	{
		printf("\n\t es lo mesmo");
	}else{
		printf("\n\t no es lo mesmo");
	}
}
