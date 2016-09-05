//ejercicio 1.8 Este programa cuenta espacio en blanco, tabuladores y nuevas lineas.
#include<stdio.h>

int main(){
    int c,blanco=0,tab=0,nl;
    while((c=getchar())!=EOF){
        if(c==' ')
            ++blanco;
        else if (c=='\t')
            ++tab;
        else if (c=='\n')
            ++nl;
    }
    printf("espacios en blanco: %d\n",blanco);
    printf("tabuladores %d\n",tab);
    printf("cantidad de lineas: %d\n",nl);
    return 0;
}
