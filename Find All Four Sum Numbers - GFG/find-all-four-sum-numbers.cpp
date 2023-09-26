//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        unordered_map<string,int> mp;
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int i;
        int j;
        int m;
        int n;
        int sz=arr.size();
        for(i=0; i<sz; i++){
            for(j=i+1; j<sz; j++){
                int rem=k-(arr[i]+arr[j]);
                int l=j+1;
                int h=sz-1;
                while(l<h){
                    int x=arr[l]+arr[h];
                    if(x==rem){
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[l]);
                        v.push_back(arr[h]);
                        string s;
                        s+=to_string(arr[i]);
                        s+=to_string(arr[j]);
                        s+=to_string(arr[l]);
                        s+=to_string(arr[h]);
                        if(mp.find(s)==mp.end()){
                            mp[s]++;
                            ans.push_back(v);
                        }
                        l++;
                        h--;
                    }
                    else if(x<rem)l++;
                        else h--;
                }
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends