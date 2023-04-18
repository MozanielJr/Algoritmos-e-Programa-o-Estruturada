#include <stdio.h>
 
#define TAM 5
 
int main(){
 
    float estudante[TAM]={0}, menorNota;
    int i=0;
 
    for(i=0;i<TAM;i++){
         printf("Digite a nota do %do estudante:\n",i+1);
         scanf("%f", &estudante[i]);
    }

    for(i=0;i<TAM;i++){
        
         if (estudante[i] < estudante[i+1]){
            menorNota = estudante[i];
         }


                  
    }

printf("A Menor nota eh %.1f", menorNota );
