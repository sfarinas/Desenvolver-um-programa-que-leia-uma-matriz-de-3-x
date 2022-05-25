#include <stdio.h>

//using namespace std;
void bemvindo();
int main(){
    
    bemvindo();
    float num1, num2;
    
    //Recebendo os numeros
    printf ("Primeiro numero: ");
    scanf("%f", &num1);
    
    printf ("Segundo numero: ");
    scanf("%f", &num2);
    
        printf("Soma           : %.2f\n", num1 + num2);
        printf("Subtracao      : %.2f\n", num1 - num2);
        printf("Multiplicacao  : %.2f\n", num1 * num2);
        printf("Divisao        : %.2f\n", num1 / num2);
        
return 0;       
}

void bemvindo() {
    printf ("----------------------------------------\n");
    printf ("------BEM--VINDO--A--CALCULADORA--------\n");
    printf ("----------------------------------------\n\n");
    return;
}
