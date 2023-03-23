/*  ---------------BRUTEFORCE--------------------------
          int main() {
           int n=6,res;
            for(int i=0;i<n;i++) {
                res=res^i;
            }
            cout<<res;
            return 0;
        }
*/
//-----------EFFICIENT------------------------
#include<iostream>
using namespace std;
int main(){
int n=10,res;
    if(n%4==0) {
        cout<<n<<endl;
    }
    else if(n%4==1) {
        cout<<1<<endl;
    }
    else if(n%4==2) {
        cout<<n+1<<endl;
    }
    else{
        cout<<0<<endl;
    }
  return 0;
}
