#include<iostream>
using namespace std;
int main(){
	int item;
	cout<<"Enter the size of an Array: "<<endl;
	int n;
	cin>>n;
	cout<<"Enter the Elements into the Array: "<<endl;
	int arr[100];
	for(int i=1;i<=n;i++)
	cin>>arr[i];
	for(int i=1;i<=n;i++)
	cout<<"\t"<<arr[i];
	cout<<endl<<"Enter the position to delete an Element From the Array : From 1 to "<<n<<endl;
	int p;
	cin>>p;
	if(p>n){
		cout<<"Invalid option"<<endl;
	}else{
		item=arr[p];
		for(int i=p;i<n;i++)
		arr[i]=arr[i+1];
		n=n-1;
		cout<<"After Deletion"<<endl;
		for(int i=1;i<=n;i++)
		cout<<"\t"<<arr[i];
	}
	return 0;
}
