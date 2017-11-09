/*
Finding the sum pair in sorted and rotated array...
*/


#include<iostream>
using namespace std;
bool binarytrue(int x[],int n,int search){
int beg=x[0];
int end=x[n-1];
int mid=(beg+end)/2;
while(x[mid]!=search && beg<end){
if(search>x[mid]){
beg=mid+1;
}
else if(search<x[mid]){
end=mid-1;
}
mid=(beg+end)/2;
}
if(search==x[mid]){
return true;
}
else{
return false;
}
}
int main(){
int arr[6]={3,4,5,6,1,2},p,q;
for(int i=0;i<6;i++){
int result=7-arr[i];
if(binarytrue(arr,6,result)){
p=arr[i];
q=result;
cout<<"( "<<p<<" "<<q<<" )"<<endl;
break;
}

}




return 0;
}
