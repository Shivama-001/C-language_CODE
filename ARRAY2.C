#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

		 void main()
		{
	  /*  int a[5],b[4],i,num,pos,found=0;
	    clrscr();

	    printf("enter element in an array::\n");
	    for(i=0;i<5;i++)
	    scanf("%d",&a[i]);

	    printf("before array number instered::\n");
	    for(i=0;i<5;i++)
	    printf("%d\t",a[i]);

	    printf("\n enter number to deleted::\n");
	    scanf("%d",&num);

	    for(i=0;i<5;i++)
	    {
	    if(a[i]==num)
	    {
	    pos=i;
	    found=1;
	    }
	   }
	   if(found==1)
	   {
	   for(i=0;i<4;i++)
	   {

	    if(i<pos)
	    b[i]=a[i];

	    if(i>=pos)
	    b[i]=a[i+1];
	   }
	  }
	  else
	    printf("\n %d number is not found in an array::",num);
	 */
       /*	   int a[5],i,b[4];
	   int max1,max2,pos;
	   clrscr();

	   printf("enter numbers::");
	   for(i=0;i<5;i++)
	   scanf("%d",&a[i]);

	   max1=a[0];
	   pos=0;
	   for(i=0;i<5;i++)
	   {
	   if(a[i]>max1)
	   {
	   max1=a[i];
	   pos=i;
	   }
	   }
	   for(i=0;i<4;i++)
	   {
	   if(i>pos)
	   b[i]=a[i];

	   if(i>=pos)
	   b[i]=a[i+1];

	   }
	  max2=b[0];
	  printf("\n");

	  for(i=0;i<4;i++)
	  {
	  if(b[i]>max2)
	  {
	  max2=b[i];
	  }
	  }
	  printf("\nthe first is %d",max1);
	  printf("\n second is %d",max2);

	 */
	   int a[5],b[5],i,j,n,num,sum,found=0;
	   clrscr();

	   printf("ente first array element\n");
	   for(i=0;i<5;i++)
	   scanf("%d",&a[i]);

	  // printf("ente second array element\n");
	  // for(i=0;i<5;i++)
	  // scanf("%d",&b[i]);

	  printf("enter add number \n");
	  scanf("%d",&sum);

	  printf("\n array elements which when added given %d\n",sum);

	  for(i=0;i<5;i++)
	  {
	   for(j=i+1;j<5;j++)
	   {
	    if((a[i]+a[j]==sum))
	     {
	      found=1;
	      printf("(%d,%d) found at [%d,%d] \n",a[i],a[j],i+1,j+1);
	     }
	   }
	 }
	  if(found==0)
	  printf("npt found \n");


	getch();
	}
