#include<iostream>
using namespace std;


int main(){
	int size;
	cout<<"enter the size of array :";
	cin>>size;
		int array[size];
	cout<<"Enter Array elements:";
	for(int i=0; i<size; i++){
		
			cin>>array[i];	
		}
	
	cout<<"Displaying Array Elements....\n";
	for(int i =0; i< size; i++){
		
			cout <<array[i]<< " "; 
		
		
	}
		
}

