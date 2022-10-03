#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct list_node_t * create_node(int value) {
	struct list_node_t *new_node = malloc(sizeof(struct list_node_t));

	new_node->value = value;
	new_node->next = NULL;

	return new_node;
}

int get_size(struct list_node_t* head){
	int i = 1;

	if(head == NULL) // If its non existent
		return 0;

	for(; head->next != NULL; i++)
		head = head->next;

	return i;
}

int contains(struct list_node_t* head, int value){
		struct list_node_t* itteration_node = head;

		while (itteration_node != NULL) {
			if (itteration_node->value == value)
				return 1;

			itteration_node = itteration_node->next;
		}

		return 0;
}


void print_list(struct list_node_t *head) {
	while(head != NULL) {
		printf("%d\n", head->value);
		head = head->next;
	}
}

struct list_node_t * push_front(struct list_node_t *head, int new_value) {

	struct list_node_t *new_node = create_node(new_value);
	new_node->next = head;

	return new_node;
}

struct list_node_t * push_back(struct list_node_t *head, int new_value) {
	if(head == NULL) return push_front(NULL, new_value);

	struct list_node_t *new_node = create_node(new_value);
	struct list_node_t *tail = head;

	for(; tail->next != NULL; tail = tail->next);

	tail->next = new_node;

	return head;
}

struct list_node_t * pop_front(struct list_node_t* head){
		if (head == NULL){
			printf("Empty list lol\n");
			return head;
		}
 
		struct list_node_t* itteration_node = head;
		head = head->next;

		free(itteration_node);

		return head;
}

struct list_node_t * pop_back(struct list_node_t* head) {
		if(head == NULL){
				printf("Empty list\n");
				return head;
		}
		if(head->next == NULL){
				head = NULL;
				return head;
		}

		struct list_node_t* itteration_node = head;
		while(itteration_node->next->next != NULL)
				itteration_node = itteration_node->next;

		itteration_node->next = NULL;

		return head;
}

struct list_node_t * insert(struct list_node_t *head, int value, int index){
	if(index > get_size(head) || index < 0){
		printf("Invalid index\n");
		return head;
	}

	struct list_node_t *itteration_node = (struct list_node_t*)malloc(sizeof(struct list_node_t));
	struct list_node_t *current = head;

	if(index == 0)
		return push_front(head, value);

	for (int i = 0; i != index - 1; i++)
			current = current->next;

	itteration_node->value = value;
	itteration_node->next = current->next;
	current->next = itteration_node;
	
	return head;
}

struct list_node_t * remove_item(struct list_node_t *head, int index){ // REMOVE FUNCTION USED IN STDIO
	if(head == NULL || index > get_size(head) - 1){
		printf("Not enough elements to remove bruh..\n");
		return head;
	}

	struct list_node_t *current;

	// if(index == 0)
	// 	return pop_front(head);

	// if(index == 0){
	// 	head = head->next;
	// 	return head;
	// }

	if(index == 0){
		head->value = 0;
		printf("Best i can do.. :: ");
		return head;
	}

	for (int i = 0; i != index - 1; i++)
		current = current->next;

	current = head->next;
	head->next = current->next;

	free(current);
	return head;
}

// End of code... enjoy :)