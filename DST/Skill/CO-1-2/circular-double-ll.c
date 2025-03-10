#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

typedef struct Node snode;

snode* getNode(int data){
    snode* temp;
    temp = (snode*)malloc(sizeof(snode));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

snode* createList(snode* head){
    snode* p;
    snode* q;
    char a;
    int n;
    do{
        printf("Enter Element: ");
        scanf("%d",&n);
        p = getNode(n);
        if(!head){
            head = p;
            p->next = head;
            p->prev = head;
        }
        else{
            q = head->prev;
            q->next = p;
            p->prev = q;
            p->next = head;
            head->prev = p;
        }
        printf("Do you want to continue? (y or n): ");
        scanf(" %c",&a);
    }while(a == 'y' || a == 'Y');
    return head;
}

snode* insertAtBeginning(snode* head, int data){
    snode* p = getNode(data);
    if(head == NULL){
        head = p;
        p->next = head;
        p->prev = head;
    }
    else{
        snode* last = head->prev;
        p->next = head;
        p->prev = last;
        last->next = p;
        head->prev = p;
        head = p;
    }
    return head;
}

snode* insertAtEnd(snode* head, int data){
    snode* p = getNode(data);
    if(head == NULL){
        head = p;
        p->next = head;
        p->prev = head;
    }
    else{
        snode* last = head->prev;
        last->next = p;
        p->prev = last;
        p->next = head;
        head->prev = p;
    }
    return head;
}

snode* insertAtPosition(snode* head, int data, int position){
    snode* temp;
    snode* p = getNode(data);
    if(!head && position > 1){
        printf("Index out of range! \n");
    }
    else{
        temp = head;
        for(int i = 1; i < position - 1; i++){
            temp = temp->next;
        }
        snode* temp2 = temp->next;
        temp->next = p;
        p->prev = temp;
        p->next = temp2;
        temp2->prev = p;
    }
    return head;
}

snode* deleteAtBeginning(snode* head){
    snode* temp = head;
    if(!head){
        printf("Sorry the list is empty\n");
    }
    else{
        if(head->next == head){
            free(head);
            head = NULL;
        }
        else{
            snode* last = head->prev;
            head = head->next;
            last->next = head;
            head->prev = last;
            free(temp);
        }
    }
    return head;
}

snode* deleteAtEnd(snode* head){
    snode* temp = head;
    if(!head){
        printf("Sorry the list is empty\n");
    }
    else{
        if(head->next == head){
            free(head);
            head = NULL;
        }
        else{
            snode* last = head->prev;
            last->prev->next = head;
            head->prev = last->prev;
            free(last);
        }
    }
    return head;
}

snode* deleteAtPosition(snode* head){
    printf("Specify the position: \n");
    int p;
    scanf("%d",&p);
    if(head == NULL){
        printf("Sorry the list is already empty!\n");
    }
    else{
        int w = 1;
        snode* temp = head;
        while(temp->next != head && w < p){
            w++;
            temp = temp->next;
        }
        if(w == p){
            if(temp == head){
                head = head->next;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
        }
        else{
            printf("Sorry given index is out of range!");
        }
    }
    return head;
}

void search(snode* head,int key){
    if(!head){
        printf("Sorry the list is empty \n");
    }
    else{
        snode* temp = head;
        if(temp->data == key){
            printf("Found !\n");
            return;
        }
        temp = temp->next;
        while(temp != head){
            if(temp->data == key){
                printf("Found !\n");
                return;
            }
            temp = temp->next;
        }
        printf("Not Found !\n");
    }
}

void display(snode* head){
    snode* temp;
    if(!head){
        printf("Sorry the list is empty");
    }
    else{
        temp = head;
        do{
            printf("%5d",temp->data);
            temp = temp->next;
        }while(temp != head);
    }
    printf("\n");
}

int menu(){
    printf("\nMenu: \n");
    printf("1. Create List\n");
    printf("2. Insert At Beginning\n");
    printf("3. Insert At End\n");
    printf("4. Insert At Position\n");
    printf("5. Delete First Element\n");
    printf("6. Delete Last Element\n");
    printf("7. Delete Element At A Position\n");
    printf("8. Display List\n");
    printf("9. Find Element\n");
    printf("10. Exit\n");
    printf("\n Enter Your Choice: ");
    int inp;
    scanf("%d",&inp);
    return inp;
}

int main() {
    snode* head = NULL;
    int pos;
    while(1){
        int inp = menu();
        int data;
        switch (inp)
        {
        case 1:
            head = createList(head);
            break;
        case 2:
            printf("Enter the Element you want to insert: ");
            scanf("%d",&data);
            head = insertAtBeginning(head, data);
            break;
        case 3:
            printf("Enter the Element you want to insert: ");
            scanf("%d",&data);
            head = insertAtEnd(head, data);
            break;
        case 4:
            printf("Enter the Position in which you want to insert: ");
            scanf("%d",&pos);
            printf("Enter the Element you want to insert: ");
            scanf("%d",&data);
            head = insertAtPosition(head, data, pos);
            break;
        case 5:
            head = deleteAtBeginning(head);
            break;
        case 6:
            head = deleteAtEnd(head);
            break;
        case 7:
            head = deleteAtPosition(head);
            break;
        case 8:
            display(head);
            break;
        case 9:
            printf("Enter the element you want to search: ");
            int s;
            scanf("%d",&s);
            search(head,s);
            break;
        case 10:
            return 0;
        default:
            break;
        }
    }
    return 0;
}