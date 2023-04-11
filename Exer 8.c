/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, cont;
    float media;
    
    for(n = 13; n < 74; n++){
        if(n % 2 == 0){
            media += n;
            cont++;
        }
    }
    printf("A média é: %g", media = media / n);
}
