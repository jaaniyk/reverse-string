#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n],sum=0;
	float avr;
	cout<<"Enter the Array size =";
	cin>>n;
	cout<<"Enter Array Elements :\n" ;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<"Number ="<<arr[i]<<endl;
		sum=sum+arr[i];
	}
	avr=sum/n;
	cout<<"sum of Array Element is ="<<sum<<endl;
	cout<<"Average of Array Element is ="<<avr;
	return 0;
}
