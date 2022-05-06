#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define pi 3.141592653589793238462643383279
ll mod=1e9+7;
#define Fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pll pair<long long ,long long>
#define mk make_pair
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
#define psieve void sieve(){ memset(prime, true, sizeof(prime)); for(ll p=2; p*p<=maxn; p++) if (prime[p]) for (ll i=p*2; i<=maxn; i+= p) prime[i] = false; }
#define all(x) x.begin(),x.end()
#define sii set<in>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vll vector<long long>
#define f(i,a,n) for(int i=a;i<=n;i++)
inline int GCD(int a, int b) { return b == 0 ? a : GCD(b, a % b); }
inline int LCM(int a, int b) { return a * b / GCD(a, b); }
inline int ceil(int a, int b){  return (a%b==0) ? a/b : a/b +1 ;}
inline int power(int x, int y,int mod){ if(y==0)return 1;x%=mod;if(y%2)return (x*power(x*x, y/2,mod))%mod;return power(x*x, y/2,mod)%mod;}
int modInverse(int x)
{
    return power(x,mod-2,mod);
}
int power(int b, int e)
{
    int res = 1;
    f(i, 1, e) res *= b;
    return res;
}

////********************************************MY PREDEFINED FUNCTION***********************************************************************************************
const int N1=1e7+10;                                                                                                                  
vector<bool> isPrime(N1,1);                                                                                                           
                                                                                                                                      
void generateSieve()                                                                                                                  
      {                                                                                                                               
         isPrime[0]=isPrime[1]=false;                                                                                                  
         for(int i=2;i<N1; ++i)                                                                                                        
            {                                                                                                            
                if(isPrime[i]==true)                                                                                     
                   {                                                                                                     
                     for(int j=2*i;j<N1;j+=i)                                                                          
                          {                                                                                               
                                isPrime[j]=false;                                                                          
                          }                                                                                              
                   }                                                                                                   
            }                                                                                                             
   }                                                                                                                         
////***********************************************FUNCTION CREATION ZONE*******************************************************************************************





////************************************************MAIN FUNCTION ZONE**************************************************************************
int main() 
{
Fastio
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
//generateSieve()
int t=1;
//cin>>t;
while(t--)
{
  ll a,b;
  cin>>a>>b;
  a=min(a,b);
  if(a%2!=0) cout<<"Akshat"<<endl;
  else cout<<"Malvika"<<endl;
 
 
}
return 0;
}