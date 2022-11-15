//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int  n) {
        // code here
          int l=0;
        multiset<int>s;
        int mx=1;
        for(int r=0;r<n;r++){
            s.insert(arr[r]);
            while((*(--s.end())-*(s.begin()))>1){
                s.erase(s.find(arr[l]));
                l++;
            }
            if((*(--s.end())-*(s.begin()))<=1)mx=max(mx,r-l+1);
        }
        return mx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends