#include<iostream>
using namespace std;
int main(){
int arr[6]={4,5,6,1,2,3};
int mini=arr[0],p,i;
for(i=1;i<6;i++){
	if(mini>arr[i]){
		mini=arr[i];
		p=i;
	}
}
cout<<(p)<<endl;



	return 0;
}