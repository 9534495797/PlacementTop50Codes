#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//int main(){
//	char ch;
//	string str;
//	cin>>str>>ch;
//	
//	int count=0;
//	for(int i=0;i<str.length();i++){
//		if(str[i]==ch){
//			count++;
//		}
//	}
//	cout<<count;
//	
//}



//if u want to ignore case

int main(){
	char ch;
	string str;
	cin>>str>>ch;
	ch=tolower(ch);
	int count=0;
	for(int i=0;i<str.length();i++){
		if(tolower(str[i])==ch){
			count++;
		}
	}
	cout<<count;
	
}
