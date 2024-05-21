void rand_test(){
	set myset = newset();
	srand(time(NULL));
	int i;
	for (i = 0; i < 200; i++) {
        insert_set(&myset, rand() % 501);
    };
    for (i = 0; i < 1000; i++) {
        if (rand() % 2 == 0) {
            insert_set(&myset, rand() % 501);
        } else {
            del_set(&myset, rand() % 501);
        }
    };
    print_set(&myset);
}

int inclusion(set *s1, set *s2) {
    node *n1 = (*s1)->start;
    node *n2 = (*s2)->start;
    while (n1 != NULL && n2 != NULL) {
        if (n1->value < n2->value) {
            return 0;
        } else if (n1->value > n2->value) {
            n2 = n2->next;
        } else {
            n1 = n1->next;
            n2 = n2->next;
        }
    }
    return n1 == NULL;
}


set intersection(set *s1, set *s2) {
    set result = newset();
    node *n1 = (*s1)->start;
    node *n2 = (*s2)->start;
    while (n1 != NULL && n2 != NULL) {
        if (n1->value < n2->value) {
            n1 = n1->next;
        } else if (n1->value > n2->value) {
            n2 = n2->next;
        } else {
            insert_set(&result, n1->value);
            n1 = n1->next;
            n2 = n2->next;
        }
    }
    return result;
}

set union_set(set *s1, set *s2) {
    node *n1 = (*s1)->start;
    node* current = (*s1)->start;
	while (current != NULL) {
		node* temp = current;
		current = current->next;
		insert_set(s2, temp->value);
	}
	return *s2;
}
    
void checker(){
	int a[5] = {3,1,5,7,9};
	int b[5] = {7,1,3,5,9};
	int c[5] = {32,22,22,22,11};
	int d[5] = {2,8,4,6,10};
	set myset[3] = {newset(),newset(),newset(),newset()};
	int i ;
	
	for(i = 0;i < 5;i++) insert_set(&myset[0],a[i]); print_set(&myset[0]); 
	for(i = 0;i < 5;i++) insert_set(&myset[1],b[i]); print_set(&myset[1]);
	for(i = 0;i < 5;i++) insert_set(&myset[2],c[i]); print_set(&myset[2]);
	//for(i = 0;i < 5;i++) insert_set(&myset[3],d[i]); print_set(&myset[3]);
	printf("The inclusion of set a and b is %d(1 for true)\n",inclusion(&myset[0],&myset[1]));
	printf("The inclusion of set c and b is %d(1 for true)\n",inclusion(&myset[2],&myset[1]));
	printf("The intersection of a and b is: \n");
	set result = intersection(&myset[0],&myset[1]);
	print_set(&result);
	result = intersection(&myset[1],&myset[2]);
	printf("The intersection of b and c is: \n");
	print_set(&(result));
	printf("The union of c and d is: \n");
	result = union_set(&myset[2],&myset[3]);
	print_set(&(result));
}
int main(){
	rand_test();
	checker();
	return 0;
}


