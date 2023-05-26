#include<stdio.h>
#include<stdlib.h>
void Add ();
void Delete ();
void Search ();
void Display ();
int s[30],front=-1,rear=-1,v,n;
void main()
{
int choice;
printf("**How many person you want to add in block?**=>");
scanf("%d",&n);
while(1)
{
printf("\n1.Add the Person");
printf("\n2.Delete the Person");
printf("\n3.Search the Person");
printf("\n4.Display the Person");
printf("\n5.Exit block");
printf("\nEnter the Choice=");
scanf("%d",&choice);
switch(choice)
{
case 1:Add ();
break;
case 2:Delete ();
}
break;
case 3:Search ();
break;
case 4:Display ();
break;
case 5:exit(0);
break;
default:
printf("\nYou have entered the Wrong Choice");
}
}
}
void Add ()
{
int v;
printf("\n*****ADD PERSON******");
if(rear>=n-1)
{
printf("\nPerson block is Overflow\n");
}
else
{
printf("\nEnter the Person to Insert into block=");
scanf("%d",&v);
rear=rear+1;
s[rear]=v;
}

if(front==-1)
{
front=0;
}
}
void Delete ()
{
int v;
printf("\n*****DELETE PERSON****");
if(front==-1)
{
printf("\nPerson block is Underflow");
}
else
{
v=s[front];
printf("\nDelete Person block is=%d\n",v);
}
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=front+1;

}
void Search ()
{
printf("\n*****SEARCH PERSON****");
int i,flag=0,m;
printf("\nEnter the Person:");
scanf("%d",&m);
for(i=0;i<=rear;i++)
{
if(s[i] == m)
{
flag = 1;
break;
}
}
if(flag == 1)
{
printf("Search Person is succesfull\n");
}
else
{
printf("Search Person is unsuccesfull\n");
}
}
void Display ()
{
printf("\n*****DISPLAY PERSON****");

int i;
if(front==-1)
{
printf("\nPerson block is Empty");
}
else
{
printf("\nPerson block is = ");
for(i=front;i<=rear;i++)
{
printf("%d\t",s[i]);
}
printf("\n");
}
}

