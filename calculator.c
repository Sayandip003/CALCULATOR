#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  float x,y,m,d,s,a,p;
  char z,k,N,C,Y;
  printf("Enter the operation you want to execute[/ , * , - , + , %%] ");
  scanf("%c",&z);
  {
    if(z=='*')
        printf("You have choose multiplication \n");
    else if(z=='/')
        printf("You have choose division \n");
    else if(z=='-')
        printf("You have choose subtraction \n");
    else if(z=='+')
        printf("You have choose addition \n");
    else if(z=='%')
        printf("You have choose percentage \n");
    else
        printf("No operation is available \n");
  }
  printf("Enter first no ");
  scanf("%f",&x);
  printf("Enter second no ");
  scanf("%f",&y);
  switch (z)
  {
    case '*':
        m=x*y;
        printf("Multiplication of %f with %f is %f",x,y,m);
        break;
    case '/':
        d=x/y;
        printf("Division of %f with %f is %f",x,y,d);
        break;
    case '-':
        s=x-y;
        printf("Subtraction of %f with %f is %f",x,y,s);
        break;
    case '+':
        a=x+y;
        printf("Addition of %f with %f is %f",x,y,a);
        break;
    case '%':
        p=(x/y)*100;
        printf("Percentage of %f on %f is %f %%",x,y,p);
        break;
    default:
        printf("Not any operation available");
  }
}
