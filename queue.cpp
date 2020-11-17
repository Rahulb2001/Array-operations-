#include<iostream>
using namespace std;
int q[100],n=100;
int front=-1,rear=-1;
void enq(){
	cout<<"Enter the Data"<<endl;
	int x;
	cin>>x;
	if(rear==n-1){
		cout<<"Overflow"<<endl;
	}else if(front ==-1&&rear==-1){
		front=rear=0;
		q[rear]=x;
	}
	else{
		rear++;
		q[rear]=x;
	}
}
void deq(){
	if(front==-1&&rear==-1){
		cout<<"Queue is Empty"<<endl;
	}else if(front==rear){
		front=rear=-1;
	}else{
		cout<<q[front];
		front++;
	}
}
void display(){
	if(front==-1&&rear==-1){
		cout<<"Queue is Empty"<<endl;
	}else{
		for(int i=front;i<=rear;i++){
			cout<<"\t"<<q[i];
		}
	}
}
/*void peek(){
	if(front==-1&&rear==-1)
	{
		cout<<"\t"<<q[front]<<endl;
	}
}*/
int main(){
	while(1){
	int c;
	cout<<endl<<"1.Enqueue"<<endl;
	cout<<"2.Dequeue"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"4.Peek"<<endl;
	cin>>c;
	if(c==1){
		enq();
	}else if(c==2){
		deq();
	}else if(c==3){
		display();
	//else if(c==4){
		//peek();
	}else{
		exit(0);
	}}
	return 0;
}
