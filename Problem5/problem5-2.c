#include<stdio.h>
int main(){
	long long int i = 0;
	int d=1 , j , count;
	while(d == 1){
		count=0;
		i += 20;
		for (j = 1 ; j <= 20 ; j++){
			if(i % j == 0)
				count++;
			if(count == 20)
				d=0;
		}
	}
	printf("i: %lli\t count: %i", i, count);
	return 0;
}
