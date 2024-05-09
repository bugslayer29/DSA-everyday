// The C++ Switch case statement evaluates a given expression and based on the evaluated value(matching a certain condition), it executes the statements associated with it. It is an alternative to the long if-else-if ladder which provides an easy way to dispatch execution to different parts of code based on the value of the expression.

// What is a switch statement in C++?
// The switch statement in C++ is a flow control statement that is used to execute the different blocks of statements based on the value of the given expression. We can create different cases for different values of the switch expression. We can specify any number of cases in the switch statement but the case value can only be of type int or char.

// Syntax of switch Statement in C++
// switch (expression) {
//     case value_1:
//         // statements_1;
//         break;
//     case value_2:
//         // statements_2;
//         break;
//     .....
//     .....
//     default:
//         // default_statements;
//         break;
// }

// The following example demonstrate how to use the switch statement syntax in C++.

// Example: C Program to demonstrate the syntax of switch in C++

// // C++ program to demonstrate syntax of switch
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
//     // switch variable
//     char x = 'A';

//     // switch statements
//     switch (x) {
//     case 'A':
//         cout << "Choice is A";
//         break;
//     case 'B':
//         cout << "Choice is B";
//         break;
//     case 'C':
//         cout << "Choice is C";
//         break;
//     default:
//         cout << "Choice other than A, B and C";
//         break;
//     }
//     return 0;
// }

// Output
// Choice is A
// Rules of the switch case statement in C++
// There are some rules that we need to follow when using switch statements in C++. They are as follows:

// 1.The case value must be either int or char type.
// 2.There can be any number of cases.
// 3.No duplicate case values are allowed.
// 4. Each statement of the case can have a break statement. It is optional.
// 5.The default Statement is also optional.



// Working of switch Statement in C++
// The working of the switch statement in C is as follows:

// Step 1: The switch expression is evaluated.
// Step 2: The evaluated value is then matched against the present case values.
// Step 3A: If the matching case value is found, that case block is executed.
// Step 3B: If the matching code is not found, then the default case block is executed if present.
// Step 4A: If the break keyword is present in the block, then program control comes out of the switch statement.
// Step 4B: If the break keyword is not present, then all the cases after the matching case are executed.
// Step 5: Statements after the switch statement is executed.
// Important Points About Switch Case Statements
// 1. Switch expression should result in a constant value
// If the expression provided in the switch statement does not result in a constant value, it would not be valid. Some valid expressions for switch case will be,

// // Constant expressions allowed
// switch(1+2+23)
// switch(1*2+3%4)

// // Variable expression are allowed provided
// // they are assigned with fixed values
// switch(a*b+c*d)
// switch(a+b+c)

// 2. Expression must evaluate only int or char type values.
// The switch statement can only evaluate the integer or character value. So the switch expression should return the values of type int or char only.

// 3. Break in switch case
// The break keyword is used in the switch case to break out of the switch when encountered. It is used at the end of every case block so that when the matching case is executed, the program control comes out of the loop.

// The break statement is optional. If omitted, all the cases after the matching case will also be executed.

// Example of switch cases without the break statement

// // C Program to demonstrate the behaviour of switch case
// // without break
// #include <stdio.h>

// int main()
// {

//     int var = 2;

//     // switch case without break
//     switch (var) {
//     case 1:
//         printf("Case 1 is executed.\n");
//     case 2:
//         printf("Case 2 is executed.\n");
//     case 3:
//         printf("Case 3 is executed.\n");
//     case 4:
//         printf("Case 4 is executed.");
//     }
//     return 0;
// }

// Output
// Case 2 is executed.
// Case 3 is executed.
// Case 4 is executed.
// 4. Default in switch case
// The default keyword is used to define a default case which will be executed when no case value is matched. It is also an optional statement and the switch case statement runs without problem if it is omitted.

