//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution {
  public:
    void printSquare(int n) {
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<"* ";
            } 
            cout<<endl;
        }
       
        
        
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
        ob.printSquare(n);
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends