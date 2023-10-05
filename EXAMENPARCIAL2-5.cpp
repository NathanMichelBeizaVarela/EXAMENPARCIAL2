#include<stdio.h>
int main(){
	int n1, n2, resultado, suma=0;
	
	printf("Introduzca un numero: ");
	scanf("%d", &n1);
	printf("Introduzca otro numero: ");
	scanf("%d", &n2);
	
	printf("CUAL ES EL RESULTADO DE LA SUMA? ");
	scanf("%d", &suma);
	
	resultado=n1+n2;
	if(suma==resultado){
		printf("CORRECTO\n");
	}
	else{
		printf("ERROR: La suma es %d\n", resultado);
	}
	
	return 0;
}
