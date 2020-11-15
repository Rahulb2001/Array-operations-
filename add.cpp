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
	cout<<"enter the position to add the element : from 1 to "<<n<<endl;
	 int p;
	 cin>>p;
	 cout<<"Enter the Element to be added: "<<endl;
	 int ele,i;
	 cin>>ele;
	 for(i=n-1;i>=p;i--){
	 	a[i+1]=a[i];
	 }
	 a[p]=ele;
	 for(i=0;i<=n;i++)
	 cout<<"\t"<<a[i];
}
	 
