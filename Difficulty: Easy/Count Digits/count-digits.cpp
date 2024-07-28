//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){

      if (N < 0) {
       N = -N;
    }

    int originalNumber = N;
    int count = 0;

    while (N != 0) {
        int digit = N % 10;
        N /= 10;
        // Check if the digit is not zero and divides the original number evenly
        if (digit != 0 && originalNumber % digit == 0) {
            count++;
        }
    }
    
    return count;
    }
    int main(){
        int N;
        cin >> N;
        evenlyDivides(N);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends