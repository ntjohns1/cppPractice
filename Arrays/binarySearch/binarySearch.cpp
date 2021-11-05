#include <iostream>
using namespace std;

int main()
{
    int A[10] = {6, 9, 13, 18, 20, 24, 29, 33, 37, 39};
    int l = 0, h = 9, key, mid;
    cout << "enter key ";
    cin >> key;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            cout << "found at " << mid<<endl;
            return 0;
        }
        else if (key < A[mid])
            h = mid - l;
        else
            l = mid + l;
    }
    cout << "not found"<<endl;
    return 0;
}