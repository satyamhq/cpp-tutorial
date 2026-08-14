/* Given a stack, implement it using an array where stack = [10, 20, 30] 
and the current top element is at index 2. Write a program to peek the top
 element of the stack and display the value without removing or modifying it.*/

#include <iostream>
using namespace std;

int main() {
    int stack[] = {10, 20, 30};
    int top = 2; // Index of the top element

    // Peek the top element
    cout << "Top element of the stack: " << stack[top] << endl;

    return 0;
}
