/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int num, soma = 0, cont = 0;
    float media;
    
    printf("Digite um numero inteiro. Digite zero para encerrar a execucao: ");
    scanf ("%d", &num);
  
    while (num != 0){
        if (num % 2 == 0){
	        soma = soma + num;
	        cont++;
	}
        printf ("Digite um numero inteiro. Digite zero para encerrar a execucao: ");
        scanf ("%d", & num);
    }
    if (cont > 0){
        media = (float) soma / cont;
        printf ("A media eh %.2f\n", media);
    }
    else
        printf ("Nenhum valor foi digitado");
        system ("pause");
}
