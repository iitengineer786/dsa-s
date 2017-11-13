#include<iostream>
using namespace std;
int main()
{
int x[6]={1,2,3,4,5,6};
int k1;
cin>>k1;
int result=k1%6;
while(result>0){
	int temp=x[0];
for(int i=0;i<5;i++){

	x[i]=x[i+1];
}
x[5]=temp;

result--;
}

for(int i=0;i<6;i++){
	cout<<x[i]<<" ";
}





	return 0;
}