# include <stdio.h>
# include <stdlib.h>
# include <assert.h>
# include <time.h>
# include "set.h"

set newset(){
	set myset = malloc(sizeof(set));
	assert(myset != NULL);
	myset->start = NULL;
	return myset;
};
void print_set(set* s){
	node* current = (*s)->start;
	
	printf("Set: ");
	while (current != NULL) {
		printf("%d ", current->value);
		current = current->next;
	}
	printf("\n");
}

void insert_set(set* s, int v){
	node* now = (*s)->start;
	node* newnode = malloc(sizeof(node));
	newnode->value = v;
	newnode->next = NULL; 
	assert(newnode != NULL);
	if(now == NULL || now->value >= v){
		newnode->next = now;
		(*s)->start = newnode;
		return;
	} 
	while(now->next != NULL&&v >= now->next-> value){
		if(v == now->next->value) return;
		if (now->next->next == NULL && v < now->next->value){ //special case when v < now && now is last
			newnode->next = now->next;
			now->next = newnode;
		}
		now = now->next;
	}
	if(now->next == NULL){
		now->next = newnode;
		newnode->next =NULL;	
	}else{
		node* aux = now->next;
		now->next = newnode;
		newnode->next = aux;
	}
}
void search_set(set* s, int v){
	node* current = (*s)->start;
	while (current != NULL) {
		if (current->value == v) {
			printf("Value %d found in the set.\n", v);
			return;
		}
		current = current->next;
	}
	printf("Value %d not found in the set.\n", v);
}
void del_set(set* s, int v){
	node* current = (*s)->start;
	node* prev = NULL;
	while (current != NULL) {
		if (current->value == v) {
			if (prev == NULL) {
				(*s)->start = current->next;
			} else {
				prev->next = current->next;
			}
			free(current);
			printf("Value %d deleted from the set.\n", v);
			return;
		}
		prev = current;
		current = current->next;
	}
	printf("Value %d not found in the set.\n", v);
}
void destroy(set* s){
	node* current = (*s)->start;
	while (current != NULL) {
		node* temp = current;
		current = current->next;
		free(temp);
	}
	free(*s);
	*s = NULL;
}

int main(){
	set myset = newset();
	insert_set(&myset, 6);
	insert_set(&myset, 2);
	insert_set(&myset, 3);
	insert_set(&myset, 3);
	insert_set(&myset, 10);
	insert_set(&myset, 3);

	print_set(&myset);
	search_set(&myset, 6);
	del_set(&myset, 6);
	print_set(&myset);
	destroy(&myset);
	print_set(&myset);
	rand_test();
	checker();
	return 0;
}


