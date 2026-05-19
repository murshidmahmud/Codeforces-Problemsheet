#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;

    int upper = 0, lower = 0;

    for(auto x:s){
        if(isupper(x)){
            upper++;
        }
        else{
            lower++;
        }
    }

    if(upper>lower){

        for(auto& x:s){
            x = toupper(x);
        }
    }
    else{
        for(auto& x:s){
            x = tolower(x);
        }
    }
    cout<<s;
    return 0;
}