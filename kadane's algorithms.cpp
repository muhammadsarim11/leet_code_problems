#include<iostream>
#include<vector>
using namespace std;
int main(){
//	brute force//
//
//int arr[7] ={3,-4,5,4,-1,7,-8};
//int maxsum =INT_MIN;
//int cs = 0;
//for(int st =0; st<7; st++){
// cs = cs+ arr[st]; 
//		maxsum = max(cs,maxsum);
//		if(cs<0){
//			cs = 0;
//		}
//	}
//
//
// 
//      cout<<maxsum;
vector<int>vec = {3,-4,5,4,-1,7,-8};
int maxsum = INT_MIN;
int cs = 0;
 for(int i:vec){
 	cs = cs+i;
 	maxsum = max(cs,maxsum);
 	if(cs<0){
 		cs = 0;
	 }
 }
cout<<maxsum;

  
	return 0;
}