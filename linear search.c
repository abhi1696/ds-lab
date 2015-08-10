#include<stdio.h>
#include<conio.h>
void main()
{
int i, array[10],x;
clrscr();

for(i=0;i<10;i++)
{scanf("%d",&array[i]);
}
scanf("%d",&x);
for(i=0;i<10;i++)
{if(array[i]==x)
printf("\narray found at position:%d",i+1);
}
getch();
}
