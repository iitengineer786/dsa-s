/*
By: Keshav Gupta


Here it is used to find the index of element in the rortated array.
first find the pivot point 
then divide the arry on the baxis of piovot point and folow as per instructions...
*/
int findpivot(int x[],int n){
int length=n;
for(int i=0;i<length-1;i++){
if(x[i+1]<x[i]){
return i;
}

}

}


#include<iostream>
using namespace std;
int main(){
int x[5]={3,4,5,1,2},search;
int pivot_index=findpivot(x,5);
//int pivot_index=2;

cin>>search;
if(search>=x[0]){
int beg=0;
int end=pivot_index;
int mid=(beg+end)/2;
while(x[mid]!=search && beg <end){
if(search>x[mid]){
beg=mid+1;
}
else{
end=mid-1;

}

mid=(beg+end)/2;

}

cout<<mid;

}
else{
int beg=pivot_index+1;
int end=4;
int mid=(beg+end)/2;
while(x[mid]!=search && beg <end){
if(search>x[mid]){
beg=mid+1;
}
else{
end=mid-1;

}

mid=(beg+end)/2;

}

cout<<mid;





}



return 0;
}
