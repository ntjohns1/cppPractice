#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cout << "enter n";
    cin>>n;
    for (i = 1; i <= 10; i++)
    {
        cout<<n<<"x"<<i<<"="<<i*n;
        cout<<endl;
    }
}