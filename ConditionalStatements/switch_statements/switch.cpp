#include <iostream>

using namespace std;

int main()
{
    int day;
    cout<<"enter day no";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Mon"<<endl;
        break;
    case 2:
        cout<<"Tues"<<endl;
        break;
    case 3:
        cout<<"Wed"<<endl;
        break;
    case 4:
        cout<<"Thu"<<endl;
        break;
    case 5:
        cout<<"Fri"<<endl;
        break;
    case 6:
        cout<<"Sat"<<endl;
        break;
    case 7:
        cout<<"Sun"<<endl;
        break;
    
    default: cout<<"invalid day";
        break;
    }
}