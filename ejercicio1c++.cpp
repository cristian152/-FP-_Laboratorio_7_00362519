#include<stdio.h>

int main(){

    int number;
    int min,max;
    long odd_sum =0;
 
    printf("Introduzca el valor de A valor minimo en el rango: ");
    scanf("%d",&min);

    printf("Introduzca el valor de B valor maximo en el rango: ");
    scanf("%d",&max);

    printf("Los numeros impares en el rango [A,B] indicado son: ");
    for(number = min;number <= max; number++)

         if(number % 2 !=0)
             printf("%d ",number);
    for(number = min;number <= max; number++)
         if(number % 2 != 0)
             odd_sum = odd_sum + number;
    printf("La suma de los numeros impares en el rango [A,B] indicado es: %ld",odd_sum);
    
    return 0;
}
