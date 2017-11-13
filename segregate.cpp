#include<bits/stdc++.h>
using namespace std;
int main(){
int size,c=0,arr[100];
cin>>size;

for(int i=0;i<size;i++){
cin>>arr[i];
if(arr[i]==0){
	c++;
}

}


for(int i=0;i<c;i++){
cout<<0<<" ";

}

for(int i=c;i<size;i++){
cout<<1<<" ";

}



	return 0;
}