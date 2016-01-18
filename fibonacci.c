#include <stdio.h>

int generate_fibonacci(int last, int now, int i, int max) {
    printf("%d\n",now);
    
    int next= now + last;
    
    last= now;

    if(i < max)
        generate_fibonacci(last,next, i+1, max);
}

int main() {
	int max;

	printf("How many fibonacci numbers do you want? : ");
	scanf("%d",&max);
	printf("\n");

	generate_fibonacci(0,1,1,max);

	return 0;
}