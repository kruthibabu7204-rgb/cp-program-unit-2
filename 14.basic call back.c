#include<stdio.h>

//this is the callback function
void sayHello(){
    printf("Hello,student!you just called me back!\n");

}
//this function takes another function as input
void studentWork(void(*callbackFun)()){
printf("Student is doing homework...\n");

//After finishing,call the teacher back
callbackFunc();
}
int main(){
//Pass the teacher's phone number(function address)
studentWork(sayHello);
return 0;
}
