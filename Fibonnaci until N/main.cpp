#include <iostream>
#include <vector>

using namespace std;

//Finding the nth element of the fibonacci sequence with n number given by the user//


int Fibonacci(int &n)
{
     if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    vector<int> fib_sequence(n+1);
    fib_sequence[0] = 0;
    fib_sequence[1] = 1;

    for(int i=2;i<=n;i++)
    {
        fib_sequence[i]=fib_sequence[i-1]+fib_sequence[i-2];
    }

    return fib_sequence[n];

}


int main()
{
    int n;
    cout << "Enter the index of the Fibonacci Series that you want to see:";
    cin >> n;
    cout << endl;
    int fib_number = Fibonacci(n);
    cout << "The desired number at the given position:" << fib_number << endl;
    return 0;


}
