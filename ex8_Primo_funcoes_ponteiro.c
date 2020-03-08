#include<stdio.h>
#include<math.h>

char* Primo(int* n){
	int i,maxI, resultado=1;
	
	int *p_i = &i;
	int *p_maxI = &maxI;
	int *p_resultado = &resultado;
	
	if(*n%2==0||*n%3==0)*p_resultado=0;
	if(*n==2||*n==3)*p_resultado=1;
	*p_maxI = sqrt(*n)+2;
	//printf("%d",*p_maxI);
	for(*p_i=5; *p_i < *p_maxI; (*p_i)+=6){
		if(*n%(*p_i)==0||*n%((*p_i)+2)==0) *p_resultado=0;
	}
	if(*p_resultado==1)return "Primo";
	else return "Nao Primo";
};

void main(){
    int x;
    
    int *p_x=&x;
    
    scanf("%d",p_x);
	printf("%s\n",Primo(p_x));
}


