#include<stdio.h>
int main(){
int n;
do{
    printf("enter no: ");
    scanf("%d", &n);
    printf("%d\n", n);

    if(n%2 != 0){
        break;
    }
}while(1);
printf("your no is odd");
return 0;



/*int n;
do{
    printf("enter no: ");
    scanf("%d", &n);
    printf("%d\n", n);

    if(n%7 == 0){
        break;
    }
}while(1);
printf("its a multiple of 7");
return 0;*/


}
