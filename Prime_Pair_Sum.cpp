#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

bool checkPrime(int);

int main()
{
    double n;
    char choice;
    bool flag;

    for(;;)
    {
        flag=false;
        cout << "\nPlease enter a positive integer number: ";

        //Takes a valid positive integer input
        for (;;)
        {
            //checks if input is a number and it is greater than 0 and it is an integer
            if (cin >> n && n>=0 && ceil(n)==n)
                break;
            else
            {
                cout << "\nInvalid input. Please enter a positive integer number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        //Checks whether the input number can be expressed as sum of two prime numbers
        for(int i=2;i<=n/2;i++)
        {
            if(checkPrime(i) && checkPrime(n-i))
            {
                cout << n << " = " << i << " + " << n-i << endl;
                flag = true;
            }
        }
        if(flag==false)
            cout << "\nThis number can not be expressed as sum of two prime numbers." << endl;

        //To continue or stop the code
        do
        {
            cout << "\nPlease enter 'q' to quit, else enter 'c' to continue: ";
            cin >> choice;
            if (choice == 'q')
                exit(0);
            else if (choice == 'c')
                continue;
            else
                cout << "\nInvalid input" << endl;
        }while(choice!='q' && choice!='c');
    }

    return 0;
}

//This function checks whether a given positive integer is prime number or not
bool checkPrime(int x)
{
    if (x<=1)
        return false;
    else if (x==2 || x==3)
        return true;
    else if (x%2==0 || x%3==0)
        return false;
    else
    {
        for(int i=5;i*i<=x;i=i+6)
        {
            if(x%i==0 || x%(i+2)==0)
                return false;
            else
                return true;
        }
    }
}
