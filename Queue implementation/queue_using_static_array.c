// Implementation of queue using static array
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
#define FRONT 0

int queue[CAPACITY], rear = 0;

// Defining function prototypes
int isEmpty();        // Checks whether stack is empty or not.
int isFull();         // Checks whether stack is full or not.
void insert(int);     // Inserts element in queue.
void delete();        // Deletes element from queue.
void display();       // Displays elements of queue.

void main()
{
  int choice, item;

  while(1)
  {
    printf("\nQueue options:\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1: printf("\nEnter element to insert: ");
              scanf("%d", &item);
              insert(item);
              break;

      case 2: delete();
              break;

      case 3: display();
              break;

      case 4: printf("\nQuitting...\n");
              exit(0);

      default: printf("Invalid choice.\n");
    }
  }
}

int isEmpty()
{
  if(rear == FRONT)
    return 1;
  else
    return 0;
}

int isFull()
{
  if(rear == CAPACITY)
    return 1;
  else
    return 0;
}

void insert(int element)
{
  if(isFull())
    printf("Queue is empty.\n");
  else
    {
      queue[rear] = element;
      printf("%d inserted.\n", queue[rear++]);
    }
}

void delete()
{
  if(isEmpty())
    printf("Queue is empty.\n");
  else
  {
    int index;
    printf("%d deleted.\n", queue[FRONT]);
    for(index = 0; index < rear - 1; index++)
      queue[index] = queue[index + 1];
    rear--;
  }
}

void display()
{
  if(isEmpty())
    printf("Queue is empty.\n");
  else
    {
      int index;
      printf("\nElements of queue are:\n");

      for(index = 0; index < rear; index++)
        printf("%d ", queue[index]);

      printf("\n");
    }
}
