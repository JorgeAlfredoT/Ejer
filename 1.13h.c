//histograma horizontal
#include<stdio.h>

int main (){
    int c,e,j,np=0;
    int lista[10]={0};

    while((c=getchar())!=EOF){
        if (c==' ' || c=='\t' || c=='\n'){
            ++np;
        }
        else
            ++lista[np];
    }

    printf("\nEl numero de palabras es: %d\n\n",np);
    for(e=0;e<np;e++){
        for(j=0;j<lista[e];++j){
            printf("+ ");
        }
        printf("\n");
    }
    return 0;
}
