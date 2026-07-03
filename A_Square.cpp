#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int x[4], y[4];
        int area;

        for(int i=0; i<4; i++){
            cin>>x[i] >>y[i];

            int maxY = *max_element(y, y+4);
            int minY = *min_element(y, y+4);

            int side = maxY-minY;

            area = side * side;
        }

        cout<< area <<endl;
    }
    return 0;
}