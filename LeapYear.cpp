#include<iostream>
using namespace std;

int main(){
	int year;
	cin>>year;
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				cout<<"yes "<<year<<" is a leap year";
			}else{
				cout<<"not a leap year";
			}
			
		}else{
			cout<<"yes a leap year";
		}
	}else{
		cout<<"not a leap year";
	}
}
