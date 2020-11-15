#include<iostream>
using namespace std;
int main(){
		int a[30];
	cout<<"Enter the size of an array: "<<endl;
	int n;
	cin>>n;
	cout<<"Enter the Array Element : "<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the position to delete the element : "<<endl;
	 int p;
	 cin>>p;
	 if(p>n){
	 	cout<<"Invalid number"<<endl;
	 }else{
	 int i;
	 for(i=p;i<n;i++){
	 	a[i]=a[i+i];
	 }
	 for(int i=0;i<n-1;i++){
	 	cout<<"\t"<<a[i];
	 }
}
}
