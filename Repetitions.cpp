#include <bits/stdc++.h>
using namespace std;

#define ll long long




 
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
     
     string s;

     getline(cin,s);

     int cnt = 1;
     int maxi = INT_MIN;
     for(int i=0; i<s.size()-1; i++){

            if(s[i] == s[i+1]){ // if next element matches then increase the count and update the maxi
                  cnt++;
                  maxi = max(maxi,cnt);
            }
            else   // if not then reset the cnt to 1
                  cnt = 1; 
     }
      cout<<maxi;

 
	return 0;
 	
}
