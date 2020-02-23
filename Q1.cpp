#include<iostream>
using namespace std;

void findEqual(int a,int b){
	if(a^b)
	
		cout<<"THE NUMBERS ARE NOT EQUAL";
	else
		cout<<"THE NUMBERS ARE EQUAL";
}
int main(){
	findEqual(100,100);
}
