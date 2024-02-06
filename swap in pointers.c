#include<stdio.h>
void swap(int a, int b);
void swapref(int* a,int* b);
int main(){
    /*int x=7,y=2;
    swap(x,y);
    printf("values after swaping x = %d\n & y = %d\n",x,y);
    */
    int x=7,y=2;
    swapref(x,y);
    printf("values after swaping x = %d\n & y = %d\n",x,y);

return 0;}
// call by value swap
void swap(int a, int b){
int q=a;
a=b;
b=q;
printf("values after before a = %d\n & b = %d\n",a,b);
}
// call by reference
void swapref(int* a,int* b){
int t=*a;
*a=*b;
*b=t;
printf("values before swapping *a=%d & *b=%d\n",*a,*b);
}

