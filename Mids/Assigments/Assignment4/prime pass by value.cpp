#include <iostream>
using namespace std;
void prime(int num)
{
    int i;
    for (i = 2; i <= num / 2 && num % i != 0; i++)
    {
    }
    if (i > num / 2)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    prime(num);
}