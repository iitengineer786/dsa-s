#include <bits/stdc++.h>

using namespace std;

int main()
{
int arr[100],size,dp[100];
cin>>size;
for(int i=0;i<size;i++){

cin>>arr[i];

}
int p=0;
sort(arr,arr+size);
for(int i=0;i<=size/2;i++){
dp[p]=arr[size-i-1];
p++;
dp[p]=arr[i];
p++;

}
int sum=0;
for(int i=0;i<size-1;i++){
sum+=abs(dp[i]-dp[i+1]);
}
sum+=abs(dp[size-1]-dp[0]);



cout<<sum;








    return 0;
}
