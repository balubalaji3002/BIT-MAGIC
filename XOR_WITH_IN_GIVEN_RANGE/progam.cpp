#include<iostream>
using namespace std;
int find(int n)
{
    if(n%4==0)
    {
        return n;
    }
    else if(n%4==1)
    {
        return 1;
    }
    else if(n%4==2)
    {
        return n+1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    int start=4,end=10;
    cout<<find(end)-find(start-1);
    return 0;
    
}
