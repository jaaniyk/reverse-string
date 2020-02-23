#include<iostream>
using namespace std;
int factorial(int n){
	cout<<"the factors of "<< n <<" is :";
	int fact=1;
	for(int i=1;i<=n;i++ ){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int f;
	cout<< "Enter the Number for Factorial :";
	cin>>f;
  	int NoFact=factorial(f);
	  cout<<NoFact<<endl;
	  return 0;	
}

