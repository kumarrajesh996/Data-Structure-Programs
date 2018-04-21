#include"prototypes.h"

void selection_sort()
{
    system("COLOR F2");

	int n,temp,min;
	printf("\n\t\t\t\t   Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("\n\t\t\t\t   Enter element %d : ",i+1);
		scanf("%d", &arr[i]);
	}

	for(i=0; i<n-1; i++)				/*Selection sort*/
	{				/*Find the index of smallest element*/
		min=i;
		for(j=i+1; j<n ; j++)
		{
			if(arr[min] > arr[j])
				min=j ;
		}
		if(i!=min)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp ;
		}
	}
	printf("\n\t\t\t\t   Sorted list is : ");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
	system("pause");
} /*End of selection_sort()*/


void bubble_sort()
{
    system("COLOR F2");

	int temp,n,xchanges;
printf("\n\t\t\t\t   Enter the number of elements : ");
	scanf("%d",&n);
for(i=0; i<n; i++)
	{
		printf("\n\t\t\t\t   Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
for(i=0; i<n-1; i++)				/*Bubble sort*/
	{
		xchanges=0;
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				xchanges++;
			}
		}
		if(xchanges==0) 			/*If list is sorted*/
			break;
	}
	printf("\n\t\t\t\t   Sorted list is : ");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\n\n");
	system("pause");
} /* End of bubble_sort() */

void insertion_sort()
{
    system("COLOR F2");

	int k,n;

	printf("\n\t\t\t\t   Enter the number of elements : ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\t\t\t\t   Enter element %d : ",i+1);
		scanf("%d", &arr[i]);
	}

	for(i=1; i<n; i++)				/*Insertion sort*/
	{
		k=arr[i];		 /*k is to be inserted at proper place*/

		for(j=i-1; j>=0 && k<arr[j]; j--)
			arr[j+1]=arr[j];
		arr[j+1]=k;
	}

	printf("\n\t\t\t\t   Sorted list is : ");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
	system("pause");
}/*End of insertion_sort()*/


void shell_sort()
{
    system("COLOR F2");

	int k,n,incr;

	printf("\n\t\t\t\t   Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\t\t\t\t   Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\n\t\t\t\t   Enter maximum increment (odd value) : ");
	scanf("%d",&incr);

                                        /*Shell sort*/
	while(incr>=1)
	{
		for(i=incr; i<n; i++)
		{
			k=arr[i];
			for(j=i-incr; j>=0 && k<arr[j]; j=j-incr)
				arr[j+incr]=arr[j];
			arr[j+incr]=k;
		}
		incr=incr-2; /*Decrease the increment*/
	}/*End of while*/

	printf("\n\t\t\t\t   Sorted list is : ");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
	system("pause");
}/*End of shell_sort()*/

void quick_sort()
{
    system("COLOR F2");

	int arr[MAX],n,i;
	printf("\n\t\t\t\t   Enter the number of elements : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n\t\t\t\t   Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	quick(arr,0,n-1);

	printf("\n\t\t\t\t   Sorted list is : ");

	for( i=0; i<n; i++ )
		printf("%d ",arr[i]);
	printf("\n\n");
    system("pause");
} /*End of quick_sort() */




void merge_sorting( )
{
    system("COLOR F2");

	int arr[MAX],i,n;

	printf("\n\t\t\t\t   Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\t\t\t\t   Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\n\t\t\t\t   Entered list is : ");
		for( i = 0 ; i<n ; i++)
		printf("%d ", arr[i]);
    printf("\n");

	merge_sort(arr, n);

	printf("\n\t\t\t\t   Sorted list is : ");
	for( i = 0 ; i<n ; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
	system("pause");
} /*End of merge_sorting( )*/



void heap_sorting()
{
    system("COLOR F2");

	int arr[MAX],i,n;

	printf("\n\t\t\t\t   Enter number of elements : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\n\t\t\t\t   Enter element %d : ",i);
		scanf("%d",&arr[i]);
	}

	printf("\n\t\t\t\t   Entered list is : ");
	heap_display(arr,n);

	heap_sort(arr,n);

	printf("\n\t\t\t\t   Sorted list is : ");
	heap_display(arr,n);

}/*End of heap_sorting()*/


void sorting()
{
    while(1)
    {
    system("cls");
    system("COLOR F1");
    gotoxy(59,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORTING MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Selection Sort");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Bubble Sort");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Insertion Sort");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Shell Sort");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Merge Sort");
	gotoxy(35,15);
	printf("\xDB\xDB\xDB\xDB\xB2 6. Quick Sort");
	gotoxy(35,17);
	printf("\xDB\xDB\xDB\xDB\xB2 7. Heap Sort");
	gotoxy(35,19);
	printf("\xDB\xDB\xDB\xDB\xB2 *. Return to Main Menu");
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
            selection_sort();
            break;
	case '2':
            bubble_sort();
            break;
    case '3':
            insertion_sort();
            break;
	case '4':
            shell_sort();
            break;
    case '5':
            merge_sorting();
            break;
    case '6':
            quick_sort();
            break;
    case '7':
            heap_sorting();
            break;
    case '*':
            main_menu();
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
            sorting();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of sorting()*/
