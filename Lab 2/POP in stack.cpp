#include<stdio.h>

int stack[20],choice,n,top,c,i,x;

void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is Full");
        
    }
    else
    {
   	do
   	{
	  
        printf("\n Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
    while(top!=n-1);
	}
}

void display()
{
    if(top>=0)
    {
    	
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n\t%d",stack[i]);
            printf("\n");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}


void pop()
{
do
   {
	
	    printf("\n\n\t1.Pop an Element from the stack\n\t2.Exit the Pop program");
     	printf("\n\t Enter the Choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                if(top<=-1)
                {
                    printf("\n\a");
                }
                else
                {
                  printf("\n\t The popped elements is %d\n",stack[top]);
                  top--;
                  
                }
                display();
            }
            break;
            case 2:
            {
                printf("\nExiting Pop Program\n\a\a\a");
            }  
			break;
            
            default:
            {
                printf ("\nChoice error\a\a\a");
            }
    
          }
    }
    while(c!=2);
}


int main()
{
	printf("\n Enter the size of STACK[Maximum=20]:");
    scanf("%d",&n);
	top=-1;
	push();
    display();
    pop();
    display();
}
