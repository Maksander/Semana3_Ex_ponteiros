#include<stdio.h>
#include<math.h>

char* Primo(int n){
	int i,maxI, resultado=1;
	if(n%2==0||n%3==0)resultado=0;
	if(n==2||n==3)resultado=1;
	maxI = sqrt(n)+2;
	//printf("%d",maxI);
	for(i=5; i<maxI; i+=6){
		if(n%i==0||n%(i+2)==0) resultado=0;
	}
	if(resultado==1)return "Primo";
	else return "Nao Primo";
};

void main(){
    int x;
    scanf("%d",&x);
	printf("%s\n",Primo(x));
}


