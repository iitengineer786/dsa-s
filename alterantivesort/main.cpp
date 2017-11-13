#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[100],size;
cin>>size;
for(int i=0;i<size;i++){

	cin>>arr[i];
}
sort(arr,arr+size,greater<>());
if(size%2!=0){
for(int i=0;i<size/2;i++){
cout<<arr[i]<<" "<<arr[size-i-1]<<" ";}
cout<<arr[(size)/2];

}

else{

for(int i=0;i<size/2;i++){
cout<<arr[i]<<" "<<arr[size-i-1]<<" ";}

}



	return 0;
}
