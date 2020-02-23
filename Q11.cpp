#include<iostream>
using namespace std;
void factorial(){
	int n;
	cout<< "Enter the Number for Factorial :";
	cin>>n;
	cout<<"the factors of "<< n <<" is :";
	int fact=1;
	for(int i=1;i<=n;i++ ){
		fact=fact*i;
	}
	cout<<fact;
}
int main(){

	factorial();
	return 0;	
}

