#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,maxi=INT_MIN;;
        cin>>n;
        int v[n],a[n];
        for(int i=0;i<n;i++){
            cin>>v[i]>>a[i];
        }
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                int ans=v[i]*a[j]+a[i]*v[j];
                maxi=max(maxi,ans);
            }
        }
        cout<<maxi<<endl;
        
        
    }

}
