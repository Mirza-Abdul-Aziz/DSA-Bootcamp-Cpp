#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define pb push_back
#define mod 1000000007
#define inf 1000000000000000001;
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)

using namespace std;

int main(){
    int t;
    cin>>t;
    int mul = 1;
    while(t--){
        int n;
        cin>>n;
        while(n--){
            int num;
            cin>>num;
            mul *= num;
        }
        int ls = mul%10;
        if(ls == 2 || ls % 10 == 3 || ls % 10 == 5){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        mul = 1;
    }
    return 0;
}