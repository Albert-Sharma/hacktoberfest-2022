class Solution {
public:
   
   vector<int> plusOne(vector<int>& digits) {
     vector<int>arr={10,15,11,-1,0,1,15,-1,-1};
        map<int,int>mp;
     for(int i=0;i<arr.size();i++){
       mp[arr[i]]++;
     }
  int maxi=0; int ele=0;
  for(auto it:mp){
    if(it.second>maxi){
      maxi=it.second;
      ele=it.first;
    }
  }
  return {ele};
}
    
};
