#include<iostream>
#define MAXSIZE 5
using namespace std;
 
class Queue{
private:
	int queue[MAXSIZE];
	int front, rear;
public:
	Queue(){
		front = 0;
		rear = 0;
	}
	bool isFull(){
		if(rear == MAXSIZE){
			cout << "Queue Overflow" << endl;
			return false;
		}
		return true;
	}
	bool isEmpty(){
		if (front == rear ){
			cout << "Queue underflow" << endl;
			return false;
		}
		return true;
	}
	void insert( int data){
		if(isFull()){
			queue[rear++]= data;
		}
	}
	void del(){
		if(isEmpty()){
			int data = queue[front];
			front++;
			cout << data<< " is deleted"<<endl;
		}

	}
	void display(){
		cout << "Members in queue are: " << endl;
		for( int i =front ; i<rear; i++){
			cout << queue[i] << endl;
		}
	}
};

int main(){
	Queue queue;
	int data;
	int choice;

	cout<< "Select any option"<<endl;
	while(1){
		cout << endl;
		cout << "1. Insert into queue" << endl;
		cout << "2. Delete from queue" << endl;
		cout << "3. Show all elements form queue" << endl;
		cout << "4. Exit" << endl;
		cin >> choice;
		switch(choice){
			case 1:
			cout << "Enter data to insert" << endl;
			cin >> data;
			queue.insert(data);
			break;

			case 2:
			queue.del();
			break;

			case 3: 
			queue.display();
			break;

			case 4:
			exit(0);
			break;

			default :
			cout<< "Enter number from 1 to 4"<< endl;
			break;
		}
	}
}