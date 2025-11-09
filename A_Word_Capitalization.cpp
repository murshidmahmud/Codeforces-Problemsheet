#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;

    char t = s[0];
    s[0] = toupper(t);
    cout<<s <<endl;
    
    return 0;
}