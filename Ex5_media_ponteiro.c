#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho=30,i;
	float total=0;
    int VET[tamanho];
    
    int *P_tamanho,*P_i;
	float *P_total;
    int *P_VET;
    
    P_tamanho = &tamanho;
    P_i	= &i;
    P_total = &total;
    P_VET = &VET[0];
    
    
    for(*P_i=0; *P_i<*P_tamanho; (*P_i)++)
        {
        printf("Digite o %d Valor:",*P_i+1);
        scanf(" %d", &P_VET[*P_i]);
        *P_total += P_VET[*P_i];					// +=, é igual *P_total == *P_total + P_VET[*P_i];
    }
    printf("\nA media: %.2f ",*P_total/ *P_tamanho); //aki i tem que haver um espaço entre a divisão e o asterisco, se não vira comentario
}
