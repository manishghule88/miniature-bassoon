// Problem Statement : 'you-con', is program that allows one to quickly convert quantities between compatible units. 
//                      As the name suggests, it works via. the terminal.
                    
// Step 1 : Understand the Problem Statements
// Conclusion : We have to accept 2 conversion currencies and distance & perfrom the over 25 conversion.

// Step 2 : Write the algorithm:
/*
    START
        - Accept the number from user & store it into iValue. Ask the user for selecting the option.
        - When user select the option then print the list of the particular option. And call the function.
        - Inide the function create one variable to store the conversion type, named as Perfrom.
        - Create one variable named as getValue for getting the value that you want to convert.
        - Put the value & perfrom the conversion inside the class. Store th result on fRet variable.
        - Display the result from fRet to the User.
    STOP
*/

// Step 3: Decide the Programming language(C,C++)
// We Select C++ Programming

// Author : Manish Pratap Ghule
// Date :   26/04/2024

// Step 4 : Write the Program

#include "conversion.h"
#include "function.h"
using namespace std;

// This is main (Entry Point Function)
int main() {
    Distance dobj;   // object of the Distance class
    Currencies cobj; // object of the Currencies class

    int isOption = 0;   // Variable to store the option

    while (1)   // use this for to repeat the all under the exception once again.
    {
        cout << "Which One Conversion Do You Want to Perfrom ?" << endl;
        // Choose one from below option.
        cout << " 1. Distance Conversion" << endl;
        // Choose 1. If you want to perfrom distance conversion.
        cout << " 2. Currencies Conversion" << endl;
        // Choose 2. If you want to perfrom currency conversion.
        cout << " 0. Exit" << endl;
        // Choose 0. If you want to exit 

        // To make conversions please give vaild option.
        cout << "Select the Option " << endl;      
        cin >> isOption;

        list_Of_Conversions(isOption);	// This is the Function call of all the Conversion

        if (isOption == 1) {
            check_Distance(dobj);	// This is the function are passing object as a parameter of distance class.
        } else if (isOption == 2) {
            check_Currencies(cobj);	// This is the function are passing object as a parameter of Currencies class.
        } else {
            break;
        }
       Continue();  // This function use for 
    }
    
    return 0;
}

// Step 5 : Test the Code
/*
    Test Case 1: (Select the Option)  1
                (Select the Conversion) 16
    Input :      45.3
    Output :     0.453 meter

    Test Case 2: (Select the Option)  2
                (Select the Conversion) 13
    Input :      4501
    Output :     40477.2 South Korean Won
*/