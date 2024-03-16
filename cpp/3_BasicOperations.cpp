/*
    This talks about operators. However I will go deeper and add references from cppreference.com
*/

#include <iostream>

int main()
{

    /* Common Operators */
    // 1. Assignment Operator
    // 2. Increment and Decrement Operators
    // 3. Arithmetic Operators
    // 4. Logical Operators
    // 5. Comparison Operators
    // 6. Member Access Operators
    // 7. Other Operators

    /* 1. Assignment Operator */
    std::cout << "#### Assignment Operator\n\n";
    // This is not an assignment operator but a declaration and initialization of a variable
    int number;
    std::cout << "Declaration and Initialization\n\t";
    std::cout << "Number: " << number << std::endl;

    // Simple assignment
    number = 10;
    std::cout << "Simple Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Addition assignment
    number += 5;
    std::cout << "Addition Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Subtraction assignment
    number -= 5;
    std::cout << "Subtraction Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Multiplication assignment
    number *= 5;
    std::cout << "Multiplication Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Division assignment
    number /= 5;
    std::cout << "Division Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Remainder assignment
    number %= 4;
    std::cout << "Remainder Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Bitwise AND assignment
    number &= 5;
    std::cout << "Bitwise AND Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Bitwise OR assignment
    number |= 5;
    std::cout << "Bitwise OR Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Bitwise XOR assignment
    number ^= 5;
    std::cout << "Bitwise XOR Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Left shift assignment
    number <<= 2;
    std::cout << "Left Shift Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    // Right shift assignment
    number >>= 2;
    std::cout << "Right Shift Assignment\n\t";
    std::cout << "Number: " << number << std::endl;

    /* 2. Increment and Decrement Operators */
    std::cout << "\n#### Increment and Decrement Operators\n\n";
    number = 10;

    // Increment
    std::cout << "Postfix Increment\n";
    std::cout << "Operator called: " << number++ << std::endl;
    std::cout << "After Operation: " << number << std::endl;

    std::cout << "Prefix Increment\n";
    std::cout << "Operator called: " << ++number << std::endl;
    std::cout << "After Operation: " << number << std::endl;

    // Decrement
    std::cout << "Postfix Decrement\n";
    std::cout << "Operator called: " << number-- << std::endl;
    std::cout << "After Operation: " << number << std::endl;

    std::cout << "Prefix Decrement\n";
    std::cout << "Operator called: " << --number << std::endl;
    std::cout << "After Operation: " << number << std::endl;

    /*
    Important note is, pre-increment and pre-decrement change the value of the target and return a reference to it, meanwhile post-increment and post-decrement creates a copy of the element, changes the value of the original target and returns the copy before the increment or the decrement.
    */

    // Demonstration of the above note
    int a = 10;

    // now imagine using pre increment
    a = a + 1;
    std::cout << a << std::endl; // 11

    // now imagine using post increment
    a = 10;
    int b = a;
    a = a + 1;
    std::cout << b << std::endl; // 10
    // you can keep using a but b has the value of a before the increment

    /* 3. Arithmetic Operators */
    std::cout << "\n#### Arithmetic Operators\n\n";
    int x, y;
    x = 10;
    y = 5;

    // Addition
    std::cout << "Addition\n\t";
    std::cout << x + y << std::endl;

    // Subtraction
    std::cout << "Subtraction\n\t";
    std::cout << x - y << std::endl;

    // Multiplication
    std::cout << "Multiplication\n\t";
    std::cout << x * y << std::endl;

    // Division
    std::cout << "Division\n\t";
    std::cout << x / y << std::endl;

    // Remainder
    std::cout << "Remainder\n\t";
    std::cout << x % y << std::endl;

    // Unary Plus
    std::cout << "Unary Plus\n\t";
    std::cout << +x << std::endl;

    // Unary Minus
    std::cout << "Unary Minus\n\t";
    std::cout << -x << std::endl;

    // Bitwise NOT
    std::cout << "Bitwise NOT\n\t";
    std::cout << ~x << std::endl;

    // Bitwise AND
    std::cout << "Bitwise AND\n\t";
    std::cout << (x & y) << std::endl;

    // Bitwise OR
    std::cout << "Bitwise OR\n\t";
    std::cout << (x | y) << std::endl;

    // Bitwise XOR
    std::cout << "Bitwise XOR\n\t";
    std::cout << (x ^ y) << std::endl;

    // Left Shift
    std::cout << "Left Shift\n\t";
    std::cout << (x << 2) << std::endl;

    // Right Shift
    std::cout << "Right Shift\n\t";
    std::cout << (x >> 2) << std::endl;

    /* I have read that the operand of an arithmetic operation goes through integral promotion so any value that is passed to the operator is going to converted into an integral type*/
    std::cout << "Using unary plus operator to induce integral promotion of a char" << std::endl;

    char c = 'a';
    std::cout << "c: " << c << std::endl;
    std::cout << "+c: " << +c << std::endl;
    std::cout << "typeof c: " << typeid(c).name() << std::endl;
    std::cout << "typeof +c: " << typeid(+c).name() << std::endl;

    /* 4. Logical Operators */
    std::cout << "\n#### Logical Operators\n\n";
    bool p, q;

    p = true;
    q = false;

    // Logical AND
    std::cout << "Logical AND\n\t";
    std::cout << (p && q) << std::endl;

    // Logical OR
    std::cout << "Logical OR\n\t";
    std::cout << (p || q) << std::endl;

    // Logical NOT
    std::cout << "Logical NOT\n\t";
    std::cout << (!p) << std::endl;

    /* 5. Comparison Operators */
    std::cout << "\n#### Comparison Operators\n\n";
    int m, n;
    m = 10;
    n = 5;

    // Two-way comparison
    std::cout << "Two-way comparison\n\t";

    // Equality operators

    // Equal to
    std::cout << "Equal to\n\t";
    std::cout << (m == n) << std::endl;

    // Not equal to
    std::cout << "Not equal to\n\t";
    std::cout << (m != n) << std::endl;

    // Relational operators

    // Less than
    std::cout << "Less than\n\t";
    std::cout << (m < n) << std::endl;

    // Greater than
    std::cout << "Greater than\n\t";
    std::cout << (m > n) << std::endl;

    // Less than or equal to
    std::cout << "Less than or equal to\n\t";
    std::cout << (m <= n) << std::endl;

    // Greater than or equal to
    std::cout << "Greater than or equal to\n\t";
    std::cout << (m >= n) << std::endl;

    // Three-way comparison (added in C++20)
    // std::cout << "Three-way comparison\n\t";
    // std::cout << (m <=> n) << std::endl;

    /* 6. Member Access Operators */
    std::cout << "\n#### Member Access Operators\n\n";

    int arr[5] = {1, 2, 3, 4, 5};

    // Subsript operator
    std::cout << "Subscript Operator\n\t";
    std::cout << "arr[2]: " << arr[2] << std::endl;

    // Indirection operator
    int *arrPtr = arr;
    std::cout << "Indirection Operator\n\t";
    std::cout << "*arrPtr: " << *arrPtr << std::endl;

    // Address-of operator
    std::cout << "Address-of Operator\n\t";
    std::cout << "&arr[2]: " << &arr[2] << std::endl;

    // Member of object (Dot operator)
    struct Point
    {
        int x;
        int y;
    };

    Point point;
    point.x = 10;
    point.y = 20;

    std::cout << "Dot Operator\n\t";
    std::cout << "Point: (" << point.x << ", " << point.y << ")" << std::endl;

    // Member of pointer (Arrow operator)
    Point *pointPtr = &point;
    pointPtr->x = 30;
    pointPtr->y = 40;

    std::cout << "Arrow Operator\n\t";
    std::cout << "Point: (" << pointPtr->x << ", " << pointPtr->y << ")" << std::endl;

    // Pointer to member of object (Dot-star operator)
    int Point::*xPtr = &Point::x;
    int Point::*yPtr = &Point::y;

    std::cout << "Dot-star Operator\n\t";
    std::cout << "Point: (" << point.*xPtr << ", " << point.*yPtr << ")" << std::endl;

    // Pointer to member of pointer (Arrow-star operator)
    int Point::*xPtrPtr = &Point::x;
    int Point::*yPtrPtr = &Point::y;

    std::cout << "Arrow-star Operator\n\t";
    std::cout << "Point: (" << pointPtr->*xPtrPtr << ", " << pointPtr->*yPtrPtr << ")" << std::endl;

    /* 7. Other Operators */
    std::cout << "\n#### Other Operators\n\n";

    // Conditional Operator (Ternary Operator)
    std::cout << "Conditional Operator\n\t";
    std::cout << ((m > n) ? "m is greater than n" : "m is less than n") << std::endl;

    // Comma Operator
    std::cout << "Comma Operator\n\t";
    std::cout << (m, n) << std::endl;

    /* Not all the commas are comma operators. For example in a comma separated list (function argument list, initializer list). */

    // Function Call Operator
    std::cout << "Function Call Operator\n\t";
    std::cout << "Function Call: " << std::endl;

    /*
        There are more operators in C++ but these are the most common ones.
        I will add more operators in the future.
    */

    return 0;
}