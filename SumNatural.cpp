#include<iostream>
using namespace std;
//int main(){
//	int num;
//	cin>>num;
//	int sum=0;
//	for(int i=0;i<=num;i++){
//		sum+=i;
//	}
//	cout<<sum;
//}



//using recurstion

int sumnatural(int n){
	if(n==0){
		return 0 ;
	}
	else{
		return n+sumnatural(n-1);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<sumnatural(n);
}
