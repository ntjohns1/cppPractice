#include <iostream>
using namespace std;

int main()
{
 int A[7] = {5,7,9,2,3,5,6};
 int n = 7, sum = 0;

 for (int i = 0; i < 7; i++)
 {
     sum=sum+A[i];
 }
 cout<<"Sum of A = "<<sum<<endl;
}