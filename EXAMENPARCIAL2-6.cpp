#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int a, b, c;

    
    srand(time(NULL));
    a = rand() % 100; 
    b = rand() % 100; 
    c = rand() % 100; 

 
    printf("Valores originales:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n\n", c);

    
    int temp;
    temp = a;
    a = b;
    b = c;
    c = temp;

  
    printf("Valores intercambiados:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}

