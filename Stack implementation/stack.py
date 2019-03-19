#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Created on Wed March 20 02:10:00 2019

Implementation of stack in Python

@author: Pran Kumar Sarkar
"""

class Stack:

    def __init__(self):
        self.stack = []

    def is_empty(self):
        """
        Checks whether stack is empty or not.

        Returns: true if empty, else false.
        """
        return self.stack == []

    def push(self, element):
        """Adds element in  top of stack"""
        self.stack.append(element)
        print(self.stack[-1], "pushed.")

    def pop(self):
        """Deletes topmost element form stack and returns the same."""
        if(self.is_empty()):
            return None
        else:
            return self.stack.pop()

    def peek(self):
        """Returns topmost element from stack if it is not empty else None."""
        if(self.is_empty()):
            return None
        else:
            return self.stack[-1]

    def traverse(self):
        """Displays all elements in stack."""
        if(self.is_empty()):
            print("Stack is empty.")
        else:
            print("Elements of stack from top to bottom:")

            for item in reversed(self.stack):
                print(item)

if __name__ == "__main__":
    stack_ob = Stack()

    while(True):
        print("\nStack operations:")
        print("1. Push")
        print("2. Pop")
        print("3. Peek")
        print("4. Traverse")
        print("5. Quit")
        choice = int(input("Enter your choice: "))

        if choice == 1:
            item = int(input("Enter number to push: "))
            stack_ob.push(item)

        elif choice == 2:
            item = stack_ob.pop()
            if not item:
                print("Stack is empty.")
            else:
                print(item, "popped.")

        elif choice == 3:
            item = stack_ob.peek()
            if not item:
                print("Stack is empty.")
            else:
                print("Peak element:", item)

        elif choice == 4:
            stack_ob.traverse()

        elif choice == 5:
            print("Quitting...")
            exit(0)

        else:
            print("Invalid choice.")
