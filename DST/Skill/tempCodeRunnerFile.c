
// int main()
// {
//     snode *head;
//     int choice,ele,pos,status;
//     do{
//         choice = menu();
//         switch (choice)
//         {
//         case 1:
//                 head = create();
//                 break;
//             case 2:
//                 printf("Enter element: ");
//                 scanf("%d", &ele);
//                 head = insertAtBeginning(&head, ele);
//                 break;
//             case 3:
//                 printf("Enter element: ");
//                 scanf("%d", &ele);
//                 head = insertAtEnd(&head, ele);
//                 break;
//             case 4:
//                 printf("Enter element: ");
//                 scanf("%d", &ele);
//                 printf("Enter position: ");
//                 scanf("%d", &pos);
//                 head = insertAtPosition(&head, ele, pos);
//                 break;
//             case 5:
//                 head = deleteAtBeginning(&head);
//                 break;
//             case 6:
//                 head = deleteAtEnd(&head);
//                 break;
//             case 7:
//                 printf("Enter position to delete: ");
//                 scanf("%d", &pos);
//                 head = deleteAtPosition(&head, pos);
//                 break;
//             case 8:
//                 head = displayList(head);
//                 break;
//             case 9:
//                 printf("Enter element to find: ");
//                 scanf("%d", &ele);
//                 status = findElement(head, ele);
//                 break;
//             case 10:
//                 printf("Exiting program.\n");
//                 break;
//             default:
//                 printf("Invalid choice!\n");
//                 break;
//         }
//     } while (choice!= 10);


    
//     return 0;
// }
