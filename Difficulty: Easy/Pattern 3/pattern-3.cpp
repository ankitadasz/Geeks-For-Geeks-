//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=0; i<n;i++){
            for(j=0; j< i+1 ; j++){
                cout << j+1 << " ";
            }
            cout << endl;
        }
    }
    int main(){
        int n;
        cin >> n;
        printTriangle(n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends