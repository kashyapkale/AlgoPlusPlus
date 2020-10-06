// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends





class Solution{
public:
    int *findTwoElement(int *arr, int N) {
        // code here
        int X,Y,temp_sum=0,temp_sq=0;
        for(int i = 0;i<N;i++){
            temp_sum = temp_sum + arr[i];
            temp_sq = temp_sq + (arr[i]*arr[i]);
        }
        cout<<temp_sum<<" "<<temp_sq<<endl;
        cout<<(N*(N+1))/2<<" "<<(N*(N+1)*(2*N+1))/6<<endl;
        Y = ((N*(N+1))/2) - temp_sum;
        X = ((N*(N+1)*(2*N+1))/6) - temp_sq;
        cout<<X<<" "<<Y<<endl;
        X = X * -1;
        Y = Y * -1;
        static int ans[2];
        ans[0] = 2*(X + (Y*Y))/Y;
        ans[1] = (2*(X + (Y*Y))/Y) - Y;
        
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        int* ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}// } Driver Code Ends 