#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,d,size,i;
    char ch;
    system("clear");
    printf("***Queue Operations***\n\n");
    printf("Enter the size: ");
    scanf("%d",&size);
    int q[size],rear=-1,front=-1;
    do
    {
        printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            //insertion
            case 1:
            if(rear==size-1)
            {
                printf("Overflow");
            }
            else
            {
                if(front==-1)
                    front=0;
                printf("Enter the data: ");
                scanf("%d",&d);
                rear++;
                q[rear]=d;

            }
            break;

            //deletion
            case 2:
            if((front==-1)||(front>rear))
            {
                printf("Underflow");
            }
            else
            {
                d=q[front];
                printf("the deleted data: %d",d);
                front++;
                if(front>rear)
                    front=-1;
            }
            break;

            //display
            case 3:
            if((front==-1)||(front>rear))
            {
                printf("Underflow");
            }
            else
            {
                int temp=front;
                printf("front = %d\n",q[front]);
                printf("rear = %d\n",q[rear]);
                printf("\nthe elements are:\n");
                while(temp<=rear)
                {
                    printf("%d\n",q[temp]);
                    temp++;
                }
            }
            break;

            case 4:
            printf("Exiting...!");
            exit(0);

            default:
            printf("Wrong choice!!");
        }
        printf("\nDo you want to continue? y/n: ");
        scanf("%s",&ch);
    }
    while(ch=='Y'||ch=='y');
    return 0;
}