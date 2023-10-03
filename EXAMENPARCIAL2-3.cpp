#include<stdio.h>
#include<time.h>

int main(){
	
	int i,j,lineas;
	
	printf ("numero de lineas de la piramide:\n");
	scanf ("%d", & lineas);
	for (i=1; i<=lineas; i++){
		for (j=1; j<=i; j++){
			printf ("%d ", j);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
