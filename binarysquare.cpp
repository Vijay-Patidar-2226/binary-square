#include <iostream>
using namespace std;

int squareroot(int);
int main()
{
    int n ;
    cout<<"enter element";
    cin>>n;
    int ans = squareroot(n);
    cout <<"the square of "<< n <<" is :" << ans << "\n";
    return 0;
}

int squareroot(int n) {
    int start = 1, end = n;
    //Binary search on the answers:
    int mid = (start + end) / 2;
    while (start <=end) {
        
        int val = mid * mid;
        if (val <= n) {
            //eliminate the left half:
            start = mid + 1;
        }
        else {
            //eliminate the right half:
            end= mid - 1;
        }
         mid = (start + end) / 2;
    }
    return end;
}

