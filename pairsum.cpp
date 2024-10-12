#include<iostream>
#include<vector>
using namespace std;
int main(){


	vector<int>num = {2,7,11,15};
	vector<int>ans;
	int target = 13;
	int n = num.size();


int i =0; 
int j= n-1;
while(i<j){
	int pairsum = num[i]+num[j];
	if(pairsum>target){
		j--;
	}
	else if(pairsum<target){
		i++;
	}
	
	else{
		ans.push_back(i);
		ans.push_back(j);
	}
}

cout<<ans[0]<<","<<ans[1];

	return 0;
}
      
      
      
      
      
      