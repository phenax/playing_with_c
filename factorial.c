#include <stdio.h>

int factorial(int val, int init) {
    if(init > 1) {
        factorial(val*(init - 1), init - 1);
    } else {
    	if(init == 0) {
    		val= 1;
    	}
    	
        return val;
    }
}

int main() {
	int input, output;

	printf("Input: ");
	scanf("%d",&input);

	output= factorial(input,input);

	printf("%d\n",output);

	return 0;
}