#include<stdio.h>
#include<stdlib.h>
#include"vector.h"
#define size 5
extern void push();
extern void pop();
int main()
{
  int w;
int vector[size]={63,54,41,52,13};

printf("Vector Menu\n");
printf("1.Push\n 2.Pop\n 3.Exit\n");
printf("Choose your selection: ");
scanf("%d",&w);
switch(w)
  {
  case 1: push(vector,size);
   break;
  case 2: pop(vector,size);
   break;
  case 3: exit(1);
   break;
   default: printf("Wrong choice!!! ");
  

   }
return EXIT_SUCCESS;
}


void pop(int x[],int boyut)
{
int position,c;
printf("Enter the location where wish to delete element:\n");
scanf("%d",&position);
if(position>=boyut+1)
   printf("Is not possible\n");
if(position<boyut+1)
{
  for(c=position-1; c<boyut-1; c++)
    x[c]=x[c+1];
   printf("New array: \n");
   for(c=0;c<boyut-1;c++)
     printf("%d\n",x[c]);
}
}


void push(int y[ ],int boyut)
{
  int position,value;
  int c;
 
  printf("Enter the location where wish to insert an element : \n");
  scanf("%d",&position);
  printf("Enter the value to insert : \n");
  scanf("%d",&value);
  for(c=boyut-1;c>=position;c--)
    y[c+1]=y[c];
  y[position-1]=value;
  printf("New vector : \n");
  for(c=0;c<=boyut;c++)
    printf("%d\n",y[c]);
}

