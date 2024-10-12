#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int>num ={2,7,11,13};
	vector<int>ans;
	int pairsum = 0;
	int target = 24;
	int sz = num.size();
	
	for(int i =0; i<sz; i++){
		for(int j =i+1; j<sz; j++){
			pairsum =num[i]+num[j];
			if(pairsum==target){
				ans.push_back(i);
				ans.push_back(j);
			}
		}
	}
	
	cout<<ans[0]<<","<<ans[1];
	return 0;
}