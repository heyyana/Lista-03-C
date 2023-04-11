/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade, n, menorIdade = 999, maiorIdade = 0, quant = 0;
    char sexo;
    float salario, media = 0;
    
    for(n = 1; n < 16; n++){
        printf("Informe sua idade, sexo e salario: ");
        scanf("%d %c %g", & idade, & sexo, & salario);
        
        if(menorIdade > idade){
            menorIdade = idade;
        }
        if(maiorIdade < idade){
            maiorIdade = idade;
        }
        
        if(sexo == 'F' && salario <= 100){
            quant++;
        }
    }
    
    printf("A média salarial é de R$ %g \n", media = salario / 16);
    printf("A maior idade é: %d\nA menor idade é: %d \n", maiorIdade, menorIdade);
    printf("A quantidade de mulheres é de: %d", quant);
}

