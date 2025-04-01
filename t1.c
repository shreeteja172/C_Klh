#include <stdio.h>
#include <stdlib.h>

typedef struct Node snode;

struct Node {
    int data;
    struct Node *next;
};

snode* getnode(int ele) {
    snode *newNode = (snode*)malloc(sizeof(snode));
    newNode->data = ele;
    newNode->next = NULL;
    return newNode;
}

snode * create(snode* head){
    snode *p,*q;
    int ele;
    char a;
    do
    {
        printf("Enter the data element");
        scanf("%d",&ele);
        p = getnode(ele);
        if(head == NULL){
            head = p;
        }else{
            q = head;
            while(q->next!=NULL){
                q = q->next;
            }
            q->next = p;
        }
        printf("Enter y or Y for another node");
        scanf("%c",&a);
    } while (a=='y' || a == 'Y');
    
}

snode* iab(snode *head,int ele){
    snode *p = getnode(ele);
    p ->next = head;
    return p;
}

snode* iae(snode * head,int ele){
    snode* p = head;
    snode *q = getnode(ele);
    if(head == NULL){
        return p;
    }
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = q;
    // q->next = NULL;
    return head;
}

snode *iap(snode *head,int ele,int pos){
    snode * p = head;
    snode *newnode = getnode(ele);
    if(pos==1){
        return iab(head,ele);
    }
    for(int i = 0;i< pos-1 && p!=NULL;i++){
        p = p->next;
    }
    if(!p) return head;
    p->next= newnode;
    newnode->next = p->next;
    return head;
}
snode*dab(snode *head){
    snode *p = head;
    if(!p) return NULL;
    head= head->next;
    free(p);
    return head;
}

snode* dae(snode*head){
    snode * p= head;
    if (!head) return NULL;
    if (!head->next) {
        free(head);
        return NULL;
    }
    while(p->next->next !=NULL){
        p = p->next;
    }
    p->next= NULL;
    free(p->next);

}
snode *dap(snode *head,int pos){
    if (!head || pos < 1) return head;
    if (pos == 1) return dab(head);
    snode* p= head;
    if (p->next == NULL) return head;
    if (!head) return NULL;
    for(int  i = 0;i<pos-1 && p->next!=NULL;i++){
        p = p->next;
    }
    snode *teamp = p->next;
    p->next = p->next->next;
    free(p->next);
    return head;
}
