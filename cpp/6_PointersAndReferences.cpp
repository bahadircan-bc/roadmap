#include <iostream>

int main()
{
    /* Pointers and References */

    std::cout << "#### Pointers and References" << std::endl;

    int a = 5;
    int *b = &a; // Pointer to a
    int &c = a;  // Reference to a

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << *b << std::endl;
    std::cout << "c: " << c << std::endl;

    // Pointers and references are used to store the address of a variable
    // They are used to access the value stored in the address
    // They are used to pass the address of a variable to a function
    // They are used to return the address of a variable from a function

    std::cout << "Changing the value of a with pre-decrement operator with the operand being b" << std::endl;
    std::cout << "--(*b): " << --(*b) << std::endl;
    std::cout << "See the value of a after the change" << std::endl;
    std::cout << "a: " << a << std::endl;

    std::cout << "Changing the value of a with pre-decrement operator with the operand being c" << std::endl;
    std::cout << "--c: " << --c << std::endl;
    std::cout << "See the value of a after the change" << std::endl;
    std::cout << "a: " << a << std::endl;

    /*
    A reference is considered a constant pointer to an object.
    Meaning you can not change the reference to point to another object.
    */
    int d = 5;
    c = d; // This is valid and it changes the value of a to 5
    // c = &d; // This is invalid, it tries to change the reference to point to d which is not allowed

    /*
    Pointers are far more complex than references.
    They introduce the concept of dynamic memory allocation and deallocation.
    They introduce the concept of smart pointers.

    To be able to understand these concepts, you need to understand the concept of memory management. Which includes memory model and lifetime of objects.

    These concepts are beyond the scope of this tutorial.
    */

    return 0;
}
