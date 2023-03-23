#include<iostream>
using namespace std;
int main()
{
    int n=13,i=3;
    if(n&(1<<i)!=0)
    {
        cout<<i<<"th bit of number "<<n<<" is setbit";
    }
    else{
        cout<<i<<"th bit of number "<<n<<" is not setbit";
    }
    return 0;	
    
}
