// Program to print numbers from 1 to 10 without using loops or goto statements
#include <stdio.h>
void printNumber(int count){
   printf("%d\n", count );
   count+=1;
   if(count<=10)
      printNumber(count);
}
int main(){
   printNumber(1);
   return 0;
}
