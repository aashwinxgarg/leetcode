#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n=2100,dup=n;
    int ans=0,i=1;
        while(n!=0){
            int a=n%2;
            ans=ans+a*i;
            i=i*10;
            n/=2;
        }
        cout<<ans<<endl;
        // return ans;
        int an=0,j=1;
        while(ans!=0){
            int a=ans%10;
            if(a&1){
                an=an+0*j;
            }
            else{
                an=an+1*j;
            }
            j*=10;
            ans/=10;
        }
        cout<<an<<endl;
        // return an;
        int ak=0,k=0;
        while(an!=0){
            int b=an%10;
            ak=ak+b*pow(2,k);
            k++;
            an/=10;
        }
        cout<<ak<<endl;
        
        // if(ak<INT_MIN | ak>INT_MAX){
        //     return 0;
        // }
        //if(ak==0){
        //    cout<<1<<endl;
        //}else{
        if(dup==0){
            cout<<"1";
        }else{
        cout<<ak<<endl;
        }
        //}
  
}