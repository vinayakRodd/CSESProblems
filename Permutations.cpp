#include <bits/stdc++.h>
using namespace std;

#define ll long long


// Logic : we need to put odd numbers from 1 to n and then even number from 1 to n or vice versa... This will result in difference between two numbers is not == 1


 
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
     

    vector<int>arr;

    int n;
    cin>>n;

    if(n<=3){
      cout<<"NO SOLUTION";
      return 0;
    }

    for(int i=1; i<=n; i+=2){

            arr.push_back(i);
    }

    
    for(int i=2; i<=n; i+=2){

            arr.push_back(i);
    }


    for(int i=0; i<arr.size(); i++)
            cout<<arr[i]<<" ";

 
	return 0;
 	
}
