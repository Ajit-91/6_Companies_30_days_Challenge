// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  string strEncoded;
  strEncoded = "";
  
  for(int i = 0; i < src.length(); i++){
    int count = 1; 
    while(src[i] == src[i + 1]){
        count++;
        i++;
    }
    strEncoded = strEncoded + src[i] + to_string(count);
  }
  
  return strEncoded;
}      
 