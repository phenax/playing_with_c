#include <stdio.h>
#include <string.h>

char palindrome(char input[100]) {
    char copy[100];
    int len, i;

    len= strlen(input);

    for(i= 0; i< len; i++) {
        copy[len - i]= input[i];
    }

    strcpy(input,copy);
}

int main() {

	char data[100];

	fgets(data,100,stdin);

	palindrome(data);
	
	printf("%s\n",data);
	
	return 0;
}