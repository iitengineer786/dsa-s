#include<iostream>
using namespace std;
int main(){
int arr[6]={11,33,56,76,23,112},dp1[100],dp2[100],dp3[100];
int a,b,c,i;
cin>>a>>b;
int p=0,q=0,r=0;
for(i=0;i<6;i++){
	if(arr[i]<=a){

		dp1[p]=arr[i];
		p++;
	}


	else if(arr[i]>a && arr[i]<b ){

		dp2[q]=arr[i];
		q++;
	}

	else if(arr[i]>=b){

		dp3[r]=arr[i];
		r++;
	}
}

for(i=0;i<p;i++){
	cout<<dp1[i]<<" ";
}
for(i=0;i<q;i++){
	cout<<dp2[i]<<" ";
}
for(i=0;i<r;i++){
	cout<<dp3[i]<<" ";
}






	return 0;
}