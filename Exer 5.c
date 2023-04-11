/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade, quant, maiorIdade = 0;
    char sexo, olho, cabelo;
    
    while(1){
        printf("Informe sua idade, seu sexo, a cor dos seus olhos e cabelos: ");
        scanf("%d %c %c %c", & idade, & sexo, & olho, & cabelo);
    
        if(idade == -1){
            break;
        }
    
        if(maiorIdade < idade){
            maiorIdade = idade;
        }
    
        if(sexo == 'F' && idade > 18 && idade < 35 && olho == 'V' && cabelo == 'L'){
            quant++;
        }
    }
    printf("A maior idade dos habitantes é: %d \n", maiorIdade);
    printf("A quantidade de indivíduos é: %d", quant);
}

