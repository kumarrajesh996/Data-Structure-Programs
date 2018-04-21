#include"prototypes.h"


struct node *start=NULL;
int data,item,pos;
struct node	*last=NULL;


void singly_linked_list()
{
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SINGLY LINKED LIST MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Create List");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Display");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Search");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Add to empty list / Add at beginning");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Add at end");
	gotoxy(35,15);
	printf("\xDB\xDB\xDB\xDB\xB2 6. Add after node");
	gotoxy(35,17);
	printf("\xDB\xDB\xDB\xDB\xB2 7. Add before node");
	gotoxy(35,19);
	printf("\xDB\xDB\xDB\xDB\xB2 8. Delete");
	gotoxy(35,21);
	printf("\xDB\xDB\xDB\xDB\xB2 9. Reverse");
	gotoxy(35,23);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Previous Menu");
	gotoxy(35,25);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,27);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,28);
	t();
	gotoxy(35,29);
	printf("Enter your choice: ");
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
	{
    case '1':
            start=s_create_list(start);
			break;
	case '2':
            s_display(start);
            break;
    case '3':
            printf("\n\t\t\t\t   Enter the element to be searched : ");
			scanf("%d",&data);
			s_search(start,data);
			s_display(start);
            break;
	case '4':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			start=s_addatbeg(start,data);
			s_display(start);
            break;
    case '5':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			start=s_addatend(start,data);
			s_display(start);
            break;
    case '6':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			printf("\n\t\t\t\t   Enter the element after which to insert : ");
			scanf("%d",&item);
			start=s_addafter(start,data,item);
			s_display(start);
            break;
    case '7':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			printf("\n\t\t\t\t   Enter the element before which to insert : ");
			scanf("%d",&item);
			start=s_addbefore(start,data,item);
			s_display(start);
            break;
    case '8':
            printf("\n\t\t\t\t   Enter the element to be deleted : ");
			scanf("%d",&data);
			printf("\t\t\t\t   Previous"); s_display(start);
			start=s_del(start, data);
			printf("\t\t\t\t   Updated");    s_display(start);
            break;
    case '9':
            printf("\t\t\t\t   Previous");  s_display(start);
            start=s_reverse(start);
            printf("\t\t\t\t   Reversed");  s_display(start);
            break;
    case '*':
            linked_list();
            break;
    case '0':
            exit_application();
    default:
		{
		    system("COLOR FC");
            gotoxy(30,31);
            printf("\aWrong Choice!!Please re-entered correct option\n");
            gotoxy(30,32);
            system("pause");
            if(ch)           // OR if(ch)    int case of integers
            singly_linked_list();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of singly_linked_list()*/


void circular_linked_list( )
{
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CIRCULAR LINKED LIST MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Create List");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Display");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Add to empty list");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Add at beginning");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Add at end");
	gotoxy(35,15);
	printf("\xDB\xDB\xDB\xDB\xB2 6. Add after");
	gotoxy(35,17);
	printf("\xDB\xDB\xDB\xDB\xB2 7. Delete");
	gotoxy(35,19);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Previous Menu");
	gotoxy(35,21);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,23);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,24);
	t();
	gotoxy(35,25);
	printf("Enter your choice: ");
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
	{
    case '1':
            last=c_create_list(last);
			break;
	case '2':
            c_display(last);
            break;
    case '3':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			last=c_addtoempty(last,data);
			c_display(last);
            break;
	case '4':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			last=c_addatbeg(last,data);
			c_display(last);
            break;
    case '5':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			last=c_addatend(last,data);
			c_display(last);
            break;
    case '6':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			printf("\n\t\t\t\t   Enter the element after which to insert : ");
			scanf("%d",&item);
			last=c_addafter(last,data,item);
			c_display(last);
            break;
    case '7':
            printf("\n\t\t\t\t   Enter the element to be deleted : ");
			scanf("%d",&data);
			printf("\t\t\t\t   Previous");    c_display(last);
			last=c_del(last,data);
			printf("\t\t\t\t   Updated");    c_display(last);
            break;

    case '*':
            linked_list();
            break;
    case '0':
            exit_application();
    default:
		{
		    system("COLOR FC");
            gotoxy(30,27);
            printf("\aWrong Choice!!Please re-entered correct option\n");
            gotoxy(30,28);
            system("pause");
            if(ch)           // OR if(ch)    int case of integers
            circular_linked_list();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of circular_linked_list( )*/


void doubly_linked_list()
{
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DOUBLY LINKED LIST MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Create List");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Display");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Add to empty list");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Add at beginning");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Add at end");
	gotoxy(35,15);
	printf("\xDB\xDB\xDB\xDB\xB2 6. Add after");
	gotoxy(35,17);
	printf("\xDB\xDB\xDB\xDB\xB2 7. Add before");
	gotoxy(35,19);
	printf("\xDB\xDB\xDB\xDB\xB2 8. Delete");
	gotoxy(35,21);
	printf("\xDB\xDB\xDB\xDB\xB2 9. Reverse");
	gotoxy(35,23);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Previous Menu");
	gotoxy(35,25);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,27);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,28);
	t();
	gotoxy(35,29);
	printf("Enter your choice: ");
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
	{
    case '1':
            start=d_create_list(start);
			break;
	case '2':
            d_display(start);
            break;
    case '3':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			start=d_addtoempty(start,data);
			d_display(start);
            break;
	case '4':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			start=d_addatbeg(start,data);
			d_display(start);
            break;
    case '5':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			start=d_addatend(start,data);
			d_display(start);
            break;
    case '6':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			printf("\n\t\t\t\t   Enter the element after which to insert : ");
			scanf("%d",&item);
			start=d_addafter(start,data,item);
			d_display(start);
            break;
    case '7':
            printf("\n\t\t\t\t   Enter the element to be inserted : ");
			scanf("%d",&data);
			printf("\n\t\t\t\t   Enter the element before which to insert : ");
			scanf("%d",&item);
			start=d_addbefore(start,data,item);
			d_display(start);
            break;
    case '8':
            printf("\n\t\t\t\t   Enter the element to be deleted : ");
			scanf("%d",&data);
			printf("\t\t\t\t   Previously");   d_display(start);
			start=d_del(start,data);
			printf("\t\t\t\t   Updated");    d_display(start);
            break;
    case '9':
            printf("\t\t\t\t   Previously");   d_display(start);
            start=d_reverse(start);
            printf("\t\t\t\t   Reversed");    d_display(start);
            break;
    case '*':
            linked_list();
            break;
    case '0':
            exit_application();
    default:
		{
		    system("COLOR FC");
            gotoxy(30,31);
            printf("\aWrong Choice!!Please re-entered correct option\n");
            gotoxy(30,32);
            system("pause");
            if(ch)           // OR if(ch)    int case of integers
            doubly_linked_list();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of doubly_linked_list()*/


void linked_list()
{
    while(1)
    {
    system("cls");
    system("COLOR F1");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LINKED LIST MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Singly Linked List");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Circular Linked List");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Doubly Linked List");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Main Menu");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,15);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,16);
	t();
	gotoxy(35,17);
	printf("Enter your choice: ");
	ch=getche();
    switch(ch)
    {
    case '1':
            singly_linked_list();
            break;
    case '2':
            circular_linked_list();
            break;
    case '3':
            doubly_linked_list();
            break;
    case '*':
            main_menu();
            break;
    case '0':
            exit_application();
    default:
        {
            system("COLOR FC");
            gotoxy(30,19);
            printf("\aWrong Choice!!Please re-entered correct option\n");
            gotoxy(30,20);
            system("pause");
            if(ch)                   // OR if(ch)    int case of integers
            linked_list();
        }
    }/*End of switch()*/
    }/*End of while()*/
}/*End of linked_list()*/
