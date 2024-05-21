#ifndef SET
#define SET




typedef struct node {
	struct node* next;
	int value;
}node;
struct set{
	node* start;
};
typedef struct set* set;
set newset();
void insert_set(set*, int v);
void search_set(set*, int v);
void del_set(set*, int v);
void print_set(set*);
void destruction(set*);

#endif
