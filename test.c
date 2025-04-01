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

snode* create(snode *head) {
    snode *p, *q;
    int ele;
    char a;
    do {
        printf("Enter the element: ");
        scanf("%d", &ele);
        p = getnode(ele);
        if (head == NULL) {
            head = p;
        }else {
            q = head;
            while (q->next != NULL) {
                q = q->next;
            }
            q->next = p;
        }
        printf("Y to continue \n");
        scanf(" %c", &a);  
    } while (a == 'Y' || a == 'y');
    return head;
}

snode* insertAtBeginning(snode *head , int data){
    snode *p = getnode(data);
    p ->next = head;
    return p;
}
snode* insertAtEnd(snode *head,int data){
    snode *p = getnode(data);
    if (!head) return p;
    snode *q = head;
    while(q->next!=NULL){
        q = q->next;
    }
    q->next = p;
    return head;
}
snode* insertAtPosition(snode *head, int data, int pos) {
    snode *p = getnode(data);
    if (pos == 1) {
        p->next = head;
        return p;
    }
    snode *q = head;
    for (int i = 1; i < pos - 1 && q != NULL; i++) {
        q = q->next;
    }
    if (q == NULL) return head;
    p->next = q->next;
    q->next = p;
    return head;
}
snode* deleteAtBeginning(snode *head){
    if (head==NULL) return NULL;
    snode *p = head;
    head = head->next;
    free(p);
    return head;
}
snode *deleteAtEnd(snode *head){
    if (!head) return NULL;
    if (!head->next) {
        free(head);
        return NULL;
    }
    snode *q = head;
    while (q->next->next != NULL) {
        q = q->next;
    }
    free(q->next);
    q->next = NULL;
    return head;
}

snode* deleteAtPosition(snode *head,int pos){
    if (!head || pos < 1) return head;
    if (pos == 1) return deleteAtBeginning(head);
    
    snode *q = head;
    for (int i = 1; i < pos - 1 && q->next != NULL; i++) {
        q = q->next;
    }
    if (q->next == NULL) return head;
    
    snode *temp = q->next;
    q->next = q->next->next;
    free(temp);
    
    return head;
}
void displayList(snode *head) {
    snode *temp = head;
    while (temp!= NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int menu(){
    printf("Enter 1 for creating list");
    printf("\n");
    printf("Enter 2 for insertion at beginning");
    printf("\n");
    printf("Enter 3 for insertion at end");
    printf("\n");
    printf("Enter 4 for insertion at any position");
    printf("\n");
    printf("Enter 5 for deleetion at beginning");
    printf("\n");
    printf("Enter 6 for deletion at end");
    printf("\n");
    printf("Enter 7 for insertion at any position");
    printf("\n");
    printf("Enter 8 for Displaying the list");
    printf("\n");
    printf("Enter 9 for Exiting");
    printf("\n");
    int choice;
    scanf("%d",&choice);
    return choice;
}
int main() {
    snode *head = NULL;
    int choice, ele, pos;
    do {
        choice = menu();
        switch (choice) {
                case 1:
                    head = create(head);
                    break;
                case 2:
                    scanf("%d", &ele);
                    head = insertAtBeginning(head, ele);
                    displayList(head);
                    break;
                case 3:
                    printf("Enter element: ");
                    scanf("%d", &ele);
                    head = insertAtEnd(head, ele);
                    displayList(head);
                    break;
                case 4:
                    printf("Enter element: ");
                    scanf("%d", &ele);
                    printf("Enter position: ");
                    scanf("%d", &pos);
                    head = insertAtPosition(head, ele, pos);
                    displayList(head);
                    break;
                case 5:
                    head = deleteAtBeginning(head);
                    displayList(head);
                    break;
                case 6:
                    head = deleteAtEnd(head);
                    displayList(head);
                    break;
                case 7:
                    printf("Enter position to delete: ");
                    scanf("%d", &pos);
                    head = deleteAtPosition(head, pos);
                    displayList(head);
                    break;
                case 8:
                    displayList(head);
                    break;
                case 9:
                    printf("Exiting program.\n");
                    break;
                default:
                    printf("Invalid choice!\n");
                    break;
        }
    } while (choice != 9);

    return 0;
}
