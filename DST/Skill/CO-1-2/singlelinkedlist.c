/* *****************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node snode;

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
        } else {
            q = head;
            while (q->next != NULL) {
                q = q->next;
            }
            q->next = p;
        }
        printf("\nDo you want to add a node (Y/N): ");
        scanf(" %c", &a);  
    } while (a == 'y' || a == 'Y');
    return head;
}

snode* insertAtBeginning(snode *head, int ele) {
    snode *p = getnode(ele);
    p->next = head;
    return p;
}

    snode* insertAtEnd(snode *head, int ele) {
        snode *p = getnode(ele);
        if (!head) return p;
        snode *q = head;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = p;
        return head;
    }

snode* insertAtPosition(snode *head, int ele, int pos) {
    snode *p = getnode(ele);
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

snode* deleteAtBeginning(snode *head) {
    if (head==NULL) return NULL;
    snode *temp = head;
    head = head->next;
    free(temp);
    return head;
}

snode* deleteAtEnd(snode *head) {
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

snode* deleteAtPosition(snode *head, int pos) {
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

int findElement(snode *head, int ele) {
    snode *q = head;
    int pos = 1;
    while (q != NULL) {
        if (q->data == ele) return pos;
        q = q->next;
        pos++;
    }
    return -1;
}

void display_using_rec(snode *head){
    if(head){
        display_using_rec(head->next);
        printf("%5d",head->data);
    }
}

int length(snode *head) {
    int len = 0;
    snode *temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void displayList(snode *head) {
    snode *temp = head;
    if (!head) {
        printf("Sorry, the list is empty...\n");
    } else {
        printf("List elements: ");
        while (temp!= NULL) {
            printf("%5d ", temp->data);
            temp = temp->next;
        }
        printf(" NULL\n");
        printf("Length of the list: %d\n", length(head));
    }
}

int menu() {
    int choice;
    printf("\n\nWelcome to Single linked lists, functions press(1-10): \n");
    printf("1. Create list \n");
    printf("2. Insertion at beginning \n");
    printf("3. Insertion at End \n");
    printf("4. Insertion at Given position \n");
    printf("5. Deletion at Beginning\n");
    printf("6. Deletion at End\n");
    printf("7. Deletion at Middle\n");
    printf("8. Display\n");
    printf("9. Find element\n");
    printf("10. Display using recursive function in reverse order\n");
    printf("11. Exiting program\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    snode *head = NULL;
    int choice, ele, pos, status;
    do {
        choice = menu();
        switch (choice) {
            case 1:
                head = create(head);
                displayList(head);
                break;
            case 2:
                printf("Enter element: ");
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
                printf("Enter element to find: ");
                scanf("%d", &ele);
                status = findElement(head, ele);
                if (status != -1)
                    printf("Element found at position %d\n", status);
                else
                    printf("Element not found\n");
                displayList(head);
                break;
            case 10:
                display_using_rec(head);
                break;
            case 11:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 11);

    return 0;
}
