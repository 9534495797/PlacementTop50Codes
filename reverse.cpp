#include<iostream>
using namespace std;
int main(){
	


	int num;
	cin>>num;
	int rem;
	int rev=0;
	while(num!=0){
		 rem=num%10;
	 rev=rev*10+rem;
		num/=10;
	}
	cout<<rev;
	
}
