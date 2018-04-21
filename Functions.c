#include"prototypes.h"

int s_arr_top = -1;
int front_arr=-1;
int rear_arr=-1;


struct ll_s_node                //stack using linked list Structure
{
	int info;
	struct ll_s_node *link;
}*ll_top=NULL;


struct q_Ll_CLl_node            //queue using linked list & circular linked list  Structure
{
	int info;
	int priority;
	struct q_Ll_CLl_node *link;
}*front_ptr=NULL,*rear_ptr=NULL;


struct avl_node             //AVL Tree Structure
{
	struct  avl_node *lchild;
	int info;
	struct  avl_node *rchild;
	int balance;
};


/*Main Menu Functions*/                                                     /*Main Menu Functions*/
COORD coord = {0, 0};           // sets coordinates to 0,0

void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void delay(unsigned int mseconds)               //Delay function
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int t(void)   //for time
{
time_t t;
time(&t);
printf("Date and time : %s\n",ctime(&t));
return 0 ;
}

void exit_application()
{
		system("cls");
		system("COLOR F9");
		gotoxy(16,3);
		printf("Project Submitted by :-");
		gotoxy(16,4);
		for(j=0;j<70;j++)
        {
        delay(7);      printf("\xcd");
        }
        gotoxy(16,5);
		printf("1. Sagar Negi               Roll no.: 15103053");
		gotoxy(16,6);
		printf("   Semester: 3rd            Group: G2");
		gotoxy(16,7);
		printf("   Branch: CSE              E-mail: negi.sagar91@gmail.com");
		gotoxy(16,9);
		printf("2. Rajesh Kumar Khatik      Roll no.: 15103062");
		gotoxy(16,10);
		printf("   Semester: 3rd            Group: G3");
		gotoxy(16,11);
		printf("   Branch: CSE              E-mail: rajeshkhatik96@gmail.com");
		gotoxy(30,13);
		printf("Thanking you !!");
		gotoxy(16,14);
		for(j=0;j<70;j++)
        {
        delay(7);      printf("\xcd");
        }
		gotoxy(16,16);
		printf("Exiting in 3 second...........>");
		delay(3000);
		exit(0);
}

/*End of Main Menu Functions*/


                                                                        /*Linked list functions*/
/*Single Linked list functions */
struct node *s_create_list(struct node *start)
{
	int i,n,data;
	printf("\n\n\t\t\t\t   Enter the number of nodes : ");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;

	printf("\n\t\t\t\t   Enter the element to be inserted : ");
	scanf("%d",&data);
	start=s_addatbeg(start,data);

	for(i=2;i<=n;i++)
	{
		printf("\n\t\t\t\t   Enter the element to be inserted : ");
		scanf("%d",&data);
		start=s_addatend(start,data);
	}
	printf("\n\t\t\t\t   List Created Successfully.\n\n");
	system("pause");
	return start;
}

void s_display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("\a\n\t\t\t\t   List is empty\n\n");
		system("pause");
		return;
	}
	p=start;
	printf("\n\t\t\t\t   List is : ");
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n\n");
	system("pause");
}

void s_search(struct node *start,int item)
{
	struct node *p=start;
	int pos=1;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			printf("\n\t\t\t\t   Item %d found at position %d\n\n",item,pos);
			system("pause");
			return;
		}
		p=p->link;
		pos++;
	}
	printf("\a\n\t\t\t\t   Item %d not found in list\n\n",item);
	system("pause");
}

struct node *s_addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}

struct node *s_addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}

struct node *s_addafter(struct node *start,int data,int item)
{
	struct node *tmp,*p;
	p=start;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("\a\n\t\t\t\t   %d not present in the list\n\n",item);
	system("pause");
	return start;
}

struct node *s_addbefore(struct node *start,int data,int item)
{
	struct node *tmp,*p;
	if(start==NULL )
	{
		printf("\a\n\t\t\t\t   List is empty\n\n");
		system("pause");
		return start;
	}

	if(item==start->info)
	{
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->info=data;
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("\a\n\t\t\t\t   %d not present in the list\n\n",item);
	system("pause");
	return start;
}
struct node *s_del(struct node *start,int data)
{
	struct node *tmp,*p;
	if(start==NULL)
	{
		printf("\a\n\t\t\t\t   List is empty\n\n");
		system("pause");
		return start;
	}

	if(start->info==data)
	{
		tmp=start;
		start=start->link;
		free(tmp);
		return start;
	}
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==data)
		{
			tmp=p->link;
			p->link=tmp->link;
			free(tmp);
			return start;
		}
		p=p->link;
	}
	printf("\a\n\t\t\t\t   Element %d not found\n\n",data);
	system("pause");
	return start;
}

struct node *s_reverse(struct node *start)
{
	struct node *prev, *ptr, *next;
	prev=NULL;
   	ptr=start;
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
	start=prev;
	return start;
}
/* End of Single Linked list functions */


/*Circular Linked list functions */

struct node *c_create_list(struct node *last)
{
	int i,n,data;
	printf("\n\t\t\t\t   Enter the number of nodes : ");
	scanf("%d",&n);
	last=NULL;
	if(n==0)
		return last;
	printf("\n\t\t\t\t   Enter the element to be inserted : ");
	scanf("%d",&data);
	last=c_addtoempty(last,data);

	for(i=2;i<=n;i++)
	{
		printf("\t\t\t\t   Enter the element to be inserted : ");
		scanf("%d",&data);
		last=c_addatend(last,data);
	}
    printf("\n\t\t\t\t   List Created Successfully.\n\n");
	system("pause");
	return last;
}/*End of create_list()*/
void c_display(struct node *last)
{
	struct node *p;
	if(last==NULL)
	{
		printf("\a\n\t\t\t\t   List is empty\n\n");
		system("pause");
		return;
	}
	p=last->link;
	printf("\n\t\t\t\t   List is : ");
	do
	{
		printf("%d ",p->info);
		p=p->link;
	}while(p!=last->link);
	printf("\n\n");
	system("pause");
}/*End of display( )*/
struct node *c_addtoempty(struct node *last,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	last=tmp;
	last->link=last;
	return last;
}/*End of addtoempty( )*/

struct node *c_addatbeg(struct node *last,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=last->link;
	last->link=tmp;
	return last;
}/*End of addatbeg( )*/

struct node *c_addatend(struct node *last,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=last->link;
	last->link=tmp;
	last=tmp;
	return last;
}/*End of addatend( )*/

struct node *c_addafter(struct node *last,int data,int item)
{
	struct node *tmp,*p;
	p=last->link;
	do
	{
		if(p->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			if(p==last)
				last=tmp;
			return last;
		}
		p=p->link;
	}while(p!=last->link);
	printf("\a\n\t\t\t\t   %d not present in the list\n\n",item);
	system("pause");
	return last;
}/*End of addafter()*/

