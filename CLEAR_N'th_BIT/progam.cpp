#include<iostream>
using namespace std;
int main()
{
    int n=7,i=1;
    int t=1<<i;
    t=~t;
    n=n &t;
    cout<<n;
}
