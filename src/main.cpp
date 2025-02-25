/*
Universidad Amerike
Author: José Sierra
Practice#:4
Date: 25/02/25
Description: This code prints which number is the biggest that you type inside of the terminal
*/

#include <iostream>
using namespace std;

float Number1;
float Number2;
float Number3;

#include <iostream>
using namespace std;

int main ()
{
    // Declare the variables
    int Number1, Number2, Number3;
    
    // Here the program asks you to type 3 numbers
    cout << "Give to me 3 numbers" << endl;
    cin >> Number1;
    cin >> Number2;
    cin >> Number3;
    
    // Here the program will determine which of the 3 numbers you typed is the biggest
    if (Number1 > Number2 && Number1 > Number3)
    {
        cout << Number1 << " is the biggest number" << endl;
    }
    else if (Number2 > Number1 && Number2 > Number3)
    {
        cout << Number2 << " is the biggest number" << endl;
    }
    else if (Number3 > Number1 && Number3 > Number2)
    {
        cout << Number3 << " is the biggest number" << endl;
    }
    
    return 0;
}