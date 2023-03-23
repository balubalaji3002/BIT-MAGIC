#include<iostream>
using namespace std;
int main()
{
    int a=5,b=7;
    cout<<"a--"<<a<<"  b--"<<b<<endl;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<"a--"<<a<<endl<<"  b--"<<b;
  return 0;
}
