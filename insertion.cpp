#include<iostream>
using namespace std;
int main(){
	int a[10],i,n,ele,p;
	cout<<"How many Elements: "<<endl;
	cin>>n;
	cout<<"Enter the elements: "<<endl;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	cout<<"Enter the Element to be inserted"<<endl;
	cin>>ele;
	cout<<"Enter the position 0 to "<<n-1;
	cin>>p;
	if(p>n)
	cout<<"Invalid position";
	else{
		for(i=n-1;i>=p;i--)
		a[i+1]=a[i];
		a[p]=ele;
		n=n+1;
		cout<<"The Elements after the Insertion are ";
		for(int i=0;i<n;i++)
		cout<<"\t"<<
		a[i];
	}
}
