#include"prototypes.h"

int item;

void stack_array()
{
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(71,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 STACK MENU (USING ARRAY) \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Push");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Pop");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Display the top element");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Display all stack elements");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Previous Menu");
	gotoxy(35,15);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,17);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,18);
	t();
	gotoxy(35,19);
	printf("Enter your choice: ");
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
	{
    case '1':
            printf("\n\t\t\t\t   Enter the item to be pushed : ");
			scanf("%d",&item);
			a_push(item);
			break;
	case '2':
            item = a_pop();
			printf("\n\t\t\t\t   Popped item is : %d\n",item );
			system("pause");
            break;
    case '3':
            printf("\n\t\t\t\t   Item at the top is : %d\n", a_peek() );
            system("pause");
            break;
	case '4':
            a_display();
            break;
    case '*':
            stacks();
            break;
    case '0':
            exit_application();
    default:
		{
		    system("COLOR FC");
            gotoxy(30,21);
            printf("\aWrong Choice!!Please re-entered correct option\n");
            gotoxy(30,22);
            system("pause");
            if(ch)           // OR if(ch)    int case of integers
            stack_array();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of stack_array()*/



void stack_linked_list()
{
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(77,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 STACK MENU (USING LINKED LIST) \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Push");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Pop");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Display the top element");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Display all stack elements");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Previous Menu");
	gotoxy(35,15);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,17);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,18);
	t();
	gotoxy(35,19);
	printf("Enter your choice: ");
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
	{
    case '1':
            printf("\n\t\t\t\t   Enter the item to be pushed : ");
			scanf("%d",&item);
			ll_push(item);
			break;
	case '2':
            item=ll_pop();
			printf("\n\t\t\t\t   Popped item is : %d\n\n",item);
			system("pause");
            break;
    case '3':
            printf("\n\t\t\t\t   Item at the top is %d\n\n",ll_peek());
            system("pause");
            break;
	case '4':
            ll_display();
            break;
    case '*':
            stacks();
            break;
    case '0':
            exit_application();
    default:
		{
		    system("COLOR FC");
            gotoxy(30,21);
            printf("\aWrong Choice!!Please re-entered correct option\n");
            gotoxy(30,22);
            system("pause");
            if(ch)           // OR if(ch)    int case of integers
            stack_linked_list();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of stack_linked_list() */


void stacks()
{
    while(1)
    {
    system("cls");
    system("COLOR F1");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 STACKS MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Stack using Array");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Stack using Linked List");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Main Menu");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,13);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,14);
	t();
	gotoxy(35,15);
	printf("Enter your choice: ");
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
    {
    case '1':
            stack_array();
            break;
    case '2':
            stack_linked_list();
            break;
    case '*':
            main_menu();
            break;
    case '0':
            exit_application();
    default:
        {
            system("COLOR FC");
            gotoxy(30,17);
            printf("\aWrong Choice!!Please re-entered correct option\n");
            gotoxy(30,18);
            system("pause");
            if(ch)                   // OR if(ch)    int case of integers
            stacks();
        }
    }/*End of switch()*/
    }/*End of while()*/
}/*End of stacks()*/
