#include<iostream>
using namespace std;
using namespace std;
int main()
{
    int a[]={3,2,4};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<(1<<n)-1;i++)
    {
        vector<int>lst ;
        for(int bit=0;bit<n;bit++)
        {
            if(i&(1<<bit)){
                lst.push_back(a[bit]);
            }
        }
        for(auto it: lst){
            cout<<it<<" ";
        }
        cout<<endl;
    } 
    return 0;
}
