#include<stdio.h>
//Function declarations
void inputArray(int*arr,int n);
void displayArray(int*arr,int n);
int sumArray(int*arr,int n);
int countPositive(int*arr,int n);
int countNegative(int*arr,int n);

int main(){
int arr[100];
int n,sum,pos_C, neg_C;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
  inputArray(arr,n);

 //Display array elements
 printf("\nArray elements are:");
 displayArray (arr,n);

  //Calculate sum
sum=sumArray(arr,n);
  printf("\n sum of all elements =%d",sum);
  //count positives and negatives
   pos_C=countPositive(arr,n);
   neg_C=countNegative(arr,n);

  printf("\nNumbers of positive elements =%d",pos_C);
  printf("\nNumbers of negative elements =%d",neg_C);
  return 0;
}
void inputArray(int*arr,int n){
printf("Enter %d elements;\n",n);
for(int i=0;i<n;i++)
    scanf("%d",(arr+i));//using pointer arithmetic
 }

 //Function to display array elements
 void displayArray(int*arr,int n){
 for (int i=0;i<n; i++)
    printf("%d",*(arr+i));//Accessing elements using pointer
 }
 //Function to calculate sum of array elements
 int sumArray(int*arr,int n){
 int sum=0;
 for(int i=0;i<n;i++)
        sum +=*(arr+i);

 return sum;

 }
 int countPositive(int*arr,int n){
 int count = 0;
 for(int i = 0; i<n; i++)
    if(*(arr+i)>0)
        count++;
    return count;

 }

 int countNegative(int*arr,int n){
 int count = 0;
 for(int i = 0; i<n; i++)
    if(*(arr+i)<0)
        count++;
    return count;
 }