struct node *c_del(struct node *last,int data)
{
	struct node *tmp,*p;
	int flag=0;
	if(last==NULL)
	{
	    flag=1;
		printf("\a\n\t\t\t\t   List is empty\n\n");
		system("pause");
		return last;
	}
	/*Deletion of only node*/
	if(last->link==last && last->info==data)
	{
	    flag=1;
		tmp=last;
		last=NULL;
		free(tmp);
		return last;
	}
	/*Deletion of first node*/
	if(last->link->info==data)
	{
	    flag=1;
		tmp=last->link;
		last->link=tmp->link;
		free(tmp);
		return last;
	}
	/*Deletion in between*/
	p=last->link;
	while(p->link!=last)
	{
		if(p->link->info==data)
		{
		    flag=1;
			tmp=p->link;
			p->link=tmp->link;
			free(tmp);
			return last;
		}
		p=p->link;
	}
	/*Deletion of last node*/
	if(last->info==data)
	{
	    flag=1;
		tmp=last;
		p->link=last->link;
		last=p;
		free(tmp);
		system("pause");
		return last;
	}
	if(flag==0)
        printf("\a\n\t\t\t\t   Element %d not found\n",data);
    system("pause");
	return last;
}/*End of del( )*/
/* End of Circular Linked list functions */

/*Doubly Linked list functions */
struct node *d_create_list(struct node *start)
{
	int i,n,data;
	printf("\n\t\t\t\t   Enter the number of nodes : ");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;
	printf("\n\t\t\t\t   Enter the element to be inserted : ");
	scanf("%d",&data);
	start=d_addtoempty(start,data);

	for(i=2;i<=n;i++)
	{
		printf("\n\t\t\t\t   Enter the element to be inserted : ");
		scanf("%d",&data);
		start=d_addatend(start,data);
	}
	printf("\n\t\t\t\t   List Created Successfully.\n\n");
	system("pause");
	return start;
}/*End of create_list()*/

void d_display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("\a\n\t\t\t\t   List is empty\n\n");
		system("pause");
		return;
	}
	p=start;
	printf("\n\t\t\t\t   List is : ");
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->next;
	}
	printf("\n\n");
	system("pause");
}/*End of display() */

struct node *d_addtoempty(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->prev=NULL;
	tmp->next=NULL;
	start=tmp;
	return start;
}/*End of addtoempty( )*/

struct node *d_addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->prev=NULL;
	tmp->next=start;
	start->prev=tmp;
	start=tmp;
	return start;
}/*End of addatbeg( )*/

struct node *d_addatend(struct node *start,int data)
{
	struct node *tmp,*p;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->next!=NULL)
		p=p->next;
	p->next=tmp;
	tmp->next=NULL;
	tmp->prev=p;
	return start;
}/*End of addatend( )*/

struct node *d_addafter(struct node *start,int data,int item)
{
	struct node *tmp,*p;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			tmp->prev=p;
			tmp->next=p->next;
			if(p->next!=NULL)
				p->next->prev=tmp;
			p->next=tmp;
			return start;
		}
		p=p->next;
	}
	printf("\a\n\t\t\t\t   %d not present in the list\n\n",item);
	system("pause");
	return start;
}/*End of addafter()*/

struct node *d_addbefore(struct node *start,int data,int item)
{
	struct node *tmp,*q;
	if(start==NULL )
	{
		printf("\a\n\t\t\t\t   List is empty\n\n");
		system("pause");
		return start;
	}
	if(start->info==item)
	{
		tmp = (struct node *)malloc(sizeof(struct node));
		tmp->info=data;
		tmp->prev=NULL;
		tmp->next=start;
		start->prev=tmp;
		start=tmp;
		return start;
	}
	q=start;
	while(q!=NULL)
	{
		if(q->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->prev=q->prev;
			tmp->next = q;
			q->prev->next=tmp;
			q->prev=tmp;
			return start;
		}
		q=q->next;
	}
	printf("\a\n\t\t\t\t   %d not present in the list\n\n",item);
	system("pause");
	return start;
}/*End of addbefore()*/

struct node *d_del(struct node *start,int data)
{
	struct node *tmp;
	if(start==NULL)
	{
		printf("\a\n\t\t\t\t   List is empty\n\n");
		system("pause");
		return start;
	}
	if(start->next==NULL)	/*only one node in the list*/
		{
		    if(start->info==data)
		{
			tmp=start;
			start=NULL;
			free(tmp);
			return start;
		}
        else
		{
			printf("\a\n\t\t\t\t   Element %d not found\n\n",data);
			system("pause");
			return start;
		}
		}
	/*Deletion of first node*/
	if(start->info==data)
	{
		tmp=start;
		start=start->next;
		start->prev=NULL;
		free(tmp);
		return start;
	}
	/*Deletion in between*/
	tmp=start->next;
	while(tmp->next!=NULL )
	{
		if(tmp->info==data)
		{
			tmp->prev->next=tmp->next;
			tmp->next->prev=tmp->prev;
			free(tmp);
			return start;
		}
		tmp=tmp->next;
	}
	/*Deletion of last node*/
	if(tmp->info==data)
	{
		tmp->prev->next=NULL;
		free(tmp);
		return start;
	}
	printf("\a\n\t\t\t\t   Element %d not found\n\n",data);
	system("pause");
	return start;
}/*End of del()*/

struct node *d_reverse(struct node *start)
{
	struct node *p1,*p2;
	p1=start;
	p2=p1->next;
	p1->next=NULL;
	p1->prev=p2;
	while(p2!=NULL)
	{
		p2->prev=p2->next;
		p2->next=p1;
		p1=p2;
		p2=p2->prev;
	}
	start=p1;
	printf("\n\t\t\t\t   List Reversed\n\n");
	system("pause");
	return start;
}/*End of reverse()*/
/* End of Doubly Linked list functions */
/*End Linked list functions*/

                                                                        /*Stack functions*/
/*Stack using array functions*/
void a_push(int item)
{
	if( a_isFull() )
	{
		printf("\a\n\t\t\t\t   Stack Overflow\n\n");
		system("pause");
		return;
	}
	s_arr_top = s_arr_top+1;
	stack_arr[s_arr_top] = item;
	printf("\n\t\t\t\t   Pushed Item is : %d\n\n",item);
	system("pause");
}/*End of push()*/

int a_pop()
{
	int item;
	if( a_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Stack Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......");
		system("pause");
		exit(1);            //or return; to continue program
	}
	item = stack_arr[s_arr_top];
	s_arr_top = s_arr_top-1;
	return item;
}/*End of pop()*/

int a_peek()
{
	if( a_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Stack Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......");
		system("pause");
		exit(1);            //or return; to continue program
	}
	return stack_arr[s_arr_top];
}/*End of peek()*/

