#include"prototypes.h"


void linear_searching()
{
    system("COLOR F2");

	int  n, item, index;
	printf("\n\t\t\t\t   Enter the number of elements : ");
	scanf("%d",&n);
	if(n==0)
    {
        system("COLOR FC");
        printf("\a\n\t\t\t\t   Unable to Perform Searching Operation.\n\n");
    }
    else
    {
	printf("\n\t\t\t\t   Enter the element :\n");
	for(i=0; i<n; i++)
        {
        printf("\t\t\t\t   ");
		scanf("%d", &arr[i] );
        }

	printf("\n\t\t\t\t   Enter the item to be searched : ");
	scanf("%d", &item);

	index = LinearSearch(arr, n, item);
	if(index == -1)
		printf("\a\n\t\t\t\t   %d not found in array", item);
	else
		printf("\n\t\t\t\t   %d found at position %d", item, index+1);
    }
    printf("\n\n");
    system("pause");
} /* End of linear_search() */


void binary_searching()
{
    system("COLOR F2");

	int  size, item, index;

	printf("\n\t\t\t\t   Enter the number of elements : ");
	scanf("%d",&size);
    if(size==0)
    {
        system("COLOR FC");
        printf("\a\n\t\t\t\t   Unable to Perform Searching Operation.\n\n");
    }
    else
    {
	printf("\n\t\t\t\t   Enter the element(in sorted order) :\n");
	for(i=0; i<size; i++)
        {
        printf("\t\t\t\t   ");
		scanf("%d", &arr[i] );
        }

	printf("\n\t\t\t\t   Enter the item to be searched : ");
	scanf("%d", &item);

	index = Binary_Search(arr, size, item);
	if(index==-1)
		printf("\a\n\t\t\t\t   %d not found in array", item);
	else
		printf("\n\t\t\t\t   %d found at position %d", item, index+1);
    }

	printf("\n\n");
    system("pause");
} /* End of binary_search() */


void fibonacci_searching()
{
    system("COLOR F2");

    int n,i,key,loc,p,q,r,m,fk ;
    printf("\n\t\t\t\t   Enter number elements to be entered : ");
    scanf("%d",&n);
    if(n==0)
    {
        system("COLOR FC");
        printf("\a\n\t\t\t\t   Unable to Perform Searching Operation.\n\n");
    }
    else
    {
    printf("\n\t\t\t\t   Enter elements :\n");
    for(i=1;i<=n;i++)
        {
            printf("\t\t\t\t   ");
            scanf("%d",&arr[i]);
        }
    printf("\n\t\t\t\t   Enter the key element : ");
    scanf("%d",&key);
    fk=fib(n+1);
    p=fib(fk);
    q=fib(p);
    r=fib(q) ;
    m=(n+1)-(p+q);
    if(key>arr[p])
            p=p+m;
    loc=rfibsearch(arr,n,p,q,r,key);
    if(loc==0)
            printf("\a\n\t\t\t\t   Element(Key) %d is not found.",key);			//key = Search element
    else
            printf("\n\t\t\t\t   %d is found at location %d",key,loc);
    }

    printf("\n\n");
    system("pause");
} /* End of fibonacci_searching() */


void searching()
{
    while(1)
    {
    system("cls");
    system("COLOR F1");
    gotoxy(61,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SEARCHING MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Linear Searching");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Binary Searching");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Fibonacci Searching");
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
	//scanf("%d",&ch);
	ch=getche();
    switch(ch)
    {
    case '1':
            linear_searching();
            break;
    case '2':
            binary_searching();
            break;
    case '3':
            fibonacci_searching();
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
            searching();
        }
    }/*End of switch()*/
    }/*End of while()*/
}/*End of searching()*/
