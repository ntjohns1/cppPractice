#include <iostream>
using namespace std;

int main()
{
 int A[10], n=10, key, i;


cout<<"enter numbers";

 for (int i = 1; i < n; i++)
 {
     cin>>A[i];
 }
 cout<<"Enter Key";
 cin>>key;
 for (i = 0; i < n; i++)
 {
     if (key == A[i])
     {
         cout<<"found at "<<i<<endl;
     }
 }
     cout<<"not found";
}