#include<iostream>
using namespace std;
int main(){
	int p,r,t;
	cout<<"Enter Principle Amount :";
	cin>>p;
	cout<<"Enter Rate per year :";
	cin>>r;
	cout<<"Enter time in years :";
	cin>>t;
	float SI=p*r*t/100;
	cout<<"Simple Interest is :"<<SI<<endl;
}
