#include"prototypes.h"

char password[10]={"project"};

void Password(void) //for password option
{

   system("cls");
   system("COLOR F2");
   char d[30]=" Data Structure Project ";
   char ch,pass[10];
   int i=0,j;
    gotoxy(15,4);
    for(j=0;j<27;j++)
    {
    delay(20);
    printf("*");
    }
    for(j=0;j<24;j++)
   {
   delay(25);
   printf("%c",d[j]);
   }
   for(j=0;j<27;j++)
   {
   delay(20);
   printf("*");
   }
   printf("\n\t\t\t\t\tEnter Password for Main menu");
   gotoxy(8,25);
   printf("\xfe Note : Password is case Sensitive.");
   gotoxy(8,26);
   printf("\xfe Note : Backspace not allowed while typing Password.");
   gotoxy(43,7);
   printf("Enter Password : ");
   while(ch!=13)
   {
	ch=getch();

	if(ch!=13 && ch!=8){
	putch('*');
	pass[i] = ch;
	i++;
	}
   }
   pass[i] = '\0';
   if(strcmp(pass,password)==0)
   {
    system("COLOR F5");
	gotoxy(45,9);
	printf("Password match");
	delay(1000);
	system("COLOR FD");
	gotoxy(44,11);
	printf("Access Granted !!");
	delay(1000);
	system("COLOR F0");
	gotoxy(38,13);
	printf("Press any key to countinue.....");
	getchar();
	main_menu();
   }
   else
   {
    system("COLOR FC");
	 gotoxy(40,10);
	 printf("\aWarning!! Incorrect Password");
	 getche();
	 Password();
   }
}

void front_page()
{
    int j;
    system("cls");
    system("COLOR FC");
    printf("\n\n\n\t\t\t\t\tDR. B.R. AMBEDKAR NATIONAL\n\t\t\t\t\t INSTITUTE OF TECHNOLOGY\n\t\t\t\t\tJALANDHAR-144011, PUNJAB (INDIA)\n");
    printf("\n\t\t\t\tDepartment of Computer Science and Engineering\n\t\t");
    for(j=0;j<80;j++)
    {
    delay(15);      printf("\xfe");
    }
    printf("\n\t\t\t\t\tDATA STRUCTURE AND ALGORITHM PROJECT\n\t\t\t\t\t\t(CSX-209)\n\t\t");
    for(j=0;j<80;j++)
    {
    delay(15);      printf("\xfe");
    }
    printf("\n\t\t\t\t\t     JULY-DEC, 2016\n");
    printf("\n\n\n\t\tSubmitted To:\t\t\t\t\t\t\t   Submitted By:\n");
    gotoxy(16,17);
    for(j=0;j<13;j++)
        {
        delay(5);      printf("\xcd");
        }
    gotoxy(83,17);
    for(j=0;j<13;j++)
        {
        delay(5);      printf("\xcd");
        }
    printf("\n\t\tMr. Ashish Kumar\t\t\t\tSagar Negi & Rajesh Kumar Khatik");
    printf("\n\t\tAssistant Professor\t\t\t\t\t     15103053 & 15103062");
    printf("\n\t\tDept. Of CSE\t\t\t\t\t\t\t\t     CSE\n\n");
    system("pause");
    Password();
      getchar();

}
