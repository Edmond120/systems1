#include<stdio.h>

int main(){
	int firstTerm = 1;
	int secondTerm = 1;
	int sum = 0;
	int nextTerm = firstTerm + secondTerm;
	while(nextTerm <= 4000000){
		if(nextTerm % 2 == 0){
			sum += nextTerm;
		}
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		nextTerm = firstTerm + secondTerm;
	}
	printf("sum of all even fibonacci numbers not exceeding 4 million %d\n",sum);
}
