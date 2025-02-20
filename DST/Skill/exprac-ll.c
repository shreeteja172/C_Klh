#include <stdio.h>
typedef struct node snode;

struct node{
    int data;
    struct node * next;
};

snode *getnode(int ele){
    snode* newnode = (snode*)malloc(sizeof(snode));
    newnode->data = ele;
    newnode->next = NULL;
    return newnode;
}
snode *create(snode *head){
    snode *p,*q;
    int ele;
    char a;
    do{
        scanf("%d",&ele);
        p = getnode(ele);
        if(head==NULL) head = p;
        else{
            q = head;
            while(q->next!=NULL){
                q = q->next;
            }
            q->next = p;
        }
        scanf("%c",&a);
    }while (a=='y' || a == 'Y');
}

snode* iab(snode *head,int ele){
    snode *p = getnode(ele);
    p->next = head;
    return p;
}
snode * iae(snode *head,int ele){
    snode *p = getnode(ele);
    if (!head) return p;
    snode *q = head;
    while(q->next!=NULL) q = q->next;
    q->next = p;
    return head;
}
snode* iap(snode * head,int ele,int pos){
    snode* p = getnode(ele);
    if(pos==1) iab(head,ele);
    snode *q = head;
    for(int i =1;i < pos-1 && q->next!=NULL;i++){
        q = q->next;
    }
    if(q==NULL) return head;
    
    p->next = q->next;
    q->next = p;
    return head;
}
int main(){
    
    return 0;
}