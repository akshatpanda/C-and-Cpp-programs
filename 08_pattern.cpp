#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    int k = 2;
    while(i<n*n){
        int j = 1;
        while(j<=n){
            if(k<10){
                if(j==1){
                    cout<<' '<<k;
                }
                else{
                    cout<<"  "<<k;
                }
            }
            else{
                if(j==1){
                    cout<<k;
                }
                else{
                    cout<<' '<<k;
                }
            }
            j = j + 1;
            i = i + 1;
            k = k + 2;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}