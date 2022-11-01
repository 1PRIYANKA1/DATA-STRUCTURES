   #include<stdio.h>
   #include<stdlib.h>
#define max 10
int top=-1;
int arr[max];

void push(int data);
int isempty();

int main()
{
	 push(5);
	 push(10);
	 push(4);
	 pop();
	 peek();
}
void push(int data)
{
	 if(!full())
	 {
	 	top=top+1;
	 	arr[top]=data;
	 }
}
int full()
{ 
   if(top==max-1)
{
   printf("stack is full");
   return 1;
}
 else
 {
 	return 0;
 }
}
int isempty()
{
	 if(top==-1)
	 {
	 	return 1;
	 }
 else
 {
 	return 0;
 }
}
void pop()
{
	 if(isempty())
	 {
	 	printf("the stack is empty");
	 }
	 else
	 {
	 	top=top-1;
	 }
	 
}
void peek()
{
	printf("element at the top=%d",arr[top]);
}
