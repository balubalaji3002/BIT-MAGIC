#include<iostream>
using namespace std;
using namespace std;
int main()
{
    int a[]={10,20,30};
    int flag=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int num=0;num<(1<<n)-1;num++)
    {
        int sum=0;
        for(int bit=0;bit<n;bit++)
        {
            if(num&(1<<bit)){
                sum+=a[num];
            }
            else{
                sum-=a[num];
            }
        }
        if(sum%360==0){
            flag++;
            break;
        }
    }
    if(flag!=0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
    
}
