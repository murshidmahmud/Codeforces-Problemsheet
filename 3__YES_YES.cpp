#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    /*int i=1;
    while(i<t){
        string s;
        cin>>s;
        i++;

        if(s=="YES" || s=="yES" || s=="YeS" || s=="YEs" || s=="yes" || s=="Yes" || s=="yEs" || s=="yeS")
        cout<<"YES" <<"\n";

        else
        cout<<"NO" <<endl;
    }*/

    for(int i=0; i<t; i++){
        string s;
        cin>>s;

        if(s=="YES" || s=="yES" || s=="YeS" || s=="YEs" || s=="yes" || s=="Yes" || s=="yEs" || s=="yeS")
        cout<<"YES" <<endl;

        else
        cout<<"NO" <<endl;
    }

    
}