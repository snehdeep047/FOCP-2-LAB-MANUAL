/*Q16. A cybersecurity tool verifies prime numbers used in encryption keys. 
Implement a solution to accept a number and check whether it is prime. */

#include<iostream>
using namespace std;

int main()
{
    int num, i, count = 0;

    cout<<"Enter a number: ";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
        cout<<"Number is Prime";
    else
        cout<<"Number is Not Prime";

    return 0;
}