//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        vector<int>  mini(n+1);
        mini[1]=0;
        mini[2]=abs(height[1]-height[0]);
        for(int i=2;i<n;i++)
        {
            int way1=mini[i]+abs(height[i]-height[i-1]);
            int way2=mini[i-1]+abs(height[i]-height[i-2]);
            mini[i+1]=min(way1,way2);
            
           
        }
        //  for(auto x: mini)
        //     {
        //         cout<<x<<" ";
        //     }
        //     cout<<endl;
            return mini[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends