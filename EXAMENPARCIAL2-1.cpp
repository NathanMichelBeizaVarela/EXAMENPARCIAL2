#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){

for  (int i =1; i<=100; i++){
 
 if (i%3==0){
 
  printf ("%d - El numero es multiplo de 3\n", i);
  
  }else {
  
  printf ("%d - El numero no es multiplo de 3\n", i);
}
}
return 0;
}
