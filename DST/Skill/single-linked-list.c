/* *****************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

****************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node snode;
snode* getnode(int ele){
    snode *p;
    p = (snode*)malloc(sizeof(snode));
    p->data = ele;
    p->next = NULL;
    return p;
}
snode* create(snode *head){
    snode *p,*q;
    int ele;
    do{
        printf("Enter the element : ");
        scanf("%d",&ele);
        p = getnode(ele);
        if(head==NULL){
            head = p;
        }else{
            q = head;
            while(q->next!=NULL){
                q = q->next;
            }
            q->next = p;
        }
        return head;
        printf("\nDo you want it add a node")
    }while(q->next!=NULL);
    
}
snode* insertAtBeginning(snode *head,int ele){
}
snode* insertAtEnd(snode *head,int ele){

}
snode* insertAtPosition(snode *head,int ele,int pos){

}
snode* deleteAtBeginning(snode *head,int ele){

}
snode* deleteAtEnd(snode *head,int ele){

}
snode* deleteAtPosition(snode *head,int ele,int pos){

}



int menu(){
    int choice;
    printf("Welcome to Single linked lists , functions press(1/2/3/4/5");
    printf("1.Create list \n");
    printf("2.Insertion at beginning \n");
    printf("3.Insertion at End \n");
    printf("4.Insertion at Given position \n");
    printf("5.Deletion at Beginning\n");
    printf("6.Deletion at End\n");
    printf("7.Deletion at Middle\n");
    printf("8.Display\n");
    printf("9.Find element\n");
    printf("10.Exit \n");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    return choice;
}

int main()
{
    snode *head;
    int choice,ele,pos,status;
    do{
        choice = menu();
        switch (choice)
        {
        case 1:
                head = create();
                break;
            case 2:
                printf("Enter element: ");
                scanf("%d", &ele);
                head = insertAtBeginning(&head, ele);
                break;
            case 3:
                printf("Enter element: ");
                scanf("%d", &ele);
                head = insertAtEnd(&head, ele);
                break;
            case 4:
                printf("Enter element: ");
                scanf("%d", &ele);
                printf("Enter position: ");
                scanf("%d", &pos);
                head = insertAtPosition(&head, ele, pos);
                break;
            case 5:
                head = deleteAtBeginning(&head);
                break;
            case 6:
                head = deleteAtEnd(&head);
                break;
            case 7:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                head = deleteAtPosition(&head, pos);
                break;
            case 8:
                head = displayList(head);
                break;
            case 9:
                printf("Enter element to find: ");
                scanf("%d", &ele);
                status = findElement(head, ele);
                break;
            case 10:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice!= 10);


    
    return 0;
}
