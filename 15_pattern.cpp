#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = n;
    int m = n;
    while(i>0){
        int j = i;
        int k = 1;
        int cd2 = 2*m-1;
        int cd1 = 2*n - cd2;
        while(k<=n){
            if(k%2==0){
                // cout<<j+cd1<<" ";
                if(j<10){
                    if(j==i){
                        cout<<j<<" ";
                    }
                    else{
                        cout<<" "<<j<<" ";
                    }
                }
                else{
                    cout<<j<<" ";
                }
                j = j + cd2;
            }
            else{
                if(j<10){
                    if(j==i){
                        cout<<j<<" ";
                    }
                    else{
                        cout<<" "<<j<<" ";
                    }
                }
                else{
                    cout<<j<<" ";
                }
                j = j + cd1;
            }
            k = k + 1;
        }
        cout<<endl;
        i = i - 1;
        m = m - 1;
    }
    cout<<endl;
    return 0;
}