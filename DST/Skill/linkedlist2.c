

snode* insertAtEnd(snode *head, int ele){
    snode *p = getnode(ele);
    if(head == NULL) return p;
    snode *q = head;
    while(q->next != NULL){
        q = q->next;
    }
    q->next = p;
    return head;
}

snode* insertAtPosition(snode *head, int ele, int pos){
    snode *p = getnode(ele);
    if(pos == 1){
        p->next = head;
        return p;
    }
    snode *q = head;
    for(int i = 1; i < pos - 1 && q != NULL; i++){
        q = q->next;
    }
    if(q == NULL) return head;
    p->next = q->next;
    q->next = p;
    return head;
}

snode* deleteAtBeginning(snode *head){
    if(head == NULL) return NULL;
    snode *temp = head;
    head = head->next;
    free(temp);
    return head;
}

snode* deleteAtEnd(snode *head){
    if(head == NULL || head->next == NULL) return NULL;
    snode *q = head;
    while(q->next->next != NULL){
        q = q->next;
    }
    free(q->next);
    q->next = NULL;
    return head;
}

snode* deleteAtPosition(snode *head, int pos){
    if(head == NULL) return NULL;
    if(pos == 1){
        snode *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    snode *q = head;
    for(int i = 1; i < pos - 1 && q->next != NULL; i++){
        q = q->next;
    }
    if(q->next == NULL) return head;
    snode *temp = q->next;
    q->next = temp->next;
    free(temp);
    return head;
}

void displayList(snode *head){
    snode *q = head;
    while(q != NULL){
        printf("%d -> ", q->data);
        q = q->next;
    }
    printf("NULL\n");
}

int findElement(snode *head, int ele){
    snode *q = head;
    int pos = 1;
    while(q != NULL){
        if(q->data == ele) return pos;
        q = q->next;
        pos++;
    }
    return -1;
}