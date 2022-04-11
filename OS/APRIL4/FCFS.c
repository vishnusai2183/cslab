#include<stdio.h>
#include<stdlib.h>
int main()
{
    int request[100],i,n,TotalHeadMoment=0,initial;
    printf("Enter the number of Requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
     scanf("%d",&request[i]);
    printf("Enter initial head position\n");
    scanf("%d",&initial);
    
    // logic for FCFS disk scheduling
    printf("The sequence is : ");
    for(i=0;i<n;i++)
    {
        TotalHeadMoment=TotalHeadMoment+abs(request[i]-initial);
    
      printf( "%d\t",request[i]);
        initial=request[i];
}
    
       

printf("\nTotal head moment is %d",TotalHeadMoment);

    return 0;
    
}
