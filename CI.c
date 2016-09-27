/*
Name:pawan joshi
Roll:11
Program:To calculate compound interest
Lab no. : 04
Date:27th september 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float p,t,r,ci;
printf("Enter the principle");
scanf("%f",&p);
printf("Enter the time");
scanf("%f",&t);
printf("Enter the rate");
scanf("%f",&r);
ci= p * (pow(1 + 0.01 * r, t) - 1);
printf("compound interest is: %f", ci);
getch();
}