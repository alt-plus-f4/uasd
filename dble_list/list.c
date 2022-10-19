#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct dble_list * innit() {
	struct dble_list *new_node = malloc(sizeof(struct dble_list));

	new_node->value = 0;
	new_node->prev = NULL;
	new_node->next = NULL;

	return new_node;
}
int get_size(struct dble_list* head){
	int i = 1;
	if(head == NULL)
		return 0;
	for(; head->next != NULL; i++)
		head = head->next;
	return i;
}
int contains(struct dble_list* head, int value){
		struct dble_list* itteration_node = head;

		while (itteration_node != NULL) {
			if (itteration_node->value == value)
				return 1;

			itteration_node = itteration_node->next;
		}

		return 0;
}
void print_list(struct dble_list *head) {
	while(head != NULL) {
		printf("%d\n", head->value);
		head = head->next;
	}
}
struct dble_list * push_back(struct dble_list *head, int new_value) {
	struct dble_list *new_node = innit();
	struct dble_list *tail = head;

	for(; tail->next != NULL; tail = tail->next);

	new_node->value = new_value;
	new_node->prev = tail;
	new_node->next = NULL;

	tail->next = new_node;

	return head;
}
struct dble_list * bubble_sort_dble_list(struct dble_list *head){
	struct dble_list *new_node = innit();
	struct dble_list *first = head;
	struct dble_list *second = head;

	int size = get_size(head);

	for (int i = 0; i < size - 1; i++, first = first->next) {
		second = head;
		for (int j = i + 1; j < size; j++, second = second->next) {
			if (first->value > second->value) 
				swap(first, second);
		}
	}

	return head;
}
void swap(struct dble_list * first, struct dble_list * second){
	// PREV NEXT FIRST => PREV NEXT SEC
	swapointers(first->prev->next, second->prev->next);
	// swapointers(); 	
	
} 
void swapointers(struct dble_list * p1, struct dble_list * p2){
	struct dble_list * temp;
	temp = p1;
	p1 = p2;
	p2 = temp;
}

// End of code... enjoy :)