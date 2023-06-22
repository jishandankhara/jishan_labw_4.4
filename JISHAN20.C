//4.4 Q2 write a program to find if given number is neutral or not using a ladder if else.
#include<stdio.h>
#include<conio.h>

void main(){
int a;
clrscr();
printf("enter any number:");
scanf("%d",&a);
if(a<0){
printf("the number is negative");
}else if (a==0){
printf("the number is neutral");
}else {
printf("the number is positive");
}
getch();}