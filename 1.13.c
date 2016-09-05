//histograma vertical
#include<stdio.h>

int main(){
    int c,e,cont;
    int np=1,longitud=0;
    int lista[20]={0};

    while((c=getchar())!=EOF){
        if (c=='\t' || c=='\n' || c==' '){
            if(longitud<lista[np]){
                longitud=lista[np];
            }
            ++np;
        }
        else
            ++lista[np];
    }
    printf("\nEl numero de palabras  es: %d \n\n",np-1);
    for(cont=longitud;cont>=1;--cont){       //horizontal
        for(e=1;e<np;++e){               //Vertical
            if (lista[e]>=cont){
                printf("+ ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
