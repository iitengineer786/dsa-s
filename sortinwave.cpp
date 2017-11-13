#include<iostream>
using namespace std;
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int i,j,k,l;
	for(i=0;i<7;i++){
		for(j=0;j<=5-i;j++){
			if(arr[j+1]<arr[j]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
		}
	}

	for(i=0;i<7;i++){
		if(i%2!=0){
			int temp=arr[i-1];
			arr[i-1]=arr[i];
			arr[i]=temp;
			
		}
	}


	for(i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}

	

	return 0;
}