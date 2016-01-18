#include <stdio.h>
#include <string.h>

int max_tasks= 10;
int num_tasks= 0;
char tasks[10][100];


void todo_add(char task[100]) {
    int len= num_tasks;
    num_tasks++;
    strcpy(tasks[len],task);
}

void todo_remove(int id) {
    int i, len= num_tasks;

    for(i = id; i< len; i++) {
        strcpy(tasks[i],tasks[i+1]);
    }
}

void todo_show() {
    int i, len= num_tasks;

    printf("%d tasks loaded\n",len);

    for(i= 0; i< len; i++) {
        printf("%d -> %s\n",i,tasks[i]);
    }
}

void custom_flush() {
	while ( getchar() != '\n' );
}

void todo_init() {
    int option, loop= 1, id;
    char task[100];

    todo_show();

    printf("\n");
    printf("Type '1' to add task, '2' to remove task, '3' to exit\n: ");
    scanf("%d",&option);
    
    custom_flush();

    if(option == 1) {
        printf("Your task : ");

        fgets(task,sizeof(char)*100,stdin);

        printf(task);

        todo_add(task);
    } else if(option == 2) {
        printf("Task index position: ");
        scanf("%d", &id);

        todo_remove(id);
    } else {
        loop= 0;
    }

    if(loop) {
        todo_init();
    }
}


void main() {
    printf("# Welcome to todo todo #\n");
    todo_init();    
}