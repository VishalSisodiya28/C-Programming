//43 - Print positive and negative elements of an array

#include<stdio.h>
int main(){
    
    int arr[100],n;
    printf("Enter number of elements : ");
    
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("\nThe Positive numbers are :");

    for(int i=0;i<n-1;i++){
        
        if(arr[i]>0)
        printf(" %d",arr[i]);
        
    }
    
    printf("\nThe Negative numbers are :");
    for(int i=0;i<n-1;i++){
        if(arr[i]<0)
        printf(" %d",arr[i]);
    }
    
    return 0;
}
