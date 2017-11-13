#include<iostream>
using namespace std;
# define n 9
int main(){
int arr[n]={12 ,11 ,-13 ,-5 ,6 ,-7 ,5 ,-3 ,-6};
int p=0;
for(int i=0;i<n;i++){
	if(arr[i]<0){

		int temp=arr[p];
		arr[p]=arr[i];
		arr[i]=temp;
		p++;
	}
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";

}


	return 0;
}