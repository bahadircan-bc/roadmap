#include <iostream>

int main()
{
    /* Fundamental Data Types */

    std::cout << "#### Fundamental Data Types" << std::endl;
    int a = 5;
    float b = 5.5;
    double c = 5.555;
    char d = 'A';
    bool e = true;

    std::cout << "int: " << a << std::endl;
    std::cout << "float: " << b << std::endl;
    std::cout << "double: " << c << std::endl;
    std::cout << "char: " << d << std::endl;
    std::cout << "bool: " << e << std::endl;

    /* Types are made up. We made them up to make sense of values stored in addresses. */

    /* Integral Types */
    std::cout << "#### Integral Types" << std::endl;

    /* Integer types */
    std::cout << "Integer Types" << std::endl;
    int x = 5;

    // There are modifiers to the basic integer type: short, long, signed, unsigned
    short int y = 5;
    long int z = 5;
    long long int w = 5;

    std::cout << "int: " << x << std::endl;
    std::cout << "short int: " << y << std::endl;
    std::cout << "long int: " << z << std::endl;
    std::cout << "long long int: " << w << std::endl;

    unsigned int v = 5;
    short unsigned int u = 5;
    long unsigned int t = 5;
    long long unsigned int s = 5;

    std::cout << "unsigned int: " << v << std::endl;
    std::cout << "short unsigned int: " << u << std::endl;
    std::cout << "long unsigned int: " << t << std::endl;
    std::cout << "long long unsigned int: " << s << std::endl;

    // You can use these modifiers in combination with the basic integer type

    /* Extended Integer Types */
    std::cout << "Extended Integer Types" << std::endl;
    // C++11 introduced extended integer types

    bool a1 = true;
    char a2 = 'A';
    wchar_t a3 = L'A';  // wide character
    char16_t a4 = u'A'; // 16-bit character
    char32_t a5 = U'A'; // 32-bit character

    std::cout << "bool: " << a1 << std::endl;
    std::cout << "char: " << a2 << std::endl;
    std::cout << "wchar_t: " << a3 << std::endl;
    std::cout << "char16_t: " << a4 << std::endl;
    std::cout << "char32_t: " << a5 << std::endl;

    // Experiment and lookup for more specific information about the sizes and capabilities of these types

    /* Floating-Point Types */
    std::cout << "#### Floating-Point Types" << std::endl;

    float b1 = 5.5;
    double b2 = 5.555;
    long double b3 = 5.5555;

    std::cout << "float: " << b1 << std::endl;
    std::cout << "double: " << b2 << std::endl;
    std::cout << "long double: " << b3 << std::endl;

    /* Void Type */
    std::cout << "#### Void Type" << std::endl;

    // The void type specifies that no value is available
    // It is used in three different situations:
    // 1. As a function return type
    // 2. As a function parameter type
    // 3. As an operator (in which case it is a typeless pointer to some memory location)

    void *ptr;
    int a6 = 5;
    ptr = &a6;

    std::cout << "void*: " << ptr << std::endl;

    /* Compound Types */
    std::cout << "#### Compound Types" << std::endl;

    // Compound types are types that are derived from fundamental types
    // They include:
    // 1. Reference Types
    // 2. Pointer Types
    // 3. Pointer To Member Types
    // 4. Array Types
    // 5. Function Types
    // 6. Enumeration Types
    // 7. Class Types

    /* Reference Types */
    std::cout << "Reference Types" << std::endl;

    // A reference type is a reference to an already existing object
    // It is declared by using the & operator
    // It is used to create an alias for an already existing object
    // It is used to pass arguments by reference to a function
    // It is used to return values by reference from a function

    int a7 = 5;
    int &b4 = a7;

    std::cout << "int: " << a7 << std::endl;
    std::cout << "int&: " << b4 << std::endl;

    std::cout << "Changing the value of a7 with pre-decrement operator with the operand being b4" << std::endl;
    std::cout << "--b4: " << --b4 << std::endl;
    std::cout << "See the value of a7 after the change" << std::endl;
    std::cout << "a7: " << a7 << std::endl;

    /* Pointer Types */
    std::cout << "Pointer Types" << std::endl;

    // A pointer type is a type that holds the address of an object
    // It is declared by using the * operator
    // It is used to create dynamic memory allocation
    // It is used to pass arguments by reference to a function
    // It is used to return values by reference from a function

    int a8 = 5;
    int *b5 = &a8;

    std::cout << "int: " << a8 << std::endl;
    std::cout << "int*: " << b5 << std::endl;

    std::cout << "Changing the value of a8 with pre-decrement operator with the operand being b5" << std::endl;
    std::cout << "--(*b5): " << --(*b5) << std::endl;
    std::cout << "See the value of a8 after the change" << std::endl;
    std::cout << "a8: " << a8 << std::endl;

    /* Pointer To Member Types */
    std::cout << "Pointer To Member Types" << std::endl;

    // A pointer to member type is a type that holds the address of a member of a class
    // It is declared by using the .* or ->* operators

    // Example:
    class A
    {
    public:
        int a;
    };

    int A::*b6 = &A::a;

    A obj;
    obj.a = 5;

    std::cout << "int A::*: " << obj.*b6 << std::endl;

    /* Array Types */
    std::cout << "Array Types" << std::endl;

    // An array type is a type that holds a sequence of elements
    // It is declared by using the [] operator

    int a9[5] = {1, 2, 3, 4, 5};

    std::cout << "int[]: " << a9[0] << std::endl;

    /* Function Types */
    std::cout << "Function Types" << std::endl;

    // A function type is a type that holds a function
    // It is declared by using the () operator

    auto add = [](int a, int b)
    {
        return a + b;
    };

    std::cout << "int(*)(int, int): " << add(5, 5) << std::endl;

    /* Enumeration Types */
    std::cout << "Enumeration Types" << std::endl;

    // An enumeration type is a type that holds a set of named integer constants
    // It is declared by using the enum keyword

    enum Color
    {
        RED,
        GREEN,
        BLUE
    };

    Color color = RED;

    std::cout << "Color: " << color << std::endl;

    /* Class Types */
    std::cout << "Class Types" << std::endl;

    // A class type is a type that holds a class
    // It is declared by using the class keyword

    class B
    {
    public:
        int a;
    };

    B obj1;
    obj1.a = 5;

    std::cout << "B: " << obj1.a << std::endl;

    /*
    Types have more to it than just these
    There are qualifiers, storage classes, and type specifiers, type naming
    But I will leave it here for now.
    */

    return 0;
}