#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
	int i=0; 
	int numeroAleatorio, numeroUno, numeroDos;
	
	srand(time(NULL));
	numeroUno=rand()%10+1;
	numeroDos=rand()%10+1;
	
	while(1){	
	numeroAleatorio=rand()%5+1;
	printf("%d\n", numeroAleatorio);	
		if(numeroAleatorio==5){
			break;
		}
	numeroUno=rand()%10+1;
	numeroDos=rand()%10+1;	
	switch(numeroAleatorio){
		case 1:
			printf("%d+%d =%d\n\n", numeroUno, numeroDos, numeroUno+numeroDos);
			break;
		case 2:
			printf("%d-%d =%d\n\n", numeroUno, numeroDos, numeroUno-numeroDos);
			break;
		case 3:
			printf("%d*%d =%d\n\n", numeroUno, numeroDos, numeroUno*numeroDos);
			break;
		case 4:
			printf("%d/%d =%f\n\n", numeroUno, numeroDos, (float)numeroUno/numeroDos);
			break;
	}
	}
	printf("FIN");
	return 0;
}
