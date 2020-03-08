#include <stdio.h>

double fatorial(int ent){
	double fatorial;
	fatorial=ent;
	ent--;
	while(ent>1){
		fatorial = fatorial * ent;
		ent--;
	}
	return fatorial;
};

void main(){
    int x;
    scanf("%d",&x);
	printf("%.lf\n",fatorial(x));
}



