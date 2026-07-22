#include<bits/stdc++.h>
using namespace std;

void upscaling(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string raw ="";
        for(int j=0; j<n; j++){
            
            if((i+j)%2==0){
                raw +="##";
            }
            else{
                raw+="..";
            }
        }
        cout<< raw <<endl;
        cout<< raw <<endl;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        upscaling();
    }
    return 0;
}