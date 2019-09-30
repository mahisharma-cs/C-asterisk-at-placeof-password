#include<stdio.h>
#include<conio.h>

void main()
{
	char pwd[15];
	int i;
	printf("Enter Password : ");
	for(i=0;i<15;i++)
	{
		pwd[i]=getch();
		if(pwd[i]!='\r')
		{
            printf("*");
        }
		if(pwd[i]==(char)13)
			break;
	}
	printf("\n     Password is : ");
	for(i=0;i<15;i++)
		printf("%c",pwd[i]);
}