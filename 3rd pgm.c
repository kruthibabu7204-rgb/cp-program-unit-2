#include<stdio.h>

/*Function declarations*/
void inputArray(int*arr,int n);
void displayArray(const int*arr,int n);
int sumArray(const int*arr,int n);
int countPositive(const int*arr,int n);
int countNegative(const int*arr,int n);

int main(void){
 int arr[100];
  int n,sum,posCount,negCount;
  printf("Enter the number of elements in the array(max 100)}:");
  if(scanf("%d",&n)!=1||n<0||n>100)
  {

      puts("Invalid size.");
      return 1;
  }


  inputArray(arr,n);
  printf("\nArray elements are:");
  displayArray(arr,n);
  sum = sumArray(arr,n);
   printf("\nSum of all elements =%d",sum);

   posCount =countPositive(arr,n);
   negCount =countNegative(arr,n);

   printf("\nNumber of positive elements=%d",posCount);
   printf("\nNumber of negative elements=%d",negCount);

   return 0;
   }
   /* Read n integer into array via pointer arithmetic*/
   void inputArray(int*arr,int n){
   printf("Enter %d elements:\n",n);
   for(int i=0;i<n;i++){
    scanf ("%d",arr+i);
    }
   }

   /* Print array elements*/
   void displayArray(const int*arr,int n){
   for (int i=0;i<n;i++){
    printf("%d",*(arr+i));
     }
    }
    //function to calculate sum of array elements
    int sumArray(const int*arr,int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum +=*(arr + i);
    }
   return sum;
    }/*Count positive(>0)*/
    int countPositive(const int*arr,int n){
     int cnt=0;
     for(int i=0;i<n;i++){
        if(*(arr+i)>0) cnt++;
        }
    return cnt;
    }
    int countNegative(const int*arr,int n)
    {

        int cnt=0;
        for(int i=0;i<n;i++){
            if(*(arr+i)<0) cnt++;
        }
        return cnt;
    }
