#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int generate_matrix(int num) {
    int i;

    srand(time(NULL));

    for(i= 0; i < num; i++) {
        printf("%d",rand()%10);
    }

    printf("\n");

    return 0;
}

int main() {
	int num;

    printf("How many digits? : ");
	scanf("%d",&num);
	generate_matrix(num);
	return 0;
}