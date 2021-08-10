#include <iostream>
#include <string>
using namespace ::std;
int main()
{
    string date;
    cout << "Hello world!!!" << endl;
    cout << "Enter the date in this format: MM/DD/YYYY" << endl;
    getline(cin, date);
    cout << "Date: " << date << " " << endl;
    return 0;
}
