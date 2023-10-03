#include<stdio.h>
#include<time.h>
int main(){

int A;
printf ("¿QUE AÑO DESEAS SABER SI ES BISIESTO?\n");
scanf ("%d", & A );

 
 if (A%4==0){
 
  printf ("%d - ES  BISIESTO :0\n", A);
  
  }else {
  
  printf ("%d - NO ES  BISIESTO :(\n", A);
}

return 0;
}
