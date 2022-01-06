#include<iostream>
using namespace std;
 
 class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // any rectangle lies either left or right side of another rectangle
        if(L2[0] > R1[0] || L1[0] > R2[0] )
            return 0;
        // any rectangle lies either above or below of another rectangle   
        else if (R2[1] > L1[1] || R1[1] > L2[1])
            return 0;
        else return 1;
    }
};

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int p[2], q[2], r[2], s[2];
        cin>>p[0]>>p[1]>>q[0]>>q[1]>>r[0]>>r[1]>>s[0]>>s[1];

        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout<<ans<<"\n";
    }
    
 
    return 0;
}