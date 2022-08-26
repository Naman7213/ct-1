//Naman Verma
//2010990472
//04
//Q-2

#include<bits/stdc++.h>
using namespace std;


pair<int,bool> is_consecutive(int arr[],int n){
	sort(arr,arr+n);
	for(int i=1;i<n;i++){
		if(arr[i]-arr[i-1]!=1){
			return {arr[i],false};
		}
	}
	return {0,true};
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	int mn=INT_MAX;
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		mn=min(mn,ele);
		mx=max(mx,ele);
		arr[i]=ele;
	}
	pair<int,bool> ans=is_consecutive(arr,n);
	if(ans.second==true){
		cout<<"The array contains consecutive integers from "<<mn<<" to "<<mx<<endl;
	}
	else{
		cout<<"The array doesn't contain consecutive integers as element "<<ans.first<<" is repeated"<<endl;
	}
	
	return 0;
}