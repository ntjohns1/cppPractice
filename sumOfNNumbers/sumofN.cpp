#include <iostream>

using namespace std;

int main()
{
    int n, i, sum=0;
    cout<<"enter n";
    cin>>n;
    for (i = 1; i <=n; i++)
    {
        sum+=i;
    }
    cout<<"sum of n numbers = "<<sum<<endl;
    return 0;
}