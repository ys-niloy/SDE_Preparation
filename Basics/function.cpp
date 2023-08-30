#include<bits/stdc++.h>
using namespace std;

// function for passing parameter by value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// function for passing parameter by reference
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    swapByValue(num1, num2);
    
    cout << "Number 1: "<< num1 << endl;       // does not change the values because of passing the parameters by value
    cout << "Number 2: "<< num2 << endl;

    cout << endl << endl;
    
    swapByReference(num1, num2);   
    cout << "Number 1: "<< num1 << endl;      // swaps the actual values because of passing the parameters by reference
    cout << "Number 2: "<< num2 << endl;


    return 0;
}
