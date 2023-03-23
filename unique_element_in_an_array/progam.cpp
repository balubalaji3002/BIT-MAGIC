#include<iostream>
using namespace std;
//find the number repeating only once except every element in the array repeating twice
//
int main()
{
    int arr[]={1,2,3,4,5,6,7,7,9,6,5,4,3,2,1};
    int res=0;
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    cout<<res;
  return 0;
}
