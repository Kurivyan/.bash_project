#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

// Structures
struct node_s1{
	struct node_s2* container;
	struct node_s1* next;
};

struct node_s2{
	char** command_line;
	int flag;
};

// Functions
char* read_word();
void command_handler(char* ptr);

struct node_s1* create_node_s1();
void insert_list_s1(struct node_s1* head);

struct node_s2* create_node_s2();
void insert_list_s1(struct node_s2* head);
// -------------------------------------------------------------
char* read_word(){
	int alloc_size = 25;
	char* ptr;
	ptr = malloc(alloc_size * sizeof(char));
	char c;
	c = getchar();
	int i = 0;

	while(c != '\n'){
		if (i == alloc_size - 1){
			alloc_size *= 2;
			ptr = relloc(ptr, alloc_size * sizeof(char));
		}
		ptr[i] = c;
		i++;
		c = getchar();
	}

	return ptr;
}

void command_handler(char* ptr){
	if(ptr == "");
}

int main(){
	//settings.ini
	int size_of_line = 25;
	//

	//data.ini
	struct node_s1* head;
	char* raw_command;
	//

	while(1){
		raw_command = read_word();
		command_handler(raw_command);
	}
	return 0;
}