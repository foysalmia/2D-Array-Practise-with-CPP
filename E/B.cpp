
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Major diagonal: ";
    for(int i=0;i<n;i++){
        cout<<a[i][i]<<" ";
    };
    cout<<endl<<"Minor diagonal: ";
    for(int i=0;i<n;i++){
        cout<<a[i][n-1-i]<<" ";
    };
    return 0;
}
