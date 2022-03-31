#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	return 0;
}
int Un (int n){
	int U0,U1,U2,x,i;
    U0 = 0 ;
    U1 = 1 ; 
	U2 = 2 ;
    for(i=2;i<n;i++)
    {
    	x=U2;
    	U2=(2*x)+(3*U0);
    	U0= U1;
    	U1=x;
	}
	return U2;
}
