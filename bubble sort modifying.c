//program:Bubble sort
#include<stdio.h>
int main(){
int arr[5];
printf("enter the value");
scanf("%d ",&arr(i);

int i,j,temp;
for(i=0;i<5-1;i++){
    for(j=0;j<5-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("Sorted Array:");
for(i=0;i<5;i++)
    printf("%d ",arr[i]);

    return 0;
}
