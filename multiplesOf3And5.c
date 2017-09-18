#include<stdio.h>

int main(){
	int sum;
	int num;
	for(num = 0;num<1000;num++){
		if(num % 3 == 0 || num % 5 == 0){
			sum += num;
		}
	}
	printf("sum of multiples of 3 and 5 below 1000: %d\n",sum);
	return 0;
}
