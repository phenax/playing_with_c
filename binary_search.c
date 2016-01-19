#include <stdio.h>

int binary_search(int input[], int element, int size) {
	int min, max, mid;

	min= 0;
	max= size - 1;

	while(min <= max) {
		mid= (min+max)/2;

		if(input[mid] > element) {
			max= mid - 1;
		} else if(input[mid] < element) {
			min= mid + 1;
		} else {
			return mid;
		}
	}

	return -1;
}

int main() {
	int size, i, element, out;

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

	printf("What do you want to search : ");
	scanf("%d",&element);

	out= binary_search(input,element,size);

	if(out != -1) {
		printf("\nIndex position of your element is : %d \n",out);
	} else {
		printf("Sorry, your element could not be found\n");
	}

	return 0;
}