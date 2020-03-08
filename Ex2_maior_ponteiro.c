#include <stdio.h>
#include <stdlib.h>



void main (){
    /*
    Escreva um programa em C que encontra o maior elemento em um vetor de 10
	valores digitados pelo usuário.
	*/
    int v[10];
    int maior;
    int i=0;
    
    int *P_v;
    int *P_maior;
    int *P_i;
    
    P_v =  &v[0];
    P_maior = &maior;
    P_i = &i;
    
    //pre
    
    printf("\nDigite %d valor\n", *P_i+1);	
    scanf("%d",P_v);					//contem o endereço de memoria de v[0]
    *P_maior= *P_v;
    									// (*P_i)++	,soma ao conteudo de *P_i
    for( *P_i=1; *P_i<10; (*P_i)++){	// *P_i++	,Primeiro soma o ponteiro depois acessa o conteúdo.
        printf("Digite %d valor\n", *P_i+1);
        
        scanf("%d",P_v + *P_i);			// da para acessar das duas formas.
        //scanf("%d",&P_v[*P_i]);
        
        printf("%d---%d-----\n",P_v[*P_i],P_v);

        if(*P_maior<P_v[*P_i]){
        	*P_maior=P_v[*P_i];
		}
    }
    printf("Maior numero: %d\n",*P_maior);
}

