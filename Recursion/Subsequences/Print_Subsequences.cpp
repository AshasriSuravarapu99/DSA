#include <bits/stdc++.h>
using namespace std;

void fun(int idx, vector<int>sub, vector<int>arr){
    if(idx >= arr.size()){
        if(sub.size() == 0) cout<<"[]";
        else{
            for(auto it:sub) cout<<it<<" ";
            cout<<"\n";
        }
        return;
        
    } 
    sub.push_back(arr[idx]);
    fun(idx+1,sub,arr);
    sub.pop_back();
    fun(idx+1,sub,arr);
}

int main() {
	// your code goes here
	vector<int>arr = {1,2,3};
	vector<int>sub;
	int n = 3;
	fun(0,sub,arr);

}
