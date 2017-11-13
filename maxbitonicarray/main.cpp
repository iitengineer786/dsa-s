#include <bits/stdc++.h>
using namespace std;
int bitonic(int s[],int n){
int inc[n];
int dec[n];
inc[0]=1;
dec[n-1]=1;
for(int i=1;i<n;i++){
if(s[i]>=s[i-1])
{
inc[i]=inc[i-1]+1;
}
else{
inc[i]=1;
}

}

for(int i=n-2;i>=0;i--){
if(s[i]>=s[i+1])
{
dec[i]=dec[i+1]+1;
}
else{
dec[i]=1;
}
}
int maxi=inc[0]+dec[0]-1;

for(int i=0;i<n;i++){
if((inc[i]+dec[i]-1)>maxi){
maxi=inc[i]+dec[i]-1;
}
}


return maxi;






}
int main()
{
    int arr[100],size;
    cin>>size;
    for(int i=0;i<size;i++){
    cin>>arr[i];
    }
int length=bitonic(arr,size);
cout<<"Length is "<<length;


    return 0;
}
