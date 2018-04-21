#include"prototypes.h"

int item;

void queue_array()
{
    system("cls");
    system("COLOR FD");
    while(1)
    {
    system("cls");
    gotoxy(78,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SIMPLE QUEUE MENU (USING ARRAY) \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Insert");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Delete");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Display element at the front");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Display all elements of the queue");
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
            printf("\n\t\t\t\t   Input the element for adding in queue : ");
			scanf("%d",&item);
			q_array_insert(item);
			break;
	case '2':
            item=q_array_del();
			printf("\n\t\t\t\t   Deleted element is  %d\n\n",item);
			system("pause");
            break;
    case '3':
            printf("\n\t\t\t\t   Element at the front is %d\n\n",q_array_peek());
            system("pause");
            break;
	case '4':
            q_array_display();
            break;
    case '*':
            simple_queue();
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
}/*End of queue_array()*/



void queue_linked_list()
{
    system("cls");
    system("COLOR FD");
    while(1)
    {
    system("cls");
    gotoxy(84,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SIMPLE QUEUE MENU (USING LINKED LIST) \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Insert");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Delete");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Display element at the front");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Display all elements of the queue");
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
            printf("\n\t\t\t\t   Input the element for adding in queue : ");
			scanf("%d",&item);
			q_Ll_insert(item);
			break;
	case '2':
            printf("\n\t\t\t\t   Deleted element is  %d\n",q_Ll_del());
            system("pause");
            break;
    case '3':
            printf("\n\t\t\t\t   Element at the front of the queue is %d\n", q_Ll_peek() );
            system("pause");
            break;
	case '4':
            q_Ll_display();
            break;
    case '*':
            simple_queue();
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
            queue_linked_list();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of queue_linked_list()*/


void queue_circular_linked_list()
{
    system("cls");
    system("COLOR FD");
    while(1)
    {
    system("cls");
    gotoxy(93,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SIMPLE QUEUE MENU (USING CIRCULAR LINKED LIST) \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Insert");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Delete");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Display element at the front");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Display all elements of the queue");
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
            printf("\n\t\t\t\t   Enter the element for insertion : ");
			scanf("%d",&item);
			q_CLl_insert(item);
			break;
	case '2':
            printf("\n\t\t\t\t   Deleted element is %d\n",q_CLl_del());
            system("pause");
            break;
    case '3':
            printf("\n\t\t\t\t   Item at the front of queue is %d\n",q_CLl_peek());
            system("pause");
            break;
	case '4':
            q_CLl_display();
            break;
    case '*':
            simple_queue();
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
            queue_circular_linked_list();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of queue_circular_linked_list()*/

void simple_queue()
{
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SIMPLE QUEUE MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Queue using Array");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Queue using Linked List");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Queue using Circular Linked List");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Previous Menu");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,15);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,16);
	t();
	gotoxy(35,17);
	printf("Enter your choice: ");
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
	{
    case '1':
            queue_array();
			break;
	case '2':
            queue_linked_list();
            break;
    case '3':
            queue_circular_linked_list();
            break;
    case '*':
            queues();
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
            if(ch)           // OR if(ch)    int case of integers
            simple_queue();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of simple_queue*/


void circular_queue()
{
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(66,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CIRCULAR QUEUE MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Insert");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Delete");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Display element at the front");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Display all elements of the queue");
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
            printf("\n\t\t\t\t   Input the element for insertion : ");
			scanf("%d",&item);
			cq_insert(item);
			break;
	case '2':
            printf("\n\t\t\t\t   Element deleted is : %d\n",cq_del());
            system("pause");
            break;
    case '3':
            printf("\n\t\t\t\t   Element at the front is  : %d\n",cq_peek());
            system("pause");
            break;
	case '4':
            cq_display();
            break;
    case '*':
            queues();
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
            circular_queue();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of circular_queue()*/


void doubly_ended_queue()
{
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(70,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DOUBLY ENDED QUEUE MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Insert at the front end");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Insert at the rear end");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Delete from front end");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Delete from rear end");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Display all elements of the queue");
	gotoxy(35,15);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Previous Menu");
	gotoxy(35,17);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,19);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,20);
	t();
	gotoxy(35,21);
	printf("Enter your choice: ");
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
	{
    case '1':
            printf("\n\t\t\t\t   Input the element for adding in queue : ");
			scanf("%d",&item);
			deq_insert_frontEnd(item);
			break;
	case '2':
            printf("\n\t\t\t\t   Input the element for adding in queue : ");
			scanf("%d",&item);
			deq_insert_rearEnd(item);
            break;
    case '3':
            printf("\n\t\t\t\t   Element deleted from front end is : %d\n",deq_delete_frontEnd());
            system("pause");
            break;
    case '4':
            printf("\n\t\t\t\t   Element deleted from rear end is : %d\n",deq_delete_rearEnd());
            system("pause");
            break;
	case '5':
            deq_display();
            break;
    case '*':
            queues();
            break;
    case '0':
            exit_application();
    default:
		{
		    system("COLOR FC");
            gotoxy(30,23);
            printf("\aWrong Choice!!Please re-entered correct option\n");
            gotoxy(30,24);
            system("pause");
            if(ch)           // OR if(ch)    int case of integers
            doubly_ended_queue();
		}
    }/*End of switch()*/
    deq_pos_front_rear();
    deq_display();
    }/*End of while()*/
}/*End of doubly_ended_queue()*/



void priority_queue()
{
	int item_priority;
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(66,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PRIORITY QUEUE MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Insert");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Delete");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Display all elements of the queue");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Previous Menu");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 0. Close Application");
	gotoxy(35,15);
	printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB");
	gotoxy(35,16);
	t();
	gotoxy(35,17);
	printf("Enter your choice: ");
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
	{
    case '1':
            printf("\n\t\t\t\t   Input the item to be added in the queue : ");
			scanf("%d",&item);
			printf("\n\t\t\t\t   Enter its priority : ");
			scanf("%d",&item_priority);
			pq_Ll_insert(item, item_priority);
			break;
	case '2':
            printf("\n\t\t\t\t   Deleted item is %d\n",pq_Ll_del());
            system("pause");
            break;
    case '3':
            pq_Ll_display();
            break;
    case '*':
            queues();
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
            if(ch)           // OR if(ch)    int case of integers
            simple_queue();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of priority_queue()*/

void queues()
{
    while(1)
    {
    system("cls");
    system("COLOR F1");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 QUEUES MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Simple Queue");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Circular Queue");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Doubly ended Queue");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Priority Queue");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Main Menu");
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
            simple_queue();
            break;
	case '2':
            circular_queue();
            break;
    case '3':
            doubly_ended_queue();
            break;
	case '4':
            priority_queue();
            break;
    case '*':
            main_menu();
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
            if(ch)                   // OR if(ch)    int case of integers
            queues();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of queues()*/