int a_isEmpty()
{
	if( s_arr_top == -1 )
		return 1;
	else
		return 0;
}/*End of isEmpty*/

int a_isFull()
{
	if( s_arr_top == MAX-1 )
		return 1;
	else
		return 0;
}/*End of isFull*/

void a_display()
{
	int i;
	if( a_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Stack is empty\n\n");
		system("pause");
		return;
	}
    printf("\n\t\t\t\t   Stack elements :");
	for(i=s_arr_top;i>=0;i--)
		printf("\n\t\t\t\t   %d", stack_arr[i] );
	printf("\n\n");
	system("pause");
}/*End of display()*/
/*End of Stack using array functions*/

/*Stack using linked list functions*/
void ll_push(int item)
{
	struct ll_s_node *tmp;
	tmp=(struct ll_s_node *)malloc(sizeof(struct ll_s_node));
	if(tmp==NULL)
	{
		printf("\a\n\t\t\t\t   Stack Overflow\n\n");
		system("pause");
		return;
	}
	tmp->info=item;
	tmp->link=ll_top;
	ll_top=tmp;
	printf("\n\t\t\t\t   Pushed Item is : %d\n\n",tmp->info);
	system("pause");
}/*End of push()*/

int ll_pop()
{
	struct ll_s_node *tmp;
	int item;
	if( ll_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Stack Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......");
		system("pause");
		exit(1);            //or return; to continue program
	}
	tmp=ll_top;
	item=tmp->info;
	ll_top=ll_top->link;
	free(tmp);
	return item;
}/*End of pop()*/

int ll_peek()
{
	if( ll_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Stack Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......");
		system("pause");
		exit(1);            //or return; to continue program
	}
	return ll_top->info;
}/*End of peek() */

int ll_isEmpty()
{
	if(ll_top == NULL)
		return 1;
	else
		return 0;
}/*isEmpty()*/


void ll_display()
{
	struct ll_s_node *ptr;
	ptr=ll_top;
	if(ll_isEmpty())
	{
		printf("\a\n\t\t\t\t   Stack is empty\n\n");
		system("pause");
		return;
	}
	printf("\n\t\t\t\t   Stack elements :");
	while(ptr!=NULL)
	{
		printf("\n\t\t\t\t   %d",ptr->info);
		ptr=ptr->link;
	}
	printf("\n\n");
	system("pause");
}/*End of display()*/
/*End of Stack using Linked list functions*/
/*End of Stack functions*/

                                                                                /*Queue functions */
/*Simple Queue functions */
/*Queue using Array functions */
void q_array_insert(int item)
{
	if( q_array_isFull() )
	{
		printf("\a\n\t\t\t\t   Queue Overflow\n\n");
		system("pause");
		return;
	}
	if( front_arr == -1 )
		front_arr=0;
	rear_arr=rear_arr+1;
	queue_arr[rear_arr]=item ;
	printf("\n\t\t\t\t   Inserted Item in Queue is : %d\n\n",item);
	system("pause");
}/*End of insert()*/

int q_array_del()
{
	int item;
	if( q_array_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......");
		system("pause");
		exit(1);            //or return; to continue program
	}
	item=queue_arr[front_arr];
	front_arr=front_arr+1;
	return item;
}/*End of del()*/

