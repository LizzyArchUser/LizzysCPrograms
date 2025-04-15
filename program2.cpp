#include <iostream>
using namespace std;
int DemoConsoleOutput();

int main()
{ 
    DemoConsoleOutput();

    return 0;


}

int DemoConsoleOutput()
{
    cout << "This is a simple string literal "  << endl;
    cout << "Writing number five... " << 5 << endl; 
    cout << "performing division 10 / 5 =  " << 10 / 5<< endl;
    cout << "pi when approximated is 22 divided by 7. 22 / 7 equals: " << 22 / 7 << endl; 
    cout << "pi more accurately is 22.0 (note the decimal point and 0!)  divided by 7 which equals " << 22.00 /7  << endl;

    return 0;
}