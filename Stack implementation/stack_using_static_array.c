/* Implementation of STACK using static array */
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5

int stack[CAPACITY], top = -1;

// Defining function prototypes
int isEmpty(void);    // This function checks whether stack is empty of not.
int isFull(void);     // This function checks whether stack is full of not.
void push(int);       // This function is used to push an element in stack.
int pop(void);        // This function deletes the top most element of stack and returns it.
void peek(void);      // This function is used to see the topmost element of stack.
void traverse(void);  // This function is used to see all the elements of stack.


void main()
{
  int choice, item;

  while(1)
  {
    printf("Stack operations: \n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Traverse\n");
    printf("5. Quit\n");

    printf("Enter your choice(1-5): ");
    scanf("%d", &choice);
    printf("\n");

    switch(choice)
    {
      case 1:
          printf("Enter element to push: ");
          scanf("%d", &item);
          push(item);
          break;
      case 2:
          item = pop();
          if(item != -999)
              printf("%d popped.\n\n", item);
          break;
      case 3:
          peek();
          break;
      case 4:
          traverse();
          break;
      case 5:
          exit(0);
      default:
          printf("Invalid input");
    }
  }
}

int isEmpty()
{
  if(top == -1)
      return 1;
  else
      return 0;
}

int isFull()
{
  if(top == CAPACITY - 1)
      return 1;
  else
      return 0;
}

void push(int ele)
{
  if(isFull())
    printf("Stack overflow.\n\n");
  else
  {
    top++;
    stack[top] = ele;
    printf("%d pushed\n\n", ele);
  }
}

int pop()
{
  if(isEmpty())
  {
    printf("Stack is empty.\n\n");
    return -999;
  }
  else
    return stack[top--];
}

void peek()
{
  if(isEmpty())
      printf("Stack is empty.\n\n");
  else
      printf("Peak element: %d\n\n", stack[top]);
}

void traverse()
{
  if(isEmpty())
      printf("Stack is empty.\n\n");
  else
  {
    int i;
    printf("Elements of stack from top to bottom:\n");
    for(i = top; i > -1; i--)
        printf("%d\n", stack[i]);
    printf("\n");
  }
}
