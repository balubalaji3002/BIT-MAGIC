#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,6,7,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=temp^a[i];
    }
    int pos=0;
    while(temp){
        if(temp&pos){
            break;
        }
        pos++;
        temp=temp>>1;
    }
    
    int n1=0,n2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]&(1<<pos)){
            n1=n1^a[i];
        }
        else{
            n2=n2^a[i];
        }
    }
    cout<<n1<<"  "<<n2;
    return 0;
}
