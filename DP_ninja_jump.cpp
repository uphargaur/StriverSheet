//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        vector<pair<int,int>> v1;
        int k= points[0].size();
         for(int j=0 ;j<k;j++)
            {
               v1.push_back({points[0][j],j}); 
            }
        for(int i=1 ;i<n;i++)
        {
            vector<pair<int,int>> temp;
            for(int j=0 ;j<k;j++)
            {
                int previous_score=v1[k].first;
                int previous_selected=v1[k].second;
                int max_out=0;
                for(int it=0 ;it<k;it++)
                {
                    if(it!=previous_selected)
                    {
                        max_out=max(max_out,v1[it].first);
                    }
                }
                // cout<<max_out<<endl;
               
                temp.push_back({max_out+points[i][j],j});
            }
            //  for(auto x: temp)
            //     {
            //     cout<<x.first<<" ";
            //     }
                    // cout<<endl;
            v1=temp;
             
        }
        int maxi=0;
        for(auto x: v1)
        {
            // cout<<x.first<<" ";
            maxi=max(maxi,x.first);
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends