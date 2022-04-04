#include<stdio.h>
#include<stdlib.h>
int main()
{
    int request[100],i,n,TotalHeadMoment=0,head,max;
    

printf("Enter maximum head position\n");
    scanf("%d",&max);
    
printf("Enter initial head position\n");
    scanf("%d",&head);
    
printf("Enter the number of Requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
     scanf("%d",&request[i]);
int min,x,y;
for (x=head;x<=max;x++){
 for(y=0;y<n;y++){
      if(x==request[y]){
printf("the head stopped at %d\n",x);
}

}
}


for (x=head-1;x>=0;x--){
 for(y=0;y<n;y++){
      if(x==request[y]){
printf("the head stopped at %d\n",request[y]);
min=request[y];
}

}
}
 int sum;   
  sum=(max-head)+(max-min);  
       

printf("\nTotal seek time is %d",sum);

    return 0;
    
}