// 5. No duplicate Case Values
// In the C switch statement, duplicate case values are not allowed. All the case values must be unique.

// 6. Nested Switch Statements
// In C++, we can nest one switch inside another switch statement without any problem. Though it is avoided most of the time as it makes the program more complex and unreadable.

// Example of Nested Switch Statement

// // C program to illustrate the use of nested switch
// #include <iostream>
// using namespace std;

// int main()
// {

//     int var1 = 1;
//     int var2 = 0;

//     // outer switch
//     switch (var1) {
//     case 0:
//         cout << "Outer Switch Case 0\n";
//         break;
//     case 1:
//         cout << "Outer Switch Case 1\n";
//         // inner switch
//         switch (var2) {
//         case 0:
//             cout << "Inner Switch Case 0\n";
//             break;
//         }
//         break;
//     default:
//         cout << "Default Case of Outer Loop";
//         break;
//     }

//     return 0;
// }

// Output
// Outer Switch Case 1
// Inner Switch Case 0
// 7. Position of Default Case Does Not Matters
// Regardless of its placement, the default case only gets executed if none of the other case conditions are met. So, putting it at the beginning, middle, or end doesn’t change the core logic (unless you’re using a less common technique called fall-through).

// Example: In the below example we will identify the weekday through (1-7) numbers.


// // C++ program to demonstrate the placement of default
// // anywhere

// #include <iostream>
// using namespace std;

// int main()
// {
//     int day;

//     cout << "Enter a day number (1-7): ";
//     cin >> day;

//     switch (day) {
//     default: // Default placed first for demonstration
//         cout << "Not a valid weekday." << endl;
//         break;
//     case 1:
//         cout << "It's Monday!" << endl;
//         break;
//     case 2:
//         cout << "It's Tuesday!" << endl;
//         break;
//     case 3:
//         cout << "It's Wednesday!" << endl;
//         break;
//     case 4:
//         cout << "It's Thursday!" << endl;
//         break;
//     case 5:
//         cout << "It's Friday!" << endl;
//         break;
//     case 6:
//         cout << "It's Saturday!" << endl;
//         break;
//     case 7:
//         cout << "It's Sunday!" << endl;
//         break;
//     }

//     return 0;
// }

// Output

// Enter a day number (1-7): 8
// Not a valid weekday.
// Examples of switch Statement in C++
// Example 1: C++ Program to make a Simple Calculator using the switch

// // C Program to create a simpe calculator using switch
// // statement
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// // driver code
// int main()
// {
//     // switch variable
//     char choice;
//     // operands
//     int x, y;

//     while (1) {
//         cout << "Enter the Operator (+,-,*,/)\nEnter x to "
//                 "exit\n";
//         cin >> choice;

//         // for exit
//         if (choice == 'x') {
//             exit(0);
//         }

//         cout << "Enter the two numbers: ";
//         cin >> x >> y;

//         // switch case with operation for each operator
//         switch (choice) {
//         case '+':
//             cout << x << " + " << y << " = " << x + y
//                  << endl;
//             break;

//         case '-':
//             cout << x << " - " << y << " = " << x - y
//                  << endl;
//             break;

//         case '*':
//             cout << x << " * " << y << " = " << x * y
//                  << endl;
//             break;
//         case '/':
//             cout << x << " / " << y << " = " << x / y
//                  << endl;
//             break;
//         default:
//             printf("Invalid Operator Input\n");
//         }
//     }
//     return 0;
// }

// Output

// Enter the operator (+, -, *, /)

// Enter x to exit

// +
// Enter the two numbers: 100 + 200
// 100 + 200 = 300

// Example 2:  C++ Program to print the day using switch case

// // C++ program to returns day based on the numeric value.
// #include <iostream>
// using namespace std;

// class Day {
// private:
//     int day = 3;

// public:
//     void set_data()
//     {
//         cout << "Enter no of day you want to display: ";
//         cin >> day;
//     }

