//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	   int odd=0,even=0;
       vector<int> maxcheck(n);
       maxcheck[0]=arr[0];
       maxcheck[1]=max(arr[0],arr[1]);
	   for(int i=2;i<n;i++)
	   {
	       int include=arr[i]+maxcheck[i-2];
           int not_include=maxcheck[i-1];
           maxcheck[i]=max[include,not_include];
	   }
       return maxcheck[n-1];
	   //cout<<endl;
	   //for(int i=1;i<n-1;i=i+2)
	   //{
	      
	   //}
	   return max(even,odd);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends