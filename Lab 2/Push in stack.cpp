#include<stdio.h>

int stack[100],choice,n,top,x,i;

void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
   	do
   	{
	  
        printf(" Enter a value to be pushed:");
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
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}


int main()
{
	printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
	top=-1;
	push();
	display();
}
