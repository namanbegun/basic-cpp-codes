// MAHASENA CODECHEF

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lcnt=0,unluccont=0;
    for(int j=0;j<n;j++){
        if(arr[j]%2==0)
            lcnt++;
        else
            unluccont++;    
    }
    if(lcnt>unluccont){
        cout<<"READY";
    }
    else
        cout<<"NOT READY";
     
    return 0;
}