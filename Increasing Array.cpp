#include <bits/stdc++.h>
using namespace std;

#define ll long long




 
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
      vector<ll>arr;

      ll n;
      cin>>n;

      ll ele;

      for(int i=0; i<n; i++){

            cin>>ele;
            arr.push_back(ele);

      }

      ll sum = 0;
      for(ll i=1; i<n; i++){

            if(arr[i]<arr[i-1]){ // Just check whether the current element is smaller than previous then take the difference both
                                    //And then assign the previous for upcoming number to make it increasing...
                 
                  sum += abs(arr[i]-arr[i-1]);
                  arr[i] = arr[i-1];
            }

      }

      for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";

      cout<<endl;

      cout<<sum;

 
	return 0;
 	
}
