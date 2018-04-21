#include"prototypes.h"

void binary_tree()
{
    struct bin_node *root=NULL,*bin_ptr;
	int k;
    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BINARY TREE MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Insert");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Search");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Delete");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Preorder Traversal");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Inorder Traversal");
	gotoxy(35,15);
	printf("\xDB\xDB\xDB\xDB\xB2 6. Postorder Traversal");
	gotoxy(35,17);
	printf("\xDB\xDB\xDB\xDB\xB2 7. Height of Binary tree");
	gotoxy(35,19);
	printf("\xDB\xDB\xDB\xDB\xB2 8. Find minimum Key");
	gotoxy(35,21);
	printf("\xDB\xDB\xDB\xDB\xB2 9. Find maximum Key");
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
            printf("\n\t\t\t\t   Enter the key to be inserted : ");
			scanf("%d",&k);
			root = bin_insert(root, k);
			printf("\n\n");
			system("pause");
			break;
	case '2':
            printf("\n\t\t\t\t   Enter the key to be searched : ");
			scanf("%d",&k);
			bin_ptr = bin_search(root, k);
            if(bin_ptr!=NULL)
                {
                    printf("\n\t\t\t\t   Key %d found\n\n",k);
                    system("pause");
                }
            break;
    case '3':
            printf("\n\t\t\t\t   Enter the key to be deleted : ");
			scanf("%d",&k);
			root = bin_del(root,k);
			printf("\n\n");
			system("pause");
            break;
	case '4':
            printf("\n\t\t\t\t   PreOrder Traversal :");
            bin_preorder(root);
            printf("\n\n");
            system("pause");
            break;
    case '5':
            printf("\n\t\t\t\t   InOrder Traversal :");
            bin_inorder(root);
            printf("\n\n");
            system("pause");
            break;
    case '6':
            printf("\n\t\t\t\t   PostOrder Traversal :");
            bin_postorder(root);
            printf("\n\n");
            system("pause");
            break;
    case '7':
            printf("\n\t\t\t\t   Height of Binary tree is %d\n\n", bin_height(root));
            system("pause");
            break;
    case '8':
            bin_ptr = bin_Min(root);
			if(bin_ptr!=NULL)
				printf("\n\n\t\t\t\t   Minimum key is %d\n\n", bin_ptr->info );

            system("pause");
            break;
    case '9':
            bin_ptr = bin_Max(root);
			if(bin_ptr!=NULL)
				printf("\n\n\t\t\t\t   Maximum key is %d\n", bin_ptr->info );

            system("pause");
            break;
    case '*':
            trees();
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
            binary_tree();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of binary_tree()*/


void avl_tree()
{
	int key;
	struct avl_node *root = NULL;

    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AVL TREE MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Insert");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Delete");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Preorder Traversal");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Inorder Traversal");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Postorder Traversal");
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
            printf("\n\t\t\t\t   Enter the key to be inserted : ");
			scanf("%d",&key);
			root = avl_insert(root,key);
			printf("\n\n");
            system("pause");
			break;
	case '2':
            printf("\n\t\t\t\t   Enter the key to be deleted : ");
			scanf("%d",&key);
			root = avl_del(root,key);
			printf("\n\n");
            system("pause");
            break;
    case '3':
            printf("\n\t\t\t\t   PreOrder Traversal :");
            avl_preorder(root);
            printf("\n\n");
            system("pause");
            break;
	case '4':
            printf("\n\t\t\t\t   InOrder Traversal :");
            avl_inorder(root);
            printf("\n\n");
            system("pause");
            break;
    case '5':
            printf("\n\t\t\t\t   PostOrder Traversal :");
            avl_postorder(root);
            printf("\n\n");
            system("pause");
            break;
    case '*':
            trees();
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
            binary_tree();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of avl_tree()*/


void heap_tree()
{
                        /* arr[MAX] array is used to represent heap*/
	int hsize=0;        /*Number of nodes in the heap*/
	int num;

	arr[0]= MAX_VAL;

    system("cls");
    system("COLOR F2");
    while(1)
    {
    system("cls");
    gotoxy(60,0);
    printf("\xfe Note : MAX_SIZE 50");
    gotoxy(60,1);
    printf("\xfe Note : MAX_VAL 9999");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 HEAP TREE MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Insert");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Delete root");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Display");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Build Heap via Top-Down approach");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Build Heap via Bottom-Up approach");
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
            printf("\n\t\t\t\t   Enter the number to be inserted : ");
			scanf("%d",&num);
			heap_insert(num,arr,&hsize);
			break;
	case '2':
            if(hsize==0)
				printf("\a\n\t\t\t\t   Heap is empty.\n");
			else
			{
				num = heap_del_root(arr,&hsize);
				printf("\n\t\t\t\t   Maximum element is %d", num);
			}
			printf("\n\n");
			system("pause");
            break;
    case '3':
            heap_tree_display(arr,hsize);
            break;
	case '4':
            printf("\n\t\t\t\t   Enter size of the array : ");
			scanf("%d",&hsize);
			printf("\n\t\t\t\t   Enter array element :\n");
			for(i=1;i<=hsize;i++)
                {
                    printf("\t\t\t\t   ");
                    scanf("%d",&arr[i]);
                }
			heap_buildHeap_top_down(arr,hsize);
            break;
    case '5':
            printf("\n\t\t\t\t   Enter size of the array : ");
			scanf("%d",&hsize);
			printf("\n\t\t\t\t   Enter array element :\n");
			for(i=1;i<=hsize;i++)
				{
                    printf("\t\t\t\t   ");
                    scanf("%d",&arr[i]);
                }
			heap_buildHeap_bottom_up(arr,hsize);
            break;
    case '*':
            trees();
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
            heap_tree();
		}
    }/*End of switch()*/
    }/*End of while()*/
}/*End of heap_tree()*/


void trees()
{
    while(1)
    {
    system("cls");
    system("COLOR F1");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TREES MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Binary Tree");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. AVL Tree");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Heap Tree");
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
            binary_tree();
            break;
    case '2':
            avl_tree();
            break;
    case '3':
            heap_tree();
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
            trees();
        }
    }/*End of switch()*/
    }/*End of while()*/
}/*End of trees()*/
