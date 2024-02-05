#include<stdio.h>
int main(){
char alpha;
printf("enter an alphabet: ");
scanf("%c", &alpha);
if (alpha>='a' && alpha<='z'){
printf("lower case");

}
else{
    printf("upper case");
}

return 0;
}
