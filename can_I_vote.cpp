#include <iostream>

using namespace std;

int main()
{
    cout << "Hello !! Let's find if you are eligible to vote. Please hit the 'Enter' key every time after entering your choice." << endl;
    char choice1, choice2, choice3;
    for(;;)
    {
        cout << "\nAre you an Indian citizen? (Please enter y for yes / n for no) : ";
        cin >> choice1;
        if (choice1 == 'y')
        {
            cout << "\nHave you crossed the age of 18? (Please enter y for yes / n for no) : ";
            cin >> choice2;
            if (choice2 == 'y')
            {
                cout << "\nDo you have a valid Voter ID card? (Please enter y for yes / n for no) : ";
                cin >> choice3;
                if (choice3 == 'y')
                {
                    cout << "\nYES. You are eligible to vote." << endl;
                }
                else if (choice3 == 'n')
                {
                    cout << "\nYou are eligible to vote. But, please get a valid Voter ID card first, else you will no be able to vote." << endl;
                }
                else
                {
                    cout << "\nInvalid input ..." << endl;
                }
            }
            else if (choice2 == 'n')
            {
                cout << "\nSorry. You are not eligible to vote." << endl;
            }
            else
            {
                cout << "\nInvalid input ..." << endl;
            }
        }
        else if (choice1 == 'n')
        {
            cout << "\nSorry. You are not eligible to vote." << endl;
        }
        else
        {
            cout << "\nInvalid input ..." << endl;
        }

        do
        {
            cout << "\nPlease enter 'q' to quit, else enter 'c' to continue: ";
            cin >> choice2;
            if (choice2 == 'q')
            {
                exit(0);
            }
            else if (choice2 == 'c')
            {
                continue;
            }
            else
            {
                cout << "Invalid input" << endl;
            }
        }while(choice2!='q' && choice2 !='c');
    }

    return 0;
}
