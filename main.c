#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

// Macro
#define COMMAND_SIZE 30

// Structures
struct node_s1{

};

struct node_s2{

};

// Functions
char* read_word();
// -------------------------------------------------------------
char* read_word(){
	char* ptr;
	char c;
	c = getchar();
	int i = 0;
	ptr = malloc(sizeof(char) * COMMAND_SIZE);
	while(c != '\n'){
		ptr[i] = c;
		i++;
		c = getchar();
	}
	return ptr;
}

int main(){
	char* raw_command;
	do{
		raw_command = read_word();
		analyse_command(raw_commnd);
	} while(1);
	return 0;
}