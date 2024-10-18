#include<stdio.h>

int main(){

    int a[50];
    int size, i, num, pos;
    
    printf("enter number of elements : ");
    scanf("%d",&size);

    if(size>50){
        printf("overflow condition "); //to check overflow condition if array elements exceed in size 
    }

    else{
       printf("enter elements : ");
       for(i=0;i<=size-1;i++){
       scanf("%d",&a[i]);
       }

       printf("elements now : ");
       for(i=0;i<=size-1;i++)
        {
       printf(" %d",a[i]);
       }
    
       printf("\n"); //next line as we dont want the next printf statement with the above printf statement 
      
       printf("enter the element you want to insert : ");
       scanf("%d",&num);

       printf("enter the position you want to insert : ");
       scanf("%d",&pos);
        

       for(i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
       }

       a[pos-1] = num;
       
       printf("new array after insertion : ");
       size++;
       
       for(i=0;i<=size-1;i++){
       printf(" %d",a[i]);
       }
    }

    return 0;

}

