/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n; 
    
    for(n = 1000; n < 2000; n++){
        printf("%d \n", n);
    }
    
    for(n = 1000; n < 2000; n++){
        if(n % 11 == 5){
            printf("%d \n", n);
        }
    }
}
