#include <stdio.h>
int main(){
	int sum=0, f[3]={0,1}, num=4000000;
	f[2]=f[0]+f[1];
	while(f[2]<num){
    	f[0]=f[1];
    	f[1]=f[2];
    	f[2]=f[0]+f[1];
		if(f[2]%2==0){
			sum+=f[2];
		}
	}
	printf("Sum of even Fibonacci numbers up to %d: %d",num, sum);
	return 0;
}
