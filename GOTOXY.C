#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<process.h>
//#include<stdlib.h>
void item1();
void listbar();
void rate();
void quan();
void amount();
void breakfast();
void lunch();
void dinner();
void line();

     void line(){
     int i;
     for(i=2;i<24;i++)
     {
     gotoxy(55,i);
     printf("|");
     }
     }


   void item1()
   {
   textcolor(RED);
   gotoxy(2,2);
   cprintf("Item");
   }
   void rate()
   {
   textcolor(GREEN);
   gotoxy(20,2);
   cprintf("Rate");
   }
   void quan()
   {
   textcolor(YELLOW);
   gotoxy(30,2);
   cprintf("Quantity");
   }
   void amount()
   {
   textcolor(BLACK);
   gotoxy(45,2);
   cprintf("Amount");
   }


    void menu()
    {
    textcolor(RED);
    gotoxy(60,2);
    cprintf("***FOOD_MENU***");
    gotoxy(60,3);
    printf("1.COKE -> 100***");
    gotoxy(60,4);
    printf("2.TEA  -> 200***");
    gotoxy(60,5);
    printf("3.SANDWICH-> 250*");
    gotoxy(60,6);
    printf("4.BURGER ->  150*");
    gotoxy(60,7);
    printf("5.MOMMOS ->  200*");
    gotoxy(60,8);
    printf("6.HOT DOG -> 220*");
    gotoxy(60,9);
    printf("7.SALAD -> 210*");
    gotoxy(60,10);
    printf("8.PIZZA ->  50*");
    gotoxy(60,11);
    printf("9.ICE CREAM->20*");
    gotoxy(60,12);
    printf("10.MOMMOS  -> 50*");
    line();



    }

	 void listbar()
	 {

	 int n;
	      clrscr();
	      gotoxy(2,2);
	      printf("*********************************SHIVAM FAST FOOD******************************");
	      gotoxy(35,5);
	      printf("BREAKFAST...1");
	      gotoxy(35,6);
	      printf("LUNCH.......2");
	      gotoxy(35,7);
	      printf("DINNER......3");
	      gotoxy(35,8);
	      printf("EXIT........4");

	      scanf("%d",&n);

	      switch(n)
	      {
	       case 1 : breakfast(); break;
	       case 2 : lunch(); break;
	       case 3 : dinner(); break;
	       case 4 : exit(0);
	       default :
		  printf("sorry! wrong choice");
	      }


	 }


    void dinner()
    {
     char ch,item[90];
       int r,q,a,ta=0,row=3,i;
       textcolor(BLUE);
       textbackground(WHITE);
       clrscr();
       gotoxy(30,1);
       cprintf("***RESTAURANT MANEGEMENT***");
       item1();
       rate();
       quan();
       amount();
       menu();
       do{
	 row=row+1;

	 //tem();
	 //label:

	 gotoxy(2,row);

	 fflush(stdin);
	 scanf("%s",item);
	 if(strcmpi(item,"pasta")==0 || strcmpi(item,"1")==0)
	 {
	 gotoxy(2,row);
	 printf("pasta");
	 gotoxy(20,row);
	 r=100;
	 printf("%d",r);
	 }
	 else if(strcmpi(item,"soup")==0 || strcmpi(item,"2")==0)
	 {
	 gotoxy(2,row);
	 printf("soup");
	 gotoxy(20,row);
	 r=200;
	 printf("%d",r);
	 }
	 else if(strcmpi(item,"salad")==0 || strcmpi(item,"3")==0)
	 {
	 gotoxy(2,row);
	 printf("salad");
	 gotoxy(20,row);
	 r=250;
	 printf("%d",r);
	 }
	  else if(strcmpi(item,"pad thai")==0 || strcmpi(item,"4")==0)
	 {
	 gotoxy(2,row);
	 printf("pad thai");
	 gotoxy(20,row);
	 r=200;
	 printf("%d",r);
	 }
	  else if(strcmpi(item,"mommos")==0 || strcmpi(item,"5")==0)
	 {
	 gotoxy(2,row);
	 printf("mommos");
	 gotoxy(20,row);
	 r=200;
	 printf("%d",r);
	 }
	  else if(strcmpi(item,"quiche")==0 || strcmpi(item,"6")==0)
	 {
	 gotoxy(2,row);
	 printf("quiche");
	 gotoxy(20,row);
	 r=200;
	 printf("%d",r);
	 }
	  else if(strcmpi(item,"taco")==0 || strcmpi(item,"7")==0)
	 {
	 gotoxy(2,row);
	 printf("taco");
	 gotoxy(20,row);
	 r=200;
	 printf("%d",r);

	 }
	 else
	 {
	 gotoxy(20,row);
	 r=0;
	 }
       //	 gotoxy(20,row);
       //	 printf("%d",r);
       //	 fflush(stdin);
	 //scanf("%d",&r);
	 gotoxy(30,row);
	 fflush(stdin);
	 scanf("%d",&q);
	 a=r*q;
	 ta=ta+a;
	 gotoxy(45,row);
	 printf("%d",a);
	 gotoxy(30,22);
	 printf("add more items [y/n]");
	 fflush(stdin);
	 scanf("%c",&ch);
	  }
	  while(ch == 'y' || ch=='Y');
	  gotoxy(40,row+2);
	  printf("total bill=%d",ta);
	  getche();
	  listbar();
	  getch();
    }

    void lunch()
    {
     char ch,item[90];
       int r,q,a,ta=0,row=3,i;
       textcolor(BLUE);
       textbackground(WHITE);
       clrscr();
       gotoxy(30,1);
       cprintf("***RESTAURANT MANEGEMENT***");
       item1();
       rate();
       quan();
       amount();
       menu();
       do{
	 row=row+1;

	 //tem();
	 //label:

	 gotoxy(2,row);

	 fflush(stdin);
	 scanf("%s",item);
	 if(strcmpi(item,"coke")==0)
	 {
	 r=100;
	 }
	 else if(strcmpi(item,"tea")==0)
	 {
	 r=200;
	 }
	 else if(strcmpi(item,"ice tea")==0)
	 {
	 r=250;
	 }
	  else if(strcmpi(item,"burger")==0)
	 {
	 r=200;
	 }
	  else if(strcmpi(item,"mommos")==0)
	 {
	 r=200;
	 }
	  else if(strcmpi(item,"hot dog")==0)
	 {
	 r=200;
	 }
	  else if(strcmpi(item,"salad")==0)
	 {
	 r=200;
	 }
	 else
	 {
	 r=0;
	 }
	 gotoxy(20,row);
	 printf("%d",r);
	 gotoxy(30,row);
	 fflush(stdin);
	 scanf("%d",&q);
	 a=r*q;
	 ta=ta+a;
	 gotoxy(45,row);
	 printf("%d",a);
	 gotoxy(30,22);
	 printf("add more items [y/n]");
	 fflush(stdin);
	 scanf("%c",&ch);
	  }
	  while(ch == 'y' || ch=='Y');
	  gotoxy(40,row+2);
	  printf("total bill=%d",ta);
	  listbar();
	  getch();

    }
     void breakfast()
    {
       char ch,item[90];

     //  char ch;
       int r,q,a,ta=0,row=3,i;
       textcolor(BLUE);
       textbackground(WHITE);
       clrscr();
       gotoxy(30,1);
       cprintf("***RESTAURANT MANEGEMENT***");
       item1();
       rate();
       quan();
       amount();
       menu();
       do{
	 row=row+1;

	 //tem();
	 //label:

	 gotoxy(2,row);

	 fflush(stdin);
	// it=getch();
	scanf("%c",item);
	 if(strcmpi(item,"1")==0)
	 {
	 r=100;
	 }
	 else if(strcmpi(item,"2")==0)
	 {
	 r=200;
	 }
	 else if(strcmpi(item,"3")==0)
	 {
	 r=250;
	 }
	  else if(strcmpi(item,"burger")==0)
	 {
	 r=200;
	 }
	  else if(strcmpi(item,"mommos")==0)
	 {
	 r=200;
	 }
	  else if(strcmpi(item,"hot dog")==0)
	 {
	 r=200;
	 }
	  else if(strcmpi(item,"salad")==0)
	 {
	 r=200;
	 }

	 else
	 {
	 r=0;
	 }
/*	 switch(it)
	 {
	 case 1:fflush(stdin); gotoxy(2,3); printf("COKE"); r=100; break;
	 case 2:fflush(stdin); gotoxy(2,4); printf("TEA");  r=200; break;
	 case 3:fflush(stdin); gotoxy(2,5); printf("SANDWICH"); r=250; break;
	 case 4:fflush(stdin); gotoxy(2,6);  printf("BURGER");   r=200; break;
	 case 5:fflush(stdin); gotoxy(2,7);  printf("MOMMOS");   r=200; break;
      //	 case 6: r=200; break;
      //	 case 7: r=200; break;
      //	 case 8: r=200; break;
     //	 case 9: r=200; break;
      //	 case 10:r=200; break;

	 }

    */



	 gotoxy(20,row);
	 printf("%d",r);
	// fflush(stdin);
	// scanf("%d",&r);
	 gotoxy(30,row);
	 fflush(stdin);
	 scanf("%d",&q);
	 a=r*q;
	 ta=ta+a;
	 gotoxy(45,row);
	 printf("%d",a);
	 gotoxy(30,22);
	 printf("add more items [y/n]");
	 fflush(stdin);
	 scanf("%c",&ch);
	  }
	  while(ch == 'y' || ch=='Y');
	  gotoxy(40,row+2);
	  printf("total bill=%d",ta);
	  getche();
	  listbar();
	  getch();

       }


    void main(){
	      listbar();
	      }
