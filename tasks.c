#include <stdio.h>
#include <string.h>

int max_tasks= 10;
char tasks[10][100];

int _length() {
    int i, len;
    len= 0;

    for(i=0; i< max_tasks; i++) {
        if(strlen(tasks[i]) > 0 && tasks[0] != '\0') {
            len++;
        }
    }

    return len;
}

void todo_add(char task[100]) {
    int len= _length();
    strcpy(tasks[len],task);
}

void todo_remove(int id) {
    int i, len= _length();

    for(i = id; i< len; i++) {
        strcpy(tasks[i],tasks[i+1]);
    }
}

void todo_show() {
    int i, len= _length();

    printf("%d tasks loaded\n",len);

    for(i= 0; i< len; i++) {
        printf("%d -> %s\n",i,tasks[i]);
    }
}

void todo_init() {
    int option, loop= 1, id;
    char task[100];

    todo_show();

    printf("\n");
    printf("Type '1' to add task, '2' to remove task, '3' to exit\n: ");
    scanf("%d",&option);

    if(option == 1) {
        printf("Your task : ");
        // fgets(task,100,stdin);
        scanf("%s",&task);

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