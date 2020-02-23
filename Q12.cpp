#include<iostream>
using namespace std;

void zero_small(int &x,int &y){
	if(x<y)
		x=0;
	else
		y=0;
	
}
int main(){
	int a,b;
	cout<<"Enter Two numbers :\n";
	cin>>a>>b;
	zero_small(a,b);
	cout<<"First number is  :"<<a<<endl;
	cout<<"second number is :"<<b;
	
}