int q_array_peek()
{
	if( q_array_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	return queue_arr[front_arr];
}/*End of peek()*/

int q_array_isEmpty()
{
	if( front_arr==-1 || front_arr==rear_arr+1 )
		return 1;
	else
		return 0;
}/*End of isEmpty()*/

int q_array_isFull()
{
	if( rear_arr==MAX-1 )
		return 1;
	else
		return 0;
}/*End of isFull()*/

void q_array_display()
{
	int i;
	if ( q_array_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue is empty\n\n");
		system("pause");
		return;
	}
	printf("\n\t\t\t\t   Queue is : ");
	for(i=front_arr;i<=rear_arr;i++)
		printf("%d  ",queue_arr[i]);
	printf("\n\n");
	system("pause");
}/*End of display() */
/*End of Queue using Array functions */

/*Queue using Linked list functions */
void q_Ll_insert(int item)
{
	struct q_Ll_CLl_node *tmp;
	tmp=(struct q_Ll_CLl_node *)malloc(sizeof(struct q_Ll_CLl_node));
	if(tmp==NULL)
	{
		printf("\a\n\t\t\t\t   Memory not available\n\n");
		system("pause");
		return;
	}
	tmp->info = item;
	tmp->link=NULL;
	if(front_ptr==NULL)		 /*If Queue is empty*/
		front_ptr=tmp;
	else
		rear_ptr->link=tmp;
	rear_ptr=tmp;
	printf("\n\t\t\t\t   Inserted Item in Queue is : %d\n\n",tmp->info);
	system("pause");
}/*End of insert()*/

int q_Ll_del()
{
	struct q_Ll_CLl_node *tmp;
	int item;
	if( q_Ll_isEmpty( ) )
	{
		printf("\a\n\t\t\t\t   Queue Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	tmp=front_ptr;
	item=tmp->info;
	front_ptr=front_ptr->link;
	free(tmp);
	return item;
}/*End of del()*/

int q_Ll_peek()
{
	if( q_Ll_isEmpty( ) )
	{
		printf("\a\n\t\t\t\t   Queue Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	return front_ptr->info;
}/*End of peek()*/

int q_Ll_isEmpty()
{
	if(front_ptr==NULL)
		return 1;
	else
		return 0;

}/*End of isEmpty()*/

void q_Ll_display()
{
	struct q_Ll_CLl_node *ptr;
	ptr=front_ptr;
	if(q_Ll_isEmpty())
	{
		printf("\a\n\t\t\t\t   Queue is empty\n\n");
		system("pause");
		return;
	}
	printf("\n\t\t\t\t   Queue elements : ");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->link;
	}
	printf("\n\n");
	system("pause");
}/*End of display()*/
/*End of Queue using Linked list functions */

/*Queue using Circular Linked list functions */
void q_CLl_insert(int item)
{
	struct q_Ll_CLl_node *tmp;
	tmp=(struct q_Ll_CLl_node *)malloc(sizeof(struct q_Ll_CLl_node));
	tmp->info=item;
	if(tmp==NULL)
	{
		printf("\a\n\t\t\t\t   Memory not available\n\n");
		system("pause");
		return;
	}

	if( q_CLl_isEmpty() ) /*If queue is empty */
	{
		rear_ptr=tmp;
		tmp->link=rear_ptr;
	}
	else
	{
		tmp->link=rear_ptr->link;
		rear_ptr->link=tmp;
		rear_ptr=tmp;
	}
	printf("\n\t\t\t\t   Inserted Item in Queue is : %d\n\n",tmp->info);
	system("pause");
}/*End of insert()*/

int q_CLl_del()
{
	int item;
	struct q_Ll_CLl_node *tmp;
	if( q_CLl_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	if(rear_ptr->link==rear_ptr)  /*If only one element*/
	{
		tmp=rear_ptr;
		rear_ptr=NULL;
	}
	else
	{
		tmp=rear_ptr->link;
		rear_ptr->link=rear_ptr->link->link;
	}
	item=tmp->info;
	free(tmp);
	return item;
}/*End of del()*/

int q_CLl_peek()
{
	if( q_CLl_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	return rear_ptr->link->info;
}/* End of peek() */

int q_CLl_isEmpty()
{
	if( rear_ptr == NULL )
		return 1;
	else
		return 0;
}/*End of isEmpty()*/


void q_CLl_display()
{
	struct q_Ll_CLl_node *p;
	if(q_CLl_isEmpty())
	{
		printf("\a\n\t\t\t\t   Queue is empty\n\n");
		system("pause");
		return;
	}
	printf("\n\t\t\t\t   Queue is : ");
	p=rear_ptr->link;
	do
	{
		printf("%d ",p->info);
		p=p->link;
	}while(p!=rear_ptr->link);
	printf("\n\n");
	system("pause");
}/*End of display()*/
/*End of Queue using Circular Linked list functions */
/*End of Simple Queue functions */

/*Circular Queue functions */
void cq_insert(int item)
{
	if( cq_isFull() )
	{
		printf("\a\n\t\t\t\t   Queue Overflow\n\n");
		system("pause");
		return;
	}
	if(front_arr == -1 )
		front_arr=0;

	if(rear_arr==MAX-1)/*rear is at last position of queue*/
		rear_arr=0;
	else
		rear_arr=rear_arr+1;
	cqueue_arr[rear_arr]=item ;
	printf("\n\t\t\t\t   Inserted Item in Queue is : %d\n\n",item);
	system("pause");
}/*End of insert()*/

int cq_del()
{
	int item;
	if( cq_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	item=cqueue_arr[front_arr];
	if(front_arr==rear_arr) /* queue has only one element */
	{
		front_arr=-1;
		rear_arr=-1;
	}
	else if(front_arr==MAX-1)
		front_arr=0;
	else
		front_arr=front_arr+1;
	return item;
}/*End of del() */

int cq_isEmpty()
{
	if(front_arr==-1)
		return 1;
	else
		return 0;
}/*End of isEmpty()*/

int cq_isFull()
{
	if((front_arr==0 && rear_arr==MAX-1) || (front_arr==rear_arr+1))
		return 1;
	else
		return 0;
}/*End of isFull()*/

int cq_peek()
{
	if( cq_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	return cqueue_arr[front_arr];
}/*End of peek()*/

void cq_display()
{
	int i;
	if(cq_isEmpty())
	{
		printf("\a\n\t\t\t\t   Queue is empty\n\n");
		system("pause");
		return;
	}
	printf("\n\t\t\t\t   Queue elements : ");
	i=front_arr;
	if( front_arr<=rear_arr )
	{
		while(i<=rear_arr)
			printf("%d ",cqueue_arr[i++]);
	}
	else
	{
		while(i<=MAX-1)
			printf("%d ",cqueue_arr[i++]);
		i=0;
		while(i<=rear_arr)
			printf("%d ",cqueue_arr[i++]);
	}
	printf("\n\n");
	system("pause");
}/*End of display() */
/*End of Circular Queue functions */


/*Doubly ended Queue functions */
void deq_insert_frontEnd(int item)
{
	if( deq_isFull() )
	{
		printf("\a\n\t\t\t\t   Queue Overflow\n\n");
		system("pause");
		return;
	}
	if( front_arr==-1 )/*If queue is initially empty*/
	{
		front_arr=0;
		rear_arr=0;
	}
	else if(front_arr==0)
		front_arr=MAX-1;
	else
		front_arr=front_arr-1;
	deque_arr[front_arr]=item ;
}/*End of insert_frontEnd()*/

void deq_insert_rearEnd(int item)
{
	if( deq_isFull() )
	{
		printf("\a\n\t\t\t\t   Queue Overflow\n\n");
		system("pause");
		return;
	}
	if(front_arr==-1)  /*if queue is initially empty*/
	{
		front_arr=0;
		rear_arr=0;
	}
	else if(rear_arr==MAX-1)  /*rear is at last position of queue */
		rear_arr=0;
	else
		rear_arr=rear_arr+1;
	deque_arr[rear_arr]=item ;
}/*End of insert_rearEnd()*/

int deq_delete_frontEnd()
{
	int item;
	if( deq_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	item=deque_arr[front_arr];
	if(front_arr==rear_arr) /*Queue has only one element */
	{
		front_arr=-1;
		rear_arr=-1;
	}
	else
		if(front_arr==MAX-1)
			front_arr=0;
		else
			front_arr=front_arr+1;
	return item;
}/*End of delete_frontEnd()*/

int deq_delete_rearEnd()
{
	int item;
	if( deq_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	item=deque_arr[rear_arr];

	if(front_arr==rear_arr) /*queue has only one element*/
	{
		front_arr=-1;
		rear_arr=-1;
	}
	else if(rear_arr==0)
		rear_arr=MAX-1;
	else
		rear_arr=rear_arr-1;
	return item;
}/*End of delete_rearEnd() */

int deq_isFull()
{
	if ( (front_arr==0 && rear_arr==MAX-1) || (front_arr==rear_arr+1) )
		return 1;
	else
		return 0;
}/*End of isFull()*/

int deq_isEmpty()
{
	if( front_arr == -1)
		return 1;
	else
		return 0;
}/*End of isEmpty()*/

void deq_display()
{
	int i;
	if( deq_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue is empty\n\n");
		system("pause");
		return;
	}
	printf("\n\t\t\t\t   Queue elements : ");
	i=front_arr;
	if( front_arr<=rear_arr )
	{
		while(i<=rear_arr)
			printf(" %d ",deque_arr[i++]);
	}
	else
	{
		while(i<=MAX-1)
			printf(" %d ",deque_arr[i++]);
		i=0;
		while(i<=rear_arr)
			printf(" %d ",deque_arr[i++]);
	}
	printf("\n\n");
	system("pause");
}/*End of display() */

void deq_pos_front_rear()
{
    printf("\n\t\t\t\t   front = %d, rear =%d\n", front_arr , rear_arr);
}/*End of deq_pos_front_rear()*/
/*End of Doubly ended Queue functions */


/*Priority Queue functions */
void pq_Ll_insert(int item,int item_priority)
{
	struct q_Ll_CLl_node *tmp,*p;

	tmp=(struct q_Ll_CLl_node *)malloc(sizeof(struct q_Ll_CLl_node));
	if(tmp==NULL)
	{
		printf("\a\n\t\t\t\t   Memory not available\n\n");
		system("pause");
		return;
	}
	tmp->info=item;
	tmp->priority=item_priority;
	/*Queue is empty or item to be added has priority more than first element*/
	if( pq_Ll_isEmpty() || item_priority < front_ptr->priority )
	{
		tmp->link=front_ptr;
		front_ptr=tmp;
	}
	else
	{
		p = front_ptr;
		while( p->link!=NULL && p->link->priority<=item_priority )
			p=p->link;
		tmp->link=p->link;
		p->link=tmp;
	}
	printf("\n\t\t\t\t   Inserted Item in Queue is : %d\tPriority : %d\n\n",tmp->info,item_priority);
	system("pause");
}/*End of insert()*/

int pq_Ll_del()
{
	struct q_Ll_CLl_node *tmp;
	int item;
	if( pq_Ll_isEmpty() )
	{
		printf("\a\n\t\t\t\t   Queue Underflow\n\n");
		printf("\n\t\t\t\t   Exiting the main......\n\n");
		system("pause");
		exit(1);            //or return; to continue program
	}
	else
	{
		tmp=front_ptr;
		item=tmp->info;
		front_ptr=front_ptr->link;
		free(tmp);
	}
	return item;
}/*End of del()*/

int pq_Ll_isEmpty()
{
	if( front_ptr == NULL )
		return 1;
	else
		return 0;

}/*End of isEmpty()*/


void pq_Ll_display()
{
	struct q_Ll_CLl_node *ptr;
	ptr=front_ptr;
	if( pq_Ll_isEmpty() )
        {
		printf("\a\n\t\t\t\t   Queue is empty\n\n");
		system("pause");
        }
	else
	{	printf("\n\t\t\t\t   Queue is :\n");
		printf("\n\t\t\t\t   Priority       Item");
		while(ptr!=NULL)
		{
			printf("\n\t\t\t\t   %5d        %5d",ptr->priority,ptr->info);
			ptr=ptr->link;
		}
	}
	printf("\n");
	system("pause");
}/*End of display() */
/*End of Priority Queue functions */
/*End of Queue functions */

                                                                                        /*Searching functions */
/*Searching functions */
int LinearSearch(int arr[], int n, int item)			/* Linear search */
{
	int i=0;
	while(i<n && item!=arr[i])
			i++;
	if(i < n)
		return i;
	else
		return -1;
}

int Binary_Search(int arr[], int size, int item)		/* Binary search */
{
	int low=0, up=size-1, mid;
	while(low<=up)
	{
		mid = (low+up)/2;		/*mid = low + (up-low)/2*/
		if(item>arr[mid])
			low = mid+1;		/*Search in right half */
		else if(item<arr[mid])
			up = mid-1;		/*Search in left half */
		else
			return mid;
	}
	return -1;
}

int fib(int m)                          /* fibonacci search */
{
int a,b,c;
a=0;
b=1;
c=a+b;
while(c<m)
{
 		a=b;
 		b=c;
 		c=a+b;
}
 	return b;
}

int rfibsearch(int arr[],int n,int p,int q,int r,int key)             /* fibonacci search */
{
int t;
if(p<1||p>n)
 		return 0;
else if(key==arr[p])
 		return p;
else if(key<arr[p])
{
 			if(r==0)
  				return 0;
 			else
 			{
  				p=p-r;
  				t=q;
  				q=r;
  				r=t-r;
  				return rfibsearch(arr,n,p,q,r,key);
 			}
}
else
{
 		if(q==1)
   			return 0;
 		else
 		{
  			p=p+r;
  			q=q-r;
  			r=r-q;
  			return rfibsearch(arr,n,p,q,r,key);
 		}
}
}
/*End of Searching functions */
                                                                                    /*Sorting functions */

void quick(int arr[],int low,int up)                //quick sort function
{
	int pivloc;

	if(low>=up)
		return;
	pivloc = partition(arr,low,up);
	quick(arr,low,pivloc-1); 			/*process left sublist*/
	quick(arr,pivloc+1,up); 			 /*process right sublist*/
}					/*End of quick()*/

int partition(int arr[], int low, int up)                   //part of quick sort function
{
	int temp,i,j,pivot;

	i=low+1;
	j=up;
	pivot=arr[low];

	while(i <= j)
	{
		while( arr[i] < pivot && i<up )
			i++;

		while( arr[j] > pivot )
			j--;

		if(i < j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
		else
			i++;
	}
	arr[low]=arr[j];
	arr[j]=pivot;

	return j;
}			/*End of partition()*/


void merge_sort(int arr[], int n)                   //merge sorting function
{
	int temp[MAX];
	int size=1;
	while(size<n)
	{
		merge_pass(arr,temp,size,n);
		size=size*2;
	}
}

void merge_pass(int arr[], int temp[], int size, int n)                 //part of merge sorting function
{
	int i,low1,up1,low2,up2;
	low1=0;
	while( low1 + size < n )
	{
		up1 = low1 + size-1;
		low2 = low1 + size;
		up2 = low2 + size-1;
		if( up2 >= n )			/*if length of last sublist is less than size*/
			up2 = n-1;
		merge(arr,temp,low1,up1,low2,up2);
		low1=up2+1;			/*Take next two sublists for merging*/
	}
	for(i=low1;i<=n-1;i++)
		temp[i]=arr[i];			/*If any sublist is left*/
	copy(arr, temp, n);
}

void merge(int arr[], int temp[],int low1, int up1, int low2, int up2 )            //part of merge sorting function
{
	int i=low1;
	int j=low2;
	int k=low1;

	while(i<=up1 && j<=up2 )
	{
		if( arr[i] <= arr[j] )
			temp[k++]=arr[i++];
		else
			temp[k++]=arr[j++];
	}
	while(i<=up1)
		temp[k++]=arr[i++];
	while(j<=up2)
		temp[k++]=arr[j++];
}

void copy(int arr[], int temp[], int n)                 //part of merge sorting function
{
	int i;
	for(i=0;i<n;i++)
		arr[i]=temp[i];
}


void heap_sort(int arr[], int size)             //heap sorting function
{
	int max;
	buildHeap(arr, size);
	printf("\n\t\t\t\t   Heap is : ");
	heap_display(arr,size);

	while(size>1)
	{
		max = del_root(arr,&size);
		arr[size+1]=max;
	}
}/*End of heap_sort*/

void buildHeap(int arr[], int size)                //part of heap sorting function
{
	int i;
	for(i=size/2; i>=1; i--)
		restoreDown(arr,i,size);
}/*End of buildHeap()*/

int del_root(int arr[], int *size)                 //part of heap sorting function
{
	int max = arr[1];
	arr[1] = arr[*size];
	(*size)--;
	restoreDown(arr,1,*size);
	return max;
}/*End of del_root()*/

void restoreDown(int arr[], int i, int size )          //part of heap sorting function
{
	int left=2*i, right=left+1;

	int num=arr[i];

	while(right<=size)
	{
		if( num>=arr[left] && num>=arr[right] )
		{
			arr[i] = num;
			return;
		}
		else if(arr[left] > arr[right])
		{
			arr[i] = arr[left];
			i = left;
		}
		else
		{
			arr[i] = arr[right];
			i = right;
		}
		left = 2 * i;
		right = left + 1;
	}

	if(left == size && num < arr[left] ) /*when right == size+1*/
	{
		arr[i]=arr[left];
		i = left;
	}
	arr[i]=num;
}/*End of restoreDown()*/

void heap_display(int arr[], int n)                // heap display function
{
	int i;
	for(i=1;i<=n;i++)
		printf("%d  ",arr[i]);
	printf("\n\n");
	system("pause");
}/*End of heap_display()*/
/*End of Sorting functions */

                                                                                        /*Tree functions*/
/*Binary Tree functions*/
struct bin_node *bin_search(struct bin_node *bin_ptr, int skey)
{
	if(bin_ptr==NULL)
	{
		printf("\a\n\t\t\t\t   Key not found\n\n");
		system("pause");
		return NULL;
	}
	else if(skey < bin_ptr->info)/*search in left subtree*/
		return bin_search(bin_ptr->lchild, skey);
	else if(skey > bin_ptr->info)/*search in right subtree*/
		return bin_search(bin_ptr->rchild, skey);
	else /*skey found*/
    {
		return bin_ptr;
    }
}/*End of search()*/

struct bin_node *bin_insert(struct bin_node *bin_ptr, int ikey )
{
	if(bin_ptr==NULL)
	{
		bin_ptr = (struct bin_node *) malloc(sizeof(struct bin_node));
		bin_ptr->info = ikey;
		bin_ptr->lchild = NULL;
		bin_ptr->rchild = NULL;
	}
	else if(ikey < bin_ptr->info)	/*Insertion in left subtree*/
		bin_ptr->lchild = bin_insert(bin_ptr->lchild, ikey);
	else if(ikey > bin_ptr->info)	/*Insertion in right subtree */
		bin_ptr->rchild = bin_insert(bin_ptr->rchild, ikey);
	else
		{
		    printf("\n\t\t\t\t   Duplicate key\n\n");
        }
	return bin_ptr;
}/*End of insert( )*/

struct bin_node *bin_del(struct bin_node *bin_ptr, int dkey)
{
	struct bin_node *tmp, *succ;

	if( bin_ptr == NULL)
	{
		printf("\a\n\t\t\t\t   dkey not found\n\n");
		system("pause");
		return(bin_ptr);
	}
	if( dkey < bin_ptr->info )/*delete from left subtree*/
		bin_ptr->lchild = bin_del(bin_ptr->lchild, dkey);
	else if( dkey > bin_ptr->info )/*delete from right subtree*/
		bin_ptr->rchild = bin_del(bin_ptr->rchild, dkey);
	else
	{
		/*key to be deleted is found*/
		if( bin_ptr->lchild!=NULL  &&  bin_ptr->rchild!=NULL )  /*2 children*/
		{
			succ=bin_ptr->rchild;
			while(succ->lchild)
				succ=succ->lchild;
			bin_ptr->info=succ->info;
			bin_ptr->rchild = bin_del(bin_ptr->rchild, succ->info);
		}
		else
		{
			tmp = bin_ptr;
			if( bin_ptr->lchild != NULL ) /*only left child*/
				bin_ptr = bin_ptr->lchild;
			else if( bin_ptr->rchild != NULL) /*only right child*/
				bin_ptr = bin_ptr->rchild;
			else	/* no child */
				bin_ptr = NULL;
			free(tmp);
		}
	}
	return bin_ptr;
}/*End of del( )*/

struct bin_node *bin_Min(struct bin_node *bin_ptr)
{
	if(bin_ptr==NULL)
		return NULL;
	else if(bin_ptr->lchild==NULL)
        return bin_ptr;
	else
		return bin_Min(bin_ptr->lchild);
}/*End of min()*/

struct bin_node *bin_Max(struct bin_node *bin_ptr)
{
	if(bin_ptr==NULL)
		return NULL;
	else if(bin_ptr->rchild==NULL)
        return bin_ptr;
	else
		return bin_Max(bin_ptr->rchild);
}/*End of max()*/

void bin_preorder(struct bin_node *bin_ptr)
{
	if(bin_ptr == NULL )	/*Base Case*/
		return;
	printf("\n\t\t\t\t   %d  ",bin_ptr->info);
	bin_preorder(bin_ptr->lchild);
	bin_preorder(bin_ptr->rchild);
}/*End of preorder( )*/

void bin_inorder(struct bin_node *bin_ptr)
{
	if(bin_ptr == NULL )/*Base Case*/
		return;
	bin_inorder(bin_ptr->lchild);
	printf("\n\t\t\t\t   %d  ",bin_ptr->info);
	bin_inorder(bin_ptr->rchild);
}/*End of inorder( )*/

void bin_postorder(struct bin_node *bin_ptr)
{
	if(bin_ptr == NULL )/*Base Case*/
		return;
	bin_postorder(bin_ptr->lchild);
	bin_postorder(bin_ptr->rchild);
	printf("\n\t\t\t\t   %d  ",bin_ptr->info);

}/*End of postorder( )*/

int bin_height(struct bin_node *bin_ptr)
{
	int h_left, h_right;

	if (bin_ptr == NULL) /*Base Case*/
		return 0;

	h_left =  bin_height(bin_ptr->lchild);
	h_right = bin_height(bin_ptr->rchild);

	if (h_left > h_right)
		return 1 + h_left;
	else
		return 1 + h_right;
}/*End of height()*/
/*End of Binary Tree functions*/

/*AVL Tree functions*/
struct avl_node *avl_insert(struct avl_node *pptr, int ikey)
{
	static int taller;
	if(pptr==NULL)	/*Base case*/
	{
		pptr = (struct avl_node *) malloc(sizeof(struct avl_node));
		pptr->info = ikey;
		pptr->lchild = NULL;
		pptr->rchild = NULL;
		pptr->balance = 0;
		taller = TRUE;
	}
	else if(ikey < pptr->info)	/*Insertion in left subtree*/
	{
		pptr->lchild = avl_insert(pptr->lchild, ikey);
		if(taller==TRUE)
			pptr = insert_left_check( pptr, &taller );
	}
	else if(ikey > pptr->info)	/*Insertion in right subtree */
	{
		pptr->rchild = avl_insert(pptr->rchild, ikey);
		if(taller==TRUE)
			pptr = insert_right_check(pptr, &taller);
	}
	else  /*Base Case*/
	{
		printf("\n\t\t\t\t   Duplicate key\n\n");
		taller = FALSE;
	}
	return pptr;
}/*End of insert( )*/

struct avl_node *insert_left_check(struct avl_node *pptr, int *ptaller )
{
	switch(pptr->balance)
	{
	 case 0: /* Case L_A : was balanced */
		pptr->balance = 1;	/* now left heavy */
		break;
	 case -1: /* Case L_B: was right heavy */
		pptr->balance = 0;	/* now balanced */
		*ptaller = FALSE;
			break;
	 case 1: /* Case L_C: was left heavy */
		pptr = insert_LeftBalance(pptr);	/* Left Balancing */
		*ptaller = FALSE;
	}
	return pptr;
}/*End of insert_left_check( )*/

struct avl_node *insert_right_check(struct avl_node *pptr, int *ptaller )
{
	switch(pptr->balance)
	{
	 case 0: /* Case R_A : was balanced */
		pptr->balance = -1;	/* now right heavy */
		break;
	 case 1: /* Case R_B : was left heavy */
		pptr->balance = 0;	/* now balanced */
		*ptaller = FALSE;
		break;
	 case -1: /* Case R_C: Right heavy */
		pptr = insert_RightBalance(pptr);	/* Right Balancing */
		*ptaller = FALSE;
	}
	return pptr;
}/*End of insert_right_check( )*/

struct avl_node *insert_LeftBalance(struct avl_node *pptr)
{
	struct avl_node *aptr, *bptr;

	aptr = pptr->lchild;
	if(aptr->balance == 1)  /* Case L_C1 : Insertion in AL */
	{
		pptr->balance = 0;
		aptr->balance = 0;
		pptr = RotateRight(pptr);
	}
	else		/* Case L_C2 : Insertion in AR */
	{
		bptr = aptr->rchild;
		switch(bptr->balance)
		{
		case -1:			/* Case L_C2a : Insertion in BR */
			pptr->balance = 0;
			aptr->balance = 1;
			break;
		case 1:					/* Case L_C2b : Insertion in BL */
			pptr->balance = -1;
			aptr->balance = 0;
			break;
		case 0:					/* Case L_C2c : B is the newly inserted node */
			pptr->balance = 0;
			aptr->balance = 0;
		}
		bptr->balance = 0;
		pptr->lchild = RotateLeft(aptr);
		pptr = RotateRight(pptr);
	}
	return pptr;
}/*End of insert_LeftBalance( )*/

struct avl_node *insert_RightBalance(struct avl_node *pptr)
{
	struct avl_node *aptr, *bptr;

	aptr = pptr->rchild;
	if(aptr->balance == -1) /* Case R_C1 : Insertion in AR */
	{
		pptr->balance = 0;
		aptr->balance = 0;
		pptr = RotateLeft(pptr);
	}
	else		/* Case R_C2 : Insertion in AL */
	{
		bptr = aptr->lchild;
		switch(bptr->balance)
		{
		case -1:	/* Case R_C2a : Insertion in BR */
			pptr->balance = 1;
			aptr->balance = 0;
			break;
		case 1:		/* Case R_C2b : Insertion in BL */
			pptr->balance = 0;
			aptr->balance = -1;
			break;
		case 0:		/* Case R_C2c : B is the newly inserted node */
			pptr->balance = 0;
			aptr->balance = 0;
		}
		bptr->balance = 0;
		pptr->rchild = RotateRight(aptr);
		pptr = RotateLeft(pptr);
	}
	return pptr;
}/*End of insert_RightBalance( )*/

struct avl_node *RotateLeft(struct avl_node *pptr)
{
	struct avl_node *aptr;
	aptr = pptr->rchild;	/*A is right child of P*/
	pptr->rchild = aptr->lchild; /*Left child of A becomes right child of P */
	aptr->lchild = pptr;  /*P becomes left child of A*/
	return aptr;  /*A is the new root of the subtree initially rooted at P*/
}/*End of RotateLeft( )*/

struct avl_node *RotateRight(struct avl_node *pptr)
{
	struct avl_node *aptr;
	aptr = pptr->lchild;	/*A is left child of P */
	pptr->lchild = aptr->rchild; /*Right child of A becomes left child of P*/
	aptr->rchild = pptr;			/*P becomes right child of A*/
	return aptr; /*A is the new root of the subtree initially rooted at P*/
}/*End of RotateRight( )*/

struct avl_node *avl_del(struct avl_node *pptr, int dkey)
{
	struct avl_node *tmp, *succ;
	static int shorter;

	if( pptr == NULL) /*Base Case*/
	{
		printf("\a\n\t\t\t\t   Key not present\n\n");
		shorter = FALSE;
		system("pause");
		return(pptr);
	}
	if( dkey < pptr->info )
	{
		pptr->lchild = avl_del(pptr->lchild, dkey);
		if(shorter == TRUE)
			pptr = del_left_check(pptr, &shorter);
	}
	else if( dkey > pptr->info )
	{
		pptr->rchild = avl_del(pptr->rchild, dkey);
		if(shorter==TRUE)
			pptr = del_right_check(pptr, &shorter);
	}
	else /* dkey == pptr->info, Base Case*/
	{
		/*pptr has 2 children*/
		if( pptr->lchild!=NULL  &&  pptr->rchild!=NULL )
		{
			succ = pptr->rchild;
			while(succ->lchild)
				succ = succ->lchild;
			pptr->info = succ->info;
			pptr->rchild = avl_del(pptr->rchild, succ->info);
			if( shorter == TRUE )
				pptr = del_right_check(pptr, &shorter);
		}
		else
		{
			tmp = pptr;
			if( pptr->lchild != NULL ) /*only left child*/
				pptr = pptr->lchild;
			else if( pptr->rchild != NULL) /*only right child*/
				pptr = pptr->rchild;
			else	/* no children */
				pptr = NULL;
			free(tmp);
			shorter = TRUE;
		}
	}
	system("pause");
	return pptr;
}/*End of del( )*/

struct avl_node *del_left_check(struct avl_node *pptr, int *pshorter)
{
	switch(pptr->balance)
	{
		case 0: /* Case L_A : was balanced */
			pptr->balance = -1;	/* now right heavy */
			*pshorter = FALSE;
			break;
		case 1: /* Case L_B : was left heavy */
			pptr->balance = 0;	/* now balanced */
			break;
		case -1: /* Case L_C : was right heavy */
			pptr = del_RightBalance(pptr, pshorter); /*Right Balancing*/
	}
	return pptr;
}/*End of del_left_check( )*/

struct avl_node *del_right_check(struct avl_node *pptr, int *pshorter)
{
	switch(pptr->balance)
	{
		case 0:		/* Case R_A : was balanced */
			pptr->balance = 1;	/* now left heavy */
			*pshorter = FALSE;
			break;
		case -1: /* Case R_B : was right heavy */
			pptr->balance = 0;	/* now balanced */
			break;
		case 1: /* Case R_C : was left heavy */
			pptr = del_LeftBalance(pptr, pshorter );  /*Left Balancing*/
	}
	return pptr;
}/*End of del_right_check( )*/

struct avl_node *del_LeftBalance(struct avl_node *pptr,int *pshorter)
{
	struct avl_node *aptr, *bptr;
	aptr = pptr->lchild;
	if( aptr->balance == 0)  /* Case R_C1 */
	{
		pptr->balance = 1;
		aptr->balance = -1;
		*pshorter = FALSE;
		pptr = RotateRight(pptr);
	}
	else if(aptr->balance == 1 ) /* Case R_C2 */
	{
		pptr->balance = 0;
		aptr->balance = 0;
		pptr = RotateRight(pptr);
	}
	else						/* Case R_C3 */
	{
		bptr = aptr->rchild;
		switch(bptr->balance)
		{
			case 0:					/* Case R_C3a */
				pptr->balance = 0;
				aptr->balance = 0;
				break;
			case 1:					/* Case R_C3b */
				pptr->balance = -1;
				aptr->balance = 0;
				break;
			case -1:			/* Case R_C3c */
				pptr->balance = 0;
				aptr->balance = 1;
		}
		bptr->balance = 0;
		pptr->lchild = RotateLeft(aptr);
		pptr = RotateRight(pptr);
	}
	return pptr;
}/*End of del_LeftBalance( )*/

struct avl_node *del_RightBalance(struct avl_node *pptr,int *pshorter)
{
	struct avl_node *aptr, *bptr;

	aptr = pptr->rchild;
	if (aptr->balance == 0)	/* Case L_C1 */
	{
		pptr->balance = -1;
		aptr->balance = 1;
		*pshorter = FALSE;
		pptr = RotateLeft(pptr);
	}
	else if(aptr->balance == -1 )	/* Case L_C2 */
	{
		pptr->balance = 0;
		aptr->balance = 0;
		pptr = RotateLeft(pptr);
	}
	else							/* Case L_C3 */
	{
		bptr = aptr->lchild;
		switch(bptr->balance)
		{
			case 0:					/* Case L_C3a */
				pptr->balance = 0;
				aptr->balance = 0;
				break;
			case 1:					/* Case L_C3b */
				pptr->balance = 0;
				aptr->balance = -1;
				break;
			case -1:				/* Case L_C3c */
				pptr->balance = 1;
				aptr->balance = 0;
		}
		bptr->balance = 0;
		pptr->rchild = RotateRight(aptr);
		pptr = RotateLeft(pptr);
	}
	return pptr;
}/*End of del_RightBalance( )*/

void avl_preorder(struct avl_node *ptr)
{
	if(ptr!=NULL)
	{
	    printf("\n\t\t\t\t   %d  ",ptr->info);
		avl_preorder(ptr->lchild);
		avl_preorder(ptr->rchild);
	}
}/*End of preorder()*/

void avl_inorder(struct avl_node *ptr)
{
	if(ptr!=NULL)
	{
		avl_inorder(ptr->lchild);
		printf("\n\t\t\t\t   %d  ",ptr->info);
		avl_inorder(ptr->rchild);
	}
}/*End of inorder()*/

void avl_postorder(struct avl_node *ptr)
{
	if(ptr!=NULL)
	{
		avl_postorder(ptr->lchild);
		avl_postorder(ptr->rchild);
		printf("\n\t\t\t\t   %d  ",ptr->info);
	}
}/*End of postorder()*/
/*End of AVL Tree functions*/

/*Heap Tree functions*/
void heap_insert(int num, int arr[MAX], int *p_hsize )
{
	(*p_hsize)++;        /*Increase the heap size by 1*/
	arr[*p_hsize]=num;
	heap_restoreUp(arr, *p_hsize);

	printf("\n\t\t\t\t   Inserted Element is : %d\n\n",num);
    system("pause");
}/*End of insert( )*/

void heap_restoreUp(int arr[MAX], int i)
{
	int k = arr[i];
	int par = i/2;

	/* while( par>=1 && arr[par] < num  )*/  /*if MAX_VAL not in arr[0]*/
	while( arr[par] < k  )
	{
		arr[i]=arr[par];
		i = par;
		par = i/2;
	}
	arr[i] = k;
}/*End of restoreUp()*/

int heap_del_root(int arr[MAX], int *p_hsize)
{
	int max = arr[1];          /* Save the element present at the root*/
	arr[1] = arr[*p_hsize];   /* Place the last element in the root */
	(*p_hsize)--;           /* Decrease the heap size by 1 */
	heap_restoreDown(arr,1,*p_hsize);
	return max;
}/*End of del_root()*/

void heap_restoreDown(int arr[MAX], int i, int hsize )
{
	int lchild=2*i, rchild=lchild+1;

	int num=arr[i];

	while( rchild <= hsize )
	{
		if( num>=arr[lchild] && num>=arr[rchild] )
		{
			arr[i] = num;
			return;
		}
		else if(arr[lchild] > arr[rchild])
		{
			arr[i] = arr[lchild];
			i = lchild;
		}
		else
		{
			arr[i] = arr[rchild];
			i = rchild;
		}
		lchild = 2 * i;
		rchild = lchild + 1;
	}
	/*If number of nodes is even*/
	if(lchild == hsize && num < arr[lchild] )
	{
		arr[i]=arr[lchild];
		i = lchild;
	}
	arr[i]=num;
}/*End of restoreDown()*/

                                                    /*Top down approach*/
void heap_buildHeap_top_down(int arr[MAX], int size )
{
	int i;
	for(i=2; i<=size; i++)
		heap_restoreUp(arr,i);
}/*End of buildHeap_top_down()*/

                                                    /*Bottom up approach*/
 void heap_buildHeap_bottom_up(int arr[MAX], int size )
{
	int i;
	for(i=size/2; i>=1; i--)
		heap_restoreDown(arr,i,size);
}/*End of buildHeap_bottom_up()*/

void heap_tree_display(int arr[MAX],int hsize)
{
	if(hsize==0)
	{
		printf("\a\n\t\t\t\t   Heap is empty.\n\n");
		system("pause");
		return;
	}
	printf("\n\t\t\t\t   Heap tree is : ");
	for(i=1;i<=hsize;i++)
		printf("%d ",arr[i]);
	printf("\n\n");

	printf("\n\t\t\t\t   Number of elements in Heap : %d\n\n",hsize);
	system("pause");
}/*End of display( )*/
/*End of Heap Tree functions*/
/*End of Tree functions*/
