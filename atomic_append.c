void atomic_list_append(node* head, int value){
	//create new node instance
	struct node* newNode = (node*)malloc(sizeof(struct node));
           assert (newNode != NULL); // out of memory
	newNode->data = value;
	newNode->next = NULL;
	//check if list is empty, this is critical section
	while(1){
		while(pthread_mutex_lock(&(head->mutex))){
		//thread wait
}
	if (head == NULL) {
		//newNode is started at beginning of list
		head = newNode;
		return;
}

//allow other thread operations until next CS
pthread_mutex_unlock(&(head->mutex));
//begin loop to bottom
		node *p = head;

	while(1){
		while(pthread_mutex_lock(&(p->mutex))){
//thread will wait for mutex to be available before continue
}
		if(p->next == NULL){
			p->next = newNode; //insert node at bottom
			//initialize new node’s mutex lock to be available
			pthread_mutex_init(&(newNode->mutex), NULL);
			//unlock current referenced node’s mutex
			pthread_mutex_unlock(&(p->mutex));
}
			p = p->next;
};
return;
}
