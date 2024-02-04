#include<stdio.h>
#include<math.h>
int areasquare(int side);
int areacircle(int rad);
int arearectangle(int a, int b);
int main(){
int side;
scanf("%d", &side);
printf("the area of a square is %d\n", areasquare(side));

int rad;
scanf("%d", &rad);
printf("the area of a circle is %d", areacircle(rad));

int a,b;
scanf("%d", &a);
scanf("%d", &b);
printf("the are of a rectangle is %d", arearectangle(a, b));







return 0;
}

int areasquare(int side){
return side* side;
}
int areacircle(int rad){
return 3.14 * rad *rad;
}
int arearectangle(int a, int b){
return  a*b;
}
