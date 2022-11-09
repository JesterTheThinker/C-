#include<stdio.h>
int main()
{
	int a;
	
	printf("enter marks of student:   ");
	scanf("%d", &a);


	if (a>90)
	printf("Grade A");
	else if (a<90 && a>=80)
	printf("Grade B");
	else if (a<80 && a>=70)
	printf("Grade C");
	else if (a<70 && a>=60)
	printf("Grade D");
	else
	printf("Grade F");
				

}
