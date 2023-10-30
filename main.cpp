#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>   /* for color*/
#include<conio.h>   /* for kbhit ve getch function*/
#include<windows.h>
void ds(void);      /* Dina function */
void ds1(void);     /* Ziplama fonksiyonu */
void ds2(void);     /* Speed  function */
void ds4(int c);    /* Object function */


main()
{   

    int i=0;     /* Variable for score */
    char ch;     /* Variable to get key from the keyboard */
 
	while(1){   
	
	 while(!kbhit())   /* If a key is not pressed on the keyboard, do this loop*/
	 {  
	 printf("\nPress X to Exit, Press Space to Jump"); 
	 printf("\nSCORE=%d",i++);
	 ds();  
	 }
	 ch=getch();  /* It keeps the first letter entered on the screen and exits the while loop if a key is pressed. */
	if(ch==' ')
       ds1();
    else if(ch=='x') /* If press X closes the program */
     return 0;
     else if(ch=='1') /* To switch level 1, press 1. */
     {   
     	 while(!kbhit())
	 {  
	 printf("\nPress X to Exit, Press Space to Jump");
	 printf("\nSCORE=%d",i++);
	 printf("\nLevel 1");
	 system("color 84"); /* for change color */
	 ds();
	 }
	 ch=getch();
	if(ch==' ')
       ds1();
    else if(ch=='x') 
     return 0;
	 }
	 else if(ch=='2') /* To switch level 2, press 2. */
     {   
     	 while(!kbhit())
	 {  
	 printf("\nPress X to Exit, Press Space to Jump");
	 printf("\nSCORE=%d",i++);
	 printf("\nLevel 2");
	 system("color 85");
	 ds2(); /* ds2 function is used for speed */ 
	 }
	 ch=getch();
	if(ch==' ')
       ds1();
    else if(ch=='x')
     return 0;
	 }
	 else if(ch=='3') /* To switch level 3, press 3. */
     {   
     	 while(!kbhit())
	 {  printf("\nPress X to Exit, Press Space to Jump");
	    printf("\nLevel 3");
	    system("color 87");
	 
	 ds4(25);  /* DS4 function is used for object and dinosaur */
	 printf("GAMER OVER"); /*If the DS4 function is completed and the space key is not pressed, GAME OVER */
	 printf("\nSCORE=%d",i++); /* The user's earned score is printed on the screen*/
	 
       } 
	  ch=getch(); /* If the space key is pressed, the while loop will be exited. */
	if(ch==' ')
       ds1();
    else if(ch=='x')
     return 0;    
    
	 }
	 
	 }	 
	 }
   
	    
	    



