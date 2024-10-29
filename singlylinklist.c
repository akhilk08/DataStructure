#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
}
*top,*top1,*temp;
void push(int element);
void pop();
void display();
void main()
{
int num,choice;
printf("\nStack using linked list\n");
printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
while(1)
{
printf("\n\nEnter the choice:");
scanf("%d",&choice);
switch(choice)
	{
	case 1:
		printf("Enter the elements:");
		scanf("%d",&num);
		push(num);
		break;
	case 2:
		pop();
		break;
	case 3:
		display();
		break;
	case 4:
		exit(0);
	default:
		printf("\nInvalid choice");
		break;
	}
}
}
void push(int element)
{
if(top==NULL)
{
top=(struct node*)malloc(1*sizeof(struct node));
top->link=NULL;
top->data=element;
}
else
{
temp=(struct node*)malloc(1*sizeof(struct node));
temp->link=top;
top->data=element;
top=temp;
}
}
void pop()
{
top1=top;
if(top1==NULL)
{
printf("empty!");
return;
}
else
{
top1=top1->link;
printf("\nPopped element is%d\n",top->data);
free(top);
top=top1;
}
}
void display()
{
top1=top;
if(top1==NULL)
{
printf("\nEmpty stack\n");
return;
}
while(top1!=NULL)
{
printf("%d\t",top1->data);
top1=top1->link;
}
}