//     void display_day()
//     {
//         switch (day) {
//         case 1:
//             cout << "MONDAY";
//             break;

//         case 2:
//             cout << "TUESDAY";
//             break;

//         case 3:
//             cout << "WEDNESDAY";
//             break;

//         case 4:
//             cout << "THURSDAY";
//             break;

//         case 5:
//             cout << "FRIDAY";
//             break;

//         case 6:
//             cout << "SATURDAY";
//             break;

//         case 7:
//             cout << "SUNDAY";
//             break;

//         default:
//             cout << "INVALID INPUT";
//             break;
//         }
//     }
// };

// main()
// {
//     Day d1;

//     d1.display_day();

//     return 0;
// }

// Output
// WEDNESDAY
// Example 3:  C++ Program to print different choices using enum values and class

// // C++ Program to print different choices using enum values
// // and class

// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;

// // Define an enum class for the choices
// enum class Choice { A, B, C };

// // Create a map to associate strings with the enum values
// map<std::string, Choice> stringToEnumMap
//     = { { "A", Choice::A },
//         { "B", Choice::B },
//         { "C", Choice::C } };

// int main()
// {
//     // The input string
//     string x = "A";

//     // Convert the string to the corresponding enum using
//     // the map
//     Choice choice = stringToEnumMap[x];

//     // Use a switch statement on the enum
//     switch (choice) {
//     case Choice::A:
//         cout << "Choice is A";
//         break;
//     case Choice::B:
//         cout << "Choice is B";
//         break;
//     case Choice::C:
//         cout << "Choice is C";
//         break;
//     default:
//         cout << "Choice other than A, B and C";
//         break;
//     }

//     return 0;
// }

// /* The enum class can be used for choice sets
// from different projects or programs,
// hence improving modularity*/

// Output
// Choice is A
// Advantages of switch Statement in C++
// Easier to debug and maintain for a large number of conditions.
// Easier to read than if else if.
// Disadvantages of switch Statement in C++
// Switch case can only evaluate int or char type.
// No support for logical expressions.
// Have to keep in mind to add a break in every case.
// Conclusion
// In this article, we discussed the switch statement and how we can use it to replace long and complex if else if ladder statements. We also discussed the cases in which we can use the switch statement to make our C++ program more efficient.

// FAQs on C++ Switch Statement
// 1. Define switch in C++.
// The switch is a decision-making statement that can execute the different blocks of code based on the value of the expression specified.

// 2. Which statements are optional in the C++ switch?
// The default and break are optional in the switch in C++.

// 3. What are the differences between switch and if else if ladder in C?
// Following are the main differences between switch and if else if ladder in C++:

// switch

// if else if

// It executes the different cases on the basis of the value of the switch variable.	It executes the different blocks based on the condition specified.
// It can only evaluate the int or char type expressions.	It can evaluate any type of expression.
// Faster and easier to read for a large number of conditions.	It can get messy when there are lots of conditions.

#include<iostream>
using namespace std;
int main(){
    


// int i;
// cout << "Enter the value of i : \n";
// cin >> i;

// switch(i)
// {
//     case 1 : 
//     cout << "Rohit" << endl;
//     break;
//     case 2 : 
//     cout << "Mohit" << endl;
//     break;
//     default :
//     cout << "sohit" << endl;
//     break;
// }

int i;
cout << "Enter the value of i : \n";
cin >> i;

switch(i)
{
    case 1 : 
    cout << "Monday" << endl;
    break;
    case 2 : 
    cout << "Tuesday" << endl;
    break;
     case 3 : 
    cout << "Wednesday" << endl;
    break;
     case 4 : 
    cout << "Thursday" << endl;
    break;
     case 5 : 
    cout << "Friday" << endl;
    break;
    case 6: 
    cout << "Saturday" << endl;
    break;
    default :
    cout << "Sunday" << endl;
    break;
}




return 0;
}