void ds(void)
{
    int a=1; /* Variable for foot movements */
   
    for(int i=0;i<2;i++)  /*loop for back and forth movement */
    {
	for(int x=0;x<15;x++)
	printf("\n");
	for(int k=0;k<=i;k++)
    printf("\t");
    printf("         млпллллм");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("         лллллллл");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("         лллллппп");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf(" л      мллллппп ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf(" ллм  мллллллммм ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf(" пллллллллллл  п ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("   плллллллп    ");
    printf("\n");
    
    
    if(a==1) /* for foot movements */
	{
	for(int k=0;k<=i;k++)
    printf("\t");
    printf("    пллп  ппп    ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("      лм         ");
    
	a=2;
	}
	
	else if(a==2) /* for foot movements */
	{
	for(int k=0;k<=i;k++)
    printf("\t");
    printf("     плм пл      ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("          лм    ");
    
    a=1;
	}
	
	else
	{
	for(int k=0;k<=i;k++)
    printf("\t");
    printf("   пллп пл      ");	
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("    лм   лм    ");
    }    
    printf("\n");
    for(int j=0;j<80;j++)  /*Ground part */
	printf("-");  
    
    Sleep(300);    /* Standby and clearing the screen */
    system("CLS");
    
    }

}
void ds1(void)  /*Jump function*/
{
   
    for(int i=0;i<2;i++)
    {
	for(int x=0;x<15;x++)
	printf("\n");
	for(int k=0;k<=i;k++)
    printf("\t");
    printf("         млпллллм");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("         лллллллл");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("         лллллппп");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf(" л      мллллппп ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf(" ллм  мллллллммм ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf(" пллллллллллл  п ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("   плллллллп    ");
    printf("\n");
    
    
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("    ллп пл       ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("    лм   лм      ");
    printf("\n");
	
        
    printf("\n\n\n\n\n\n\n\n\n"); /*Lower the floor a little and give the appearance of jumping */
    for(int j=0;j<80;j++)
	printf("-");  
	
    
	Sleep(100);
	system("CLS");

    }

}
void ds2(void)  /*Speed Function */
{
    int a=1;
   
    for(int i=0;i<2;i++)
    {
	for(int x=0;x<15;x++)
	printf("\n");
	for(int k=0;k<=i;k++)
    printf("\t");
    printf("         млпллллм");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("         лллллллл");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("         лллллппп");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf(" л      мллллппп ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf(" ллм  мллллллммм ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf(" пллллллллллл  п ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("   плллллллп    ");
    printf("\n");
    
    
    if(a==1)
	{
	for(int k=0;k<=i;k++)
    printf("\t");
    printf("    пллп  ппп    ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("      лм         ");
    
	a=2;
	}
	
	else if(a==2)
	{
	for(int k=0;k<=i;k++)
    printf("\t");
    printf("     плм пл      ");
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("          лм    ");
    
    a=1;
	}
	
	else
	{
	for(int k=0;k<=i;k++)
    printf("\t");
    printf("   пллп пл      ");	
    printf("\n");
    for(int k=0;k<=i;k++)
    printf("\t");
    printf("    лм   лм    ");
    }    
    printf("\n");
    for(int j=0;j<80;j++)
	printf("-");  
   
    Sleep(30);     /*The sleep value was kept a little lower, thus creating the appearance of moving faster. */
    system("CLS");
    
    }

}

void ds4(int c)  /*Object and dinosaur function */
{
     int a=1;
     c=25;
     for( int i=c;i>0;i--){      /* The c value will start from 25 and decrease so that the shape will approach the object. */ 
     		for(int x=0;x<15;x++) 
	printf("\n");
    printf("         млпллллм");
    printf("\n");
    printf("         лллллллл");
    printf("\n");
    printf("         лллллппп");
    printf("\n");
    printf(" л      мллллппп ");
    printf("\n");
    printf(" ллм  мллллллммм ");for(int i=0;i<c;i++)printf(" ");printf("л    л \n"); /*  Barrier  */
    printf(" пллллллллллл  п ");for(int i=0;i<c;i++)printf(" ");printf("л    л \n");
    printf("   плллллллп    ");for(int i=0;i<c;i++)printf(" ");printf(" лммммл \n");
   
    
    
    if(a==1)
	{
	
    printf("    пллп  ппп    ");for(int i=0;i<c;i++)printf(" ");printf("  л    \n");
    printf("      лм         ");for(int i=0;i<c;i++)printf(" ");printf("  л    ");
    
	a=2;
	}
	
	else if(a==2)
	{

    printf("     плм пл      ");for(int i=0;i<c;i++)printf(" ");printf("  л    \n");
    printf("          лм    ");for(int i=0;i<c;i++)printf(" ");printf("   л    ");
    
    a=1;
	}
	
	else
	{
	
    printf("   пллп пл      ");	
    printf("\n");
    printf("    лм   лм    ");
    }    
    printf("\n");
    for(int j=0;j<80;j++)
	printf("-");  
   
    Sleep(100);
    system("CLS");
    c--;    /* Obstacle dinosaurs were brought closer by decreasing c each time  */
     
     	
     	
	 }

    
    }
