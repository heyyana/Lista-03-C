/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    short n =1, n1, n2, n3, cod;
    
    while (n > 0){
        printf("Informe o código do aluno: ");
        scanf("%hd", & cod);
        
        if(cod != 0){
            short media;
            printf("Informe as três notas do aluno: ");
            scanf("%hd %hd %hd", & n1, & n2, & n3);
            printf("A média das notas é: %hd \n", media =  (n1 + n2 + n3) / 3);
        }
        else {
            printf("Programa encerrado!");
            break;
        }
    }
}
