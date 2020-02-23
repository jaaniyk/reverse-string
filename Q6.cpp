#include<iostream>
#include<cstring>

using namespace std;

void reverse(char* a){
	char *begin,*end;
	int length =strlen(a);
	begin=a;
	end=a;
	for(int s=0;s<length-1;s++){
		end++;
	}
	for(int s=0;s<length/2;s++){
		char temp=*end;
		*end=*begin;
		*begin=temp;
		begin++;
		end--;
	}
}
int main(){
	char a[50];
	cout<<"enter a string \n";
	cin>>a;
	reverse(a);
	cout<<"Reverse of the string is :\n"<<a;
	return 0;
}
