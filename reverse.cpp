#include<iostream>
using namespace std;
int main(){
int arr[6]={4,5,6,1,2,3},i;
for(i=0;i<3;i++){
int temp=arr[i];
arr[i]=arr[5-i];
arr[5-i]=temp;

}
for(i=0;i<6;i++){
cout<<arr[i]<<endl;
}


	return 0;
}