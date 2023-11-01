#include<stdio.h>
#include<stdlib.h>

struct node{
	char** word;
	struct node* next;
}

struct node* create_node(char** word){
	struct node* ptr;
	ptr = malloc(1 * sizeof(struct node));
	ptr -> word = sizeof(5 * sizeof(char*));
	for(int i = 0; i < 5; i++){
		ptr -> word[i] = malloc(25 * sizeof(char));s
	}

	ptr -> next = NULL;
	retrun ptr;
}

char** handler(char* ptr){
	if(*(ptr) == ""){
		return;
	}
	int i = 0;
	char* pointer;
	pointer = ptr;

	char** prep_word;
	prep_word = malloc(5 * sizeof(char*));
	for(int i = 0; i < 5; i++){
		prep_word[i] = malloc(25 * sizeof(char));
	}

	while()
	while(*(pointer) != " "){
		pointer += i;
	}



}

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
			ptr = realloc(ptr, alloc_size * sizeof(char));
		}
		ptr[i] = c;
		i++;
		c = getchar();
	}

	return ptr;
}

int main(){
	char* ptr = read_word();

	return 0;
}