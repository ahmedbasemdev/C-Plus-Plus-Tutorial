#include<iostream>
// To use strings, you must include an additional header file in the source code,
// the <string> library:
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string greeting = "Hello";

    /*  The + operator can be used between strings to add them together to make a new string , 
     This is called concatenation:  */
    string firstName = "ahmed ";
    string lastName = "Basem";
    string fullName = firstName + lastName;

    /*   A string in C++ is actually an object,
     which contain functions that can perform certain operations on strings    */
    string fullName2 = firstName.append(lastName);


    // To get the length of a string, use the length() function:

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();

    /*  size() function to get the length of a string. This is just an alias of length().
     It is completely up to you if you want to use length() or size():

    */

    


    // cout<<fullName2;
    return 0;
}
