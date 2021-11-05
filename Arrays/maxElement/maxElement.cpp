#include <iostream>
using namespace std;

int main()
{
 int A[7] = {5,7,9,2,3,5,6};
 int n = 7, max;

 max = A[0];

 for (int i = 1; i < 7; i++)
 {
     if (A[i]>max)
     {
         max=A[i];
     }
 }
 cout<<"Max number is: "<<max<<endl;
}