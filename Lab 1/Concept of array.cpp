#include <stdio.h>
#include <string.h>
struct student
{
 int Sap_ID;
 int Roll_No;
 char Name[20];
 float Marks;

};
int main()
{    
    int a[100];
     int e,i,loc,size,n,j; 
	 int c;  
    printf("\n\nChoose 1 Inserting an Element from an Array\n");
    printf("Choose 2 for Deleting an Element from an Array\n");
    printf("Choose 3 for  Creating data list of Students\n");
    printf("Please Select your Options : ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    	printf("You selected option 1\n");
    
	printf("You need to create an array First\n");
	printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Your Array\n ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        
        printf("\nEnter any element to insert in the array\n");
        scanf("%d",&e);
        printf("Enter a position to insert an element %d\n",e);
        scanf("%d",&loc);
        loc--;
        for(i=size-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=e;
        printf("Array after Insertion: ");
        for(i=0;i<size+1;i++)
        {
            printf("%d ",a[i]);
        }
         break;
         
    case 2:
    	
    printf("You selected option 2\n");
       
   
	printf("You need to create an array First\n");
	printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Your Array\n ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
         
        printf("\nEnter an  element from array to be deleted\n");
        scanf("%d",&n);
        for(i=0;i<size;i++)
        {
            if(a[i]==n)
            {
                for(j=i;j<(size-1);j++)
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("Array after Deletion\n");
        
		for(i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;
        
    case 3 :  

        int i,j ;
	    printf("Enter No of records to be filled\n");
	    scanf("%d",&i);
    	struct student students [i];
    	printf("Record of %d students can be filled.\n",i);
        printf("Enter record of Students.\n",i);
	
    	for(j=0;j<i;j++)
    	{
	    	printf("\nRecord of student %d\n",j+1);
	    	printf("\nEnter Sap ID \n",i);
		    scanf("%d",&students[j].Sap_ID);
		    printf("Enter Roll no. \n",i);
	    	scanf("%d",&students[j].Roll_No);
	    	printf("Enter Name \n",i);
	    	scanf("%s",&students[j].Name);
	    	printf("Enter marks:");
            scanf("%f",&students[i].Marks);
		}	
		    printf("Final list of %d students",i);
		    for(j=0;j<i;j++)
		{
		    printf("\n\nSap ID : %d ,\nRollno : %d,\nName : %s \n Marks : %f",
		        students[j].Sap_ID,students[j].Roll_No,students[j].Name,students[i].Marks);
		    }
    break;
    //default:
	//printf("Choice Error: Choose only from 1 , 2 and 3");
        
    }

    return 0;
}
