#include<bits/stdc++.h>
#include<vector>

using namespace std;
void solve(string &s,int start,vector<string>&v){
    if(start == s.size()-1){
        v.push_back(s);
        return;
    }
    unordered_set<char>mp;
    for(int i=start;i<s.size();i++){
        if(mp.find(s[i])==mp.end()){
            mp.insert(s[i]);
            swap(s[start],s[i]);
            solve(s,start+1,v);
            swap(s[start],s[i]);
        }
    }
}
int main(){
    vector<string>ans;
    string s = "abc";
    solve(s,0,ans);//solve(inputstring,start pointer,result)
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
