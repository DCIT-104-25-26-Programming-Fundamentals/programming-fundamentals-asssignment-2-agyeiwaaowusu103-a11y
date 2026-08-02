// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 5
// =============================================================================
//
// TASK: Fibonacci Sequence Generator
//
// The Fibonacci sequence is a series of numbers where each number is the sum
// of the two numbers before it:
//
//   0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
//
// Write a C++ program with TWO parts, each implemented as a function.
//
// -----------------------------------------------------------------------------
// PART A — Print the First N Terms
// -----------------------------------------------------------------------------
// - Ask the user how many terms (N) to display.
// - Print the first N numbers of the Fibonacci sequence on one line.
//
// Example:
//   How many terms? 7
//   Fibonacci sequence: 0 1 1 2 3 5 8
//
// -----------------------------------------------------------------------------
// PART B — Check if a Number Belongs to the Sequence
// -----------------------------------------------------------------------------
// - Ask the user to enter a number.
// - Determine whether that number is a Fibonacci number.
// - Print an appropriate message.
//
// Example:
//   Enter a number to check: 13
//   13 is a Fibonacci number.
//
// #include <iostream>
using namespace std;

// PART A: Function to print first N terms
#include <iostream>
using namespace std;

// PART A: Function to print the first 'n' Fibonacci numbers
void printFibonacci(int n) {
    if (n <= 0) return;

    long long a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}


// PART B: Function to check if a number is in the sequence
bool isFibonacci(long long num) {  //  Lowercase 'long'
    long long a = 0, b = 1;
    while (a < num) {
        long long next = a + b;
        a = b;
        b = next;
    }
    return a == num;
}
    



int main() {
    // Part A Test
    int n;
    cout << "How many terms? ";
    cin >> n;
    printFibonacci(n);

    // Part B Test
    long long num;
    cout << "Enter a number to check: ";
    cin >> num;
    if (isFibonacci(num)) {
        cout << num << " belongs to the Fibonacci sequence!" << endl;
    } else {
        cout << num << " does NOT belong to the Fibonacci sequence." << endl;
    }

    return 0;
}
//  

//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use a loop (not recursion) to generate the sequence in both parts.
// - N must be a positive integer. If it is not, print an error message.
// - Each part must be implemented in its own function (see scaffold below).
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

