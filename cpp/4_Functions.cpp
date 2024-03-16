#include <iostream>

int main()
{
    /* Functions */
    // 1. Function Declaration
    // 2. Function Definition
    // 3. Function Call
    // 4. Function Parameters
    // 5. Function Return Type
    // 6. Function Overloading
    // 7. Function Recursion
    // 8. Function Scope
    // 9. Function Inline
    // 10. Function Default Arguments
    // 11. Function Prototypes
    // 12. Function Pointers
    // 13. Function References
    // 14. Function Lambda Expressions
    // 15. Function Exception Handling
    // 16. Function Storage Classes
    // 17. Function Templates
    // 18. Function Namespaces
    // 19. Function Preprocessor Directives

    /* 1. Function Declaration */
    std::cout << "#### Function Declaration\n\n";
    // A function declaration tells the compiler about a function's name, return type, and parameters.
    // A function declaration has the following parts:
    // 1. return type
    // 2. function name
    // 3. parameters
    // 4. semicolon

    // Syntax:
    // return_type function_name( parameter1, parameter2, ... );

    // Example:
    int add(int, int);

    /* 2. Function Definition */
    std::cout << "#### Function Definition\n\n";
    // A function definition provides the actual body of the function.
    // A function definition has the following parts:
    // 1. return type
    // 2. function name
    // 3. parameters
    // 4. function body

    // Syntax:
    // return_type function_name( parameter1, parameter2, ... )
    // {
    //     // function body
    // }

    // Example:
    int add(int a, int b)
    {
        return a + b;
    }

    /* 3. Function Call */
    std::cout << "#### Function Call\n\n";
    // A function call is an expression that passes control and arguments to a function.
    // When a program calls a function, the program control is transferred to the called function.
    // A function call has the following parts:
    // 1. function name
    // 2. arguments

    // Syntax:
    //
    // function_name( argument1, argument2, ... );

    // Example:
    int sum = add(5, 10);
    std::cout << "Sum: " << sum << std::endl;

    /* 4. Function Parameters */
    std::cout << "#### Function Parameters\n\n";
    // A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter.
    // This value is referred to as the actual parameter or argument.
    // The parameter list refers to the type, order, and number of the parameters of a function.
    // Parameters are optional; that is, a function may contain no parameters.

    // Syntax:
    //
    // return_type function_name( type parameter1, type parameter2, ... )
    // {
    //     // function body
    // }

    // Example:
    int subtract(int a, int b)
    {
        return a - b;
    }

    int difference = subtract(10, 5);
    std::cout << "Difference: " << difference << std::endl;

    /* 5. Function Return Type */
    std::cout << "#### Function Return Type\n\n";
    // A return type is the data type of the value the function returns.
    // Some functions perform the desired operations without returning a value.
    // In this case, the return type is the keyword void.

    // Syntax:
    //
    // return_type function_name( type parameter1, type parameter2, ... )
    // {
    //     // function body
    //     return value;
    // }

    // Example:
    void printMessage()
    {
        std::cout << "Hello, World!" << std::endl;
    }

    printMessage();

    /* 6. Function Overloading */
    std::cout << "#### Function Overloading\n\n";
    // Function overloading is a feature that allows us to have more than one function with the same name,
    // if their parameter lists are different.
    // Function overloading can be considered as an example of polymorphism feature in C++.

    // Example:
    int multiply(int a, int b)
    {
        return a * b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    std::cout << "Integer Multiplication: " << multiply(5, 10) << std::endl;
    std::cout << "Double Multiplication: " << multiply(5.5, 10.5) << std::endl;

    /* 7. Function Recursion */
    std::cout << "#### Function Recursion\n\n";
    // Recursion is the process of defining something in terms of itself.
    // A function that calls itself is called a recursive function.

    // Example:
    int factorial(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return n * factorial(n - 1);
        }
    }

    std::cout << "Factorial of 5: " << factorial(5) << std::endl;

    /* 8. Function Scope */
    std::cout << "#### Function Scope\n\n";
    // The scope of a variable is the part of the program where the variable can be directly accessed.
    // The scope of a variable is the portion of the program where the variable is recognized.
    // A variable defined within a function is only accessible within that function.

    // Example:
    int number = 10;

    void printNumber()
    {
        int number = 20;
        std::cout << "Local Number: " << number << std::endl;
    }

    printNumber();
    std::cout << "Global Number: " << number << std::endl;

    /* 9. Function Inline */
    std::cout << "#### Function Inline\n\n";
    // The inline functions are a C++ enhancement feature to increase the execution time of a program.
    // Functions can be instructed to compiler to make them inline so that compiler can replace those
    // function definition wherever those are being called.

    // Example:
    inline int square(int n)
    {
        return n * n;
    }

    std::cout << "Square of 5: " << square(5) << std::endl;

    /* 10. Function Default Arguments */
    std::cout << "#### Function Default Arguments\n\n";
    // A default argument is a value provided in a function declaration that is automatically assigned by the compiler
    // if the caller of the function doesn't provide a value for the argument with a default value.

    // Example:
    int power(int base, int exponent = 2)
    {
        int result = 1;
        for (int i = 0; i < exponent; i++)
        {
            result *= base;
        }
        return result;
    }

    std::cout << "Power of 5: " << power(5) << std::endl;
    std::cout << "Power of 5^3: " << power(5, 3) << std::endl;

    /* 11. Function Prototypes */
    std::cout << "#### Function Prototypes\n\n";
    // A function prototype is a declaration of a function that tells the program about the function name,
    // return type, and parameters.

    // Example:
    int divide(int, int);

    int quotient = divide(10, 2);
    std::cout << "Quotient: " << quotient << std::endl;

    int divide(int a, int b)
    {
        return a / b;
    }

    /* 12. Function Pointers */
    std::cout << "#### Function Pointers\n\n";
    // A function pointer is a variable that stores the address of a function that can later be called through that function pointer.

    // Example:
    int (*functionPointer)(int, int) = add;
    std::cout << "Function Pointer: " << functionPointer(5, 10) << std::endl;

    /* 13. Function References */
    std::cout << "#### Function References\n\n";
    // A reference is an alias for a variable. A reference variable is declared to be a reference by following the
    // declaration with an ampersand (&).

    // Example:
    int &ref = number;
    std::cout << "Reference: " << ref << std::endl;

    /* 14. Function Lambda Expressions */
    std::cout << "#### Function Lambda Expressions\n\n";
    // Lambda expressions are a convenient way of defining anonymous functions in C++.
    // These functions are called lambda functions.

    // Example:
    auto lambda = [](int a, int b) -> int
    {
        return a + b;
    };

    std::cout << "Lambda: " << lambda(5, 10) << std::endl;

    /* 15. Function Exception Handling */
    std::cout << "#### Function Exception Handling\n\n";
    // Exception handling is a mechanism to handle runtime errors, such as arithmetic overflow, division by zero, etc.

    // Example:
    try
    {
        int result = 10 / 0;
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    /* 16. Function Storage Classes */
    std::cout << "#### Function Storage Classes\n\n";
    // The storage class in C++ specifies the lifetime and scope of a variable.
    // The storage classes in C++ are:
    // 1. auto
    // 2. register
    // 3. static
    // 4. extern
    // 5. mutable

    // Example:
    static int staticVariable = 10;
    std::cout << "Static Variable: " << staticVariable << std::endl;

    /* 17. Function Templates */
    std::cout << "#### Function Templates\n\n";
    // Function templates are special functions that can operate with generic types.
    // This allows us to create a function template whose functionality can be adapted to more than one type or class without repeating the entire code for each type.

    // Example:
    template <class T>
    T maximum(T a, T b)
    {
        return (a > b) ? a : b;
    }

    std::cout << "Maximum: " << maximum(5, 10) << std::endl;
    std::cout << "Maximum: " << maximum(5.5, 10.5) << std::endl;

    /* 18. Function Namespaces */
    std::cout << "#### Function Namespaces\n\n";
    // A namespace is a declarative region that provides a scope to the identifiers (names of the types, function, variables, etc) inside it.

    // Example:
    namespace Math
    {
        int add(int a, int b)
        {
            return a + b;
        }
    }

    std::cout << "Math Namespace: " << Math::add(5, 10) << std::endl;

    /* 19. Function Preprocessor Directives */
    std::cout << "#### Function Preprocessor Directives\n\n";
// Preprocessor directives are lines included in the code of our programs that are not program statements but directives for the preprocessor.

// Example:
#define PI 3.14159
    std::cout << "PI: " << PI << std::endl;

    return 0;
}