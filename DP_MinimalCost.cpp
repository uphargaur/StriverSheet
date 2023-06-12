//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int>  mini(max(n+1,k+1));
        for (int i = 0; i < min(k,n-1); i++)
        {
            mini[i]=abs(height[i]-height[0]);
        }
        
        // mini[1]=0;
        // mini[2]=abs(height[1]-height[0]);
        for(int i=k;i<n;i++)
        {
            int mini_temp=1e8;
            // cout<<i<<" ->";
            for (int j = i-k; j < i; j++)
            {
                // cout<<mini[j]<< "  ";
                int way1=mini[j]+abs(height[i]-height[j]);
                mini_temp=min(mini_temp,way1);
            }
            // cout<<endl;
            mini[i]=mini_temp; 
        }
        //  for (int i = 0; i < n; i++)
        //     {
                // cout<<i<<" "<<mini[i]<<" "<<height[i]<<endl;
            // }
            // cout<<endl;
            return mini[n-1];
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends