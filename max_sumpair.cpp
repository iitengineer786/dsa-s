#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int arr[6]={8,3,1,2};
int sum1=0,dp[100];
int sum=0,i,maxi;
for(int i=0;i<4;i++){
sum=sum+arr[i];
}
for(int i=0;i<4;i++){
sum1=sum1+i*arr[i];
}
int result=sum1;

int s=0;
dp[s]=result;


for(i=1;i<4;i++){
	int value1=sum1-(sum-arr[i-1])+(3)*arr[i-1];
	sum1=value1;
	dp[++s]=value1;
	
}

for(s=0;s<4;s++){
	cout<<dp[s]<<endl;
}



return 0;
}