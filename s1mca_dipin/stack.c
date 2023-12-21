#include<stdio.h>
#include<stdlib.h>
int s[10],top=-1;
void push();
void pop();
void show();
int main()
{
 int ch;
 printf("1 for push\n");
 printf("2 for pop\n");
 printf("3 for show\n");
 printf("4 for exit\n");
 while(1)
 {
  printf("\n enter the choice");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
    push();
    break;
  case 2:
    pop();
    break;
  case 3:
    show();
    break;
  
  default:
     printf("invalid");
    }
 }
 return 0;
}
void push()
{
 int item;
 if(top==10-1)
 {
   printf("stack is full");
 }
 else
 {
  printf("enter th element");
  scanf("%d",&item);
  top++;
  s[top]=item;
 }
}
void pop()
  if (top==-1)
  {
    printf("stack is empty");
  }
  else
  {
   printf("popped element is %d",s[top]);
   top=top-1;
  }
}
void show()
{
 int item;
 if(top==-1)
 {
  printf("\n stack is empty...");
 }
 else
 {
  printf("\n stack is...");
  for(item=top;item>0;--item);
   {
     print("%d\n",stack[item]);
     }
  }
}      
 
  
     
          
  


