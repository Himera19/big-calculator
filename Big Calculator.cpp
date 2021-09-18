#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{



{
	printf("Welcome to Big Calculator:\n");
}
	int a,b;
	for (a=0;a<=5;a++){
	for(b=0;b<=a;b++){
	
	printf("*");
}
printf("\n");
}
	
	float sayi;
	printf("Please write a number: ");
	scanf("%f",&sayi);
    printf("Square of the number you entered:  %.2f",sqrt(fabs(sayi)));
    printf("\nThe exp value of the number you entered:  %.2f",exp(sayi));
	printf("\nThe logarithmic value you entered:  %.2f",log(sayi));
	printf("\nThe base value of the number you entered: %.2f",floor(sayi));
	printf("\nThe sinus value you entered %.2f\n",sin(sayi));
	
	printf("\n*** Now It's Time for Our Calculator ***\n");
	{
	int sayi1, sayi2, toplama, cikarma;
	printf("\nEnter first number: ");
	scanf("%d",&sayi1);
	printf("\nEnter second number: ");
	scanf("%d",&sayi2);
	toplama=sayi1+sayi2;
	cikarma=sayi1-sayi2;
	printf("\nSum of Numbers: %d'dir",toplama);
	printf("\nDifference of Numbers: %d'dir\n",cikarma);
	}
	
	{
	printf("\n***Did you like it ?***");
}
{
printf("For Yes =1 For No=0: ");
}
	
    int x; 
    scanf("%d",&x); 
    if( x>=1 ) 
    { 
        printf("Thank you so much :) "); 
    } 
    else 
    { 
        printf("You broke my heart :'( "); 
}

{

printf("\n***By Yunus Emre Benli***");
}	
getch ();
	return 0;
}
