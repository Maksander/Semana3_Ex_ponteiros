#include <stdio.h>

double fatorial(int *ent){
	double fatorial;
	
	double *p_fatorial=&fatorial;
	
	*p_fatorial = *ent;
	(*ent)--;
	while((*ent)>1){
		*p_fatorial = *p_fatorial * *ent;
		(*ent)--;
	}
	return *p_fatorial;	//retornar o endere�o, pq a fun��o retornar 
};

void main(){
    int x;
    
    int *p_x = &x;
    
    scanf("%d",p_x);
	printf("%.lf\n",fatorial(p_x));
}



