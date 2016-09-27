/*
Name:pawan joshi
Roll:11
Program:To calculate Quadratic equation
Lab no. : 04
Date:27th september 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float a,b,c,root1,root2,dis;
system("cls");
printf("\n Enter the coffecient of x2 : ");
scanf("%f",&a);
printf("\n Enter the coffecient of x : ");
scanf("%f",&b);
printf("\n Enter the constant : ");
scanf("%f",&c);
dis=pow(b, 2)-4 * a * c;
root1= (-b + pow(dis, 0.5))/(2 * a);
root2= (-b + pow(dis, 0.5))/(2 * a);
printf("\n The root are: %0.1f,%0.1f",root1,root2);
getch();	
}
