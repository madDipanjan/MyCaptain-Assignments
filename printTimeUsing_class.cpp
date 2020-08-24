#include<iostream>
#include<limits>
#include<cmath>
#include <iomanip>
using namespace std;

class show_time
{
private:
    float hours, minutes, seconds;
public:

    // For taking the inputs
    void takeInput();

    // For displaying the out put
    void displayTotalTime();
};

void show_time::takeInput()
{
    cout << "Enter time:\n";
    cout << "Hours? ";
    for (;;)
    {
        //checks if input is a number and it is greater than 0 and it is an integer
        if (cin >> hours && hours>=0 && ceil(hours)==hours)
            break;
        else
        {
            cout << "\nInvalid input. Please enter a positive integer value: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    cout << "Minutes? ";
    for (;;)
    {
        //checks if input is a number and it is greater than 0 and it is an integer
        if (cin >> minutes && minutes>=0 && minutes<=60 && ceil(minutes)==minutes)
            break;
        else
        {
            cout << "\nInvalid input. Please enter an integer value between 0 and 60 ... ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    cout << "Seconds? ";
    for (;;)
    {
        //checks if input is a number and it is greater than 0 and it is an integer
        if (cin >> seconds && seconds>=0 && seconds<=60 && ceil(seconds)==seconds)
            break;
        else
        {
            cout << "\nInvalid input. Please enter an integer value between 0 and 60 ... ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

void show_time::displayTotalTime()
{
    cout << "\nThe time is = " << setw(2) << setfill('0') << hours << ":"
                               << setw(2) << setfill('0') << minutes << ":"
                               << setw(2) << setfill('0') << seconds << endl;

    cout << "Time in total seconds: " << hours*3600+minutes*60+seconds << endl;
}

int main()
{
    char choice;
    for(;;)
    {
        show_time time_1;
        time_1.takeInput();
        time_1.displayTotalTime();

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
