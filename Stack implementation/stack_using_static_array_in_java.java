// Implementation of stack using static array in java
import java.util.Scanner;
class Stack
{
  static Scanner in = new Scanner(System.in);
  static int stack[], size, top = -1;

  static
  {
    Stack.create_stack();
  }

  public static void main(String args[])
  {
    int choice, item;
    while(true)
    {
      System.out.println("\nStack operations:");
      System.out.println("1. Push");
      System.out.println("2. Pop");
      System.out.println("3. Peek");
      System.out.println("4. Traverse");
      System.out.println("5. Exit");

      System.out.print("Enter your choice: ");
      choice = in.nextInt();

      switch(choice)
      {
        case 1: System.out.print("Enter number to push: ");
                item = in.nextInt();
                Stack.push(item);
                break;

        case 2: item = Stack.pop();
                if(item == -999)
                  System.out.println("Stack is empty.");
                else
                  System.out.println(item + " popped.");
                break;

        case 3: item = Stack.peek();
                if(item == -999)
                  System.out.println("Stack is empty.");
                else
                  System.out.println("Peak item: " + item);
                break;

        case 4: Stack.traverse();
                break;

        case 5: System.exit(0);

        default:  System.out.println("Invalid input.");
      }
    }
  }

  public static void create_stack()
  {
    System.out.print("Enter size of stack: ");
    Stack.size = in.nextInt();
    Stack.stack = new int[Stack.size];
    System.out.println("Stack created with size: " + Stack.size);
  }

  public static boolean isFull()
  {
    if(top == size - 1)
      return true;          // If stack is full
    else
      return false;         // If stack is not full
  }

  public static boolean isEmpty()
  {
    if(top == -1)
      return true;          // If stack is empty
    else
      return false;         // If stack is not empty
  }

  public static void push(int element)
  {
    if(isFull())
      System.out.println("Stack is overflow.");
    else
    {
      Stack.stack[++top] = element;
      System.out.println(Stack.stack[top] + " pushed.");
    }
  }

  public static int pop()
  {
    if(isEmpty())
      return -999;
    else
      return Stack.stack[top--];
  }

  public static int peek()
  {
    if(isEmpty())
      return -999;
    else
      return Stack.stack[top];
  }

  public static void traverse()
  {
    if(isEmpty())
      System.out.println("Stack is empty.");
    else
    {
      System.out.println("Elements of stack top to bottom:");
      for(int stack_index = top; stack_index > -1; stack_index--)
        System.out.println(Stack.stack[stack_index]);
    }
  }
}
