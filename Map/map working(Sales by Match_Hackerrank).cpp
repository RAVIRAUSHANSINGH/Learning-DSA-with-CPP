#include <bits/stdc++.h>
using namespace std;
int main() {
   vector<int> v={10, 20, 20, 10, 10, 30, 50, 10, 20};
   int n= v.size();
   int ans=0;
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++){
      if(mp[v[i]]){ //checking if value is already present in map, for pair purpose
          ans++;    //if it is then increse count of ans by 1;
          mp.erase(v[i]); // and remove the pair
          continue;  // skip the rest iteration
      }
      mp[v[i]]++;  //if value is not present in map then add the value to map 
   }
   cout<<ans;
}
