/*13.Write a program by using switch case if user enter 11 it will have are area of
circle and when user enter 22 it will have area of rectangle and when user enter
33 it will give area of square when user enter 44 it will give area of triangle.*/

#include <stdio.h>
int main()
{

int option;int r; float aofc; int l,w,aofr;  int s,aofs;
printf("Enter option\n 11.To find area of circle\n 22.To find area of rectangle\n 33. To find area of square\n 44.to find area of triangle.");
scanf("%d",option);
switch (option)
{
case 11:
    //Area of circle:
    printf("enter radius of circle:");
    scanf("%d",r);
    aofc= 3.14*r*r;
    printf("The area of circle is:%f",aofc);
    break;

case 12:
    //Area of rectangle:
    printf("enter length & width of rectanle:");
    scanf("%d%d",l,w);
    aofr= 3.14*r*r;
    printf("The area of Rectanle is:%d",aofr);
    break;

case 13:
    //Area of sqaure:
    printf("enter side of sqaure:");
    scanf("%d",s);
    aofs= r*r;
    printf("The area of Rectanle is:%d",aofs);
    break;
default:
printf("Not valid choise");
    break;
}

}