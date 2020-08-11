#include<iostream>
using namespace std;

int main()
{
    int n=5;
    float num_array[n], *num_pointer;
    num_pointer = num_array;
    cout << "Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> num_array[i];
    }
    cout << "You entered: ";
    for(int i=0;i<n;i++)
    {
        cout << *num_pointer << endl;
        num_pointer++;
    }
    return 0;
}
