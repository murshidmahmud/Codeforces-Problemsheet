#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int x;
        cin>>x;

        int num1 = x/1000;
        int num2 = x%1000;
        
        int y,y1,y2;
        //y = num1/100; y1=(num1/10)%10; y2 = num1%10;
        int z,z1,z2;
        //z = num2/100; z1=(num2/10)%10; z2=num2%10;
        
        y= (num1/100)+((num1/10)%10)+(num1%10);
        z= (num2/100)+((num2/10)%10)+(num2%10);

        //int sum1 = y+y1+y2;
        //int sum2 = z+z1+z2;

        if(y==z){
            cout<<"YES" <<endl;
        }else{
            cout<<"NO" <<'\n';
        }
    }
    return 0;
}