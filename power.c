#include <stdio.h>

float power(float num, float current, int i, int to_the_power) {
    if(i < to_the_power - 1) {
        power(num, current*num, i+1, to_the_power);
    } else {
        return current;
    }
}

int main() {
	float input;
	int powe;

	printf("The base value : ");
	scanf("%f",&input);
	printf("The index value : ");
	scanf("%d",&powe);

	printf("%f\n",power(input,input,0,powe));
	return 0;
}