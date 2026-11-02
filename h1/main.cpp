#include <iostream>

using namespace std;
int calcSum(int a, int b);
int calcDiv(int a, int b);

int main()
{
    int a;
    int b;
    int sum;
    int quotient;
    cout << "Give a number: " <<endl;
    cin >> a;
    cout << "Give an other number: " <<endl;
    cin >> b;
    sum=calcSum(a,b);
    quotient=calcDiv(a,b);
    cout << "Sum is " <<sum<<endl<< "quotient is " <<quotient << endl;
    return 0;
}

int calcSum(int a, int b){
    return a+b;
}


int calcDiv(int a, int b){
    return a/b;
}
