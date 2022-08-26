//Naman Verma
//2010990472
//04
//Q-1

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int mI=n;
	unordered_set<int> s;
	for(int i=n-1;i>=0;i--){
		if(s.find(arr[i])!=s.end()){
			mI=i;
		}
		else{
			s.insert(arr[i]);
		}
	}
	if(mI==n){
		cout<<"Invalid Input";
	}
	else{
		cout<<"The minimum index of repeating element is "<<mI;	
	}
	
	
	return 0;
}