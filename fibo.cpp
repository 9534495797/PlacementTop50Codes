#include<iostream>
using namespace std;
//int main(){
//	int num;
//	cin>>num;
//	int a=0;
//	int b=1;
//	cout<<a<<" "<<b<<" ";
//	for(int i=2;i<num;i++){
//		int c=a+b;
//		a=b;
//		b=c;
//		cout<<c<<" ";
//	}
//	
//}



int main(){
	int num;
	cin>>num;
	int a=0;
	int b=1;
	if(a<=num){
		cout<<a<<" ";
	}
	if(b<=num){
		cout<<a<<" "<<b<<" ";
	}
	int c=a+b;
	while(c<=num){

		cout<<c<<" ";
			a=b;
		b=c;
			c=a+b;
		
	}
}
