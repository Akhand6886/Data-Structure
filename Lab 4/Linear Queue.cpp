#include <stdio.h>
#include <conio.h>
#define MAX 10


int front = -1, rear = -1;
void insert(void);
int delete_element(void);
void display(void);
int c , val;
int queue[MAX];



int main()
{   printf("Linear Queue Program");
    
    do 
    {
    	printf("\n\nChoose option\n");
    	printf("1. Insertion in Queue\n");
    	printf("2. Deletion in Queue\n");
    	printf("3. Display the Queue\n");
    	printf("4. Exit\n \n");
    	scanf("%d",&c);
    	switch(c)
    	    {     
    	         case 1 :
    	         	{   
    	         	   int z;
    	         	   if(rear == MAX-1)
                         {
	                      printf("\n Queue OVERFLOW \n Futher elements cannot \n");
				       	}
					     else
						 {
					    	for(z=0;z<MAX;z++)
						       {
							     insert();
						       }
					    display();
					     } 
					 }
					  break;
    	        case 2 :
    	        	{
    	             	val = delete_element();
                        if (val != -1)
                        printf("\n The number deleted is : %d", val);
                        display();
                       
					}
					 break;
				case 3:
					{
						printf("Displaying the Linear Queue");
						display();
					}
					break;
				case 4:
					{ 
					printf("Exiting the program ");
					} 
					break;
				default :
				{
				printf("Choise Error");
			     } 	
            }
	}
	while(c!=4);
return 0;
}


void insert()
{
    int num;
    printf("\n Enter the number to be inserted in the queue : ");
    scanf("%d", &num);
    if(rear == MAX-1)
     {
	   printf("\n OVERFLOW\n");
     }
	else if(front == -1 && rear == -1)
     {
	   front = rear = 0;
     }
    else
    {
	  rear++;
      queue[rear] = num;
    }
}


int delete_element()
    {
    
       if(front == -1 || front>rear)
       {
         printf("\n UNDERFLOW");
         return -1;
       }
        else
        {
            val = queue[front];
            front++;
            if(front > rear)
            front = rear = -1;
            return val;
        }
    }
    


void display()
{
    int i; 
    
    printf("\n");
    if(front == -1 || front > rear)
    {
	     printf("\nQUEUE IS EMPTY");
    }
	else
       {
        for(i = front; i <= rear; i++)
             printf("\t %d", queue[i]);
       }
}
