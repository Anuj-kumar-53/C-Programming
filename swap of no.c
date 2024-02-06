#include<stdio.h>
int main(){
   /* int a,b;
    scanf("%d\n",&a);
    scanf("%d", &b);
    printf("values before swappinf a=%d & b=%d\n",a,b);
    int t=a;
    a=b;
    b=t;
    printf("values after swapping a=%d & b=%d",a,b);
    return 0;
}*/


// without third variable..................
/*int a,b;
    scanf("%d\n",&a);
    scanf("%d", &b);
    printf("values before swappinf a=%d & b=%d\n",a,b);

    a=a-b;
    b=a+b;
    a=b-a;
    printf("values after swapping a=%d & b=%d",a,b);
    return 0;
}*/

// using bitwise oparator**************
int a,b;
    scanf("%d%d",&a,&b);// to take two inputs at the same time
    //scanf("%d", &b);
    printf("values before swappinf a=%d & b=%d\n",a,b);

   a=a^b;
   b=a^b;
   a=a^b;
    printf("values after swapping a=%d & b=%d",a,b);
    return 0;
}








