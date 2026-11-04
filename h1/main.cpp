#include <iostream>
#include <stdexcept>
using namespace std;
void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
float retDiv(int a, int b);

int main()
{
    int a;
    int b;

    cout << "Give a number: " <<endl;
    cin >> a;
    cout << "Give an other number: " <<endl;
    cin >> b;

    // Call functions that print results directly
    calcSum(a,b);
    calcDiv(a,b);

    // Call function that returns the sum
    cout << a << " + " << b << " = " << retSum(a, b) << endl;

    // Call retDiv using try-catch
    try
    {
        float result = retDiv(a,b);
        cout << a << " / " << b << " = " << result << endl;
    }
    catch (runtime_error& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

// Prints the sum of two integers
void calcSum(int a, int b){
    int sum = a+b;
    cout << "Sum is " <<sum<<endl;
}

// Prints the quotient of two integers
// Displays an error message if the divisor is zero
void calcDiv(int a, int b){
    if(b==0){
        cout<<"The divisor cannot be zero."<<endl;
        }
    else{
        float quotient = a/b;
        cout << "quotient is " <<quotient << endl;
        }
}

// Returns the sum of two integers
int retSum(int a, int b)
{
    return a + b;
}

// Returns the quotient of two integers
// Throws an exception if the divisor is zero
float retDiv(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("The divisor cannot be zero.");;
    }

    return (float)a/b;
}
