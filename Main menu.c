#include"prototypes.h"

void main_menu()
{
    system("cls");
    system("COLOR F0");
    gotoxy(35,3);
    printf("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\n");
    gotoxy(35,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Linked List");
	gotoxy(35,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Stacks");
	gotoxy(35,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Queues");
	gotoxy(35,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Searching");
	gotoxy(35,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Sorting");
	gotoxy(35,15);
	printf("\xDB\xDB\xDB\xDB\xB2 6. Trees");
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
            linked_list();
            break;
	case '2':
            stacks();
            break;
    case '3':
            queues();
            break;
	case '4':
            searching();
            break;
    case '5':
            sorting();
            break;
    case '6':
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
            main_menu();
		}
    }
}

