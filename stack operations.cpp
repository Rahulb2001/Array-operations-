#include<iostream>
using namespace std;
int x,stack[5],top=-1,n=5;
void push(){
	cout<<"Enter the Data: "<<endl;
	cin>>x;
	if(top==n-1){
		cout<<"Overflow"<<endl;
	}else{
		top++;
		stack[top]=x;
	}
}
void pop(){
	int item;
	if(top==-1){
		cout<<"Underflow"<<endl;
	}else{
		item=stack[top];
		top--;
		cout<<"The poped item is: "<<item<<endl;
	}
	
}
void peek(){
	if(top==-1){
		cout<<"Stack is empty"<<endl;
	}else{
		cout<<"The peek item is : "<<stack[top]<<endl;
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		cout<<stack[i]<<"\t";
	}
	cout<<endl;
	
}

int main(){
	while(1){
     int c;
     cout<<endl<<"1.Push"<<endl;
     cout<<"2.Pop"<<endl;
     cout<<"3.Peek"<<endl;
     cout<<"4.Display"<<endl;
     cout<<"5.Exit"<<endl;
     cin>>c;
     cout<<"__________________________"<<endl;
     if(c==1){
     	push();
	 }else if(c==2){
	 	pop();
	 
	 }else if(c==3){
	 	peek();
	
	 }else if(c==4){
	 	display();
	 
	 }else if(c==5){
	 	exit(0);
	 }}
	return 0;
}
