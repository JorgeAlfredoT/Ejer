#include<stdio.h>

#define entrada 1
#define salida 0

int main(){

    int c,ver;
    while ( (c = getchar()) != EOF ){
        if ( c != ' ' && c != '\t'){
            putchar(c);
            ver=entrada;
        }
        else if ( c==' ' || c=='\t'){
            if ( ver==entrada ){
                printf(" ");
                ver = salida;
            }
        }
    }
    return 0;
}
