//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int>  mini(max(n+1,k+1));
        mini[0]=0;
        for (int i = 1; i <= min(k,n-1); i++)
        {
            mini[i]=abs(height[i]-height[0]);
        }
        
        // mini[1]=0;
        // mini[2]=abs(height[1]-height[0]);
        for(int i=k+1;i<n;i++)
        {
            int mini_temp=1e8;
            for (int j = 1; j <= k; j++)
            {
                int way1=mini[i-k]+abs(height[i]-height[i-k]);
                mini_temp=min(mini_temp,way1);
            }
            
            // int way1=mini[i]+abs(height[i]-height[i-1]);
            // int way2=mini[i-1]+abs(height[i]-height[i-2]);
            mini[i+1]=mini_temp; 
        }
         for(auto x: mini)
            {
                cout<<x<<" ";
            }
            cout<<endl;
            return mini[n];
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