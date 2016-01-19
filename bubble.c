#include <stdio.h>

int bubble(int input[],int size) {

	for(int i= 0; i< size; i++) {

		for(int j= size - i - 1; j>= 0; j--) {

			if(input[j] > input[j+1]) {
				input[j] = input[j] + input[j+1];
				input[j+1]= input[j]- input[j+1];
				input[j]= input[j]- input[j+1];
			}

		}
	}

	return 0;

}

int main() {
	int size, i;

	printf("How many elements? : ");
	scanf("%d",&size);

	int input[size];

	printf("Type out all the %d elements\n", size);
	i=0;
	while(i< size) {
		printf("[%d]-> ",i);
		scanf("%d",&input[i]);
		i++;
	}

	bubble(input,size);

	printf("\nThe sorted array is : \n");
	i=0;
	while(i<size) {
		printf(" %d",input[i]);
		i++;
	}

	printf("\n");

	return 0;
}