#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1[6]={1,2,3,4,5,6};
    //descending order
    //sort(a1,a1+6,greater<int>());
    //ascending order
    sort(a1,a1+6);
for(int i=0;i<3;i++){
cout<<a1[5-i]<<" ";
cout<<a1[i]<<" ";
}





    return 0;}
