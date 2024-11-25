// 1 Header Files and Definitions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define TASK_LENGTH 256
#define FILENAME "odot-tasks.txt"


// 2 Function Prototypes
void add_task(char tasks[](TASK_LENGTH], int *task_count);
void add_task(char tasks[](TASK_LENGTH], int *task_count);
void add_task(char tasks[](TASK_LENGTH], int *task_count);
void add_task(char tasks[](TASK_LENGTH], int *task_count);
void add_task(char tasks[](TASK_LENGTH], int *task_count);


// 3 Main Function
int main(){
	char tasks[MAX_TASKS][TASK_LENGTH];
	int tasks_count=0;

	load_tasks(tasks, &task_count);

	int choice;

	while(1) {
		printf("\n Task List Menu: \n");
		printf("1. Add Task \n");
		printf("2. Display Tasks \n");
		printf("3. Remove Tasks \n");
		printf("4. Exit App\n");
		printf("Please enter selection: \n");
		scanf("%d", &choice);
		getchar();

	}


// 4 Adding a Task


// 5 Displaying Tasks


// 6 Removing a Task


// 7 Loading tasks from file


// 8 Saving Tasks to file




}
