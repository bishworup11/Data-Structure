#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
//#define mp  make_pair
#define     REP(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
int a[100];
vector<int>g[100];
string  codeward[100];
 void dfs(int s,string code)
 {
  if(s<26)
  {
    codeward[s]=code;
    return;
  }
  dfs(g[s][0],code+"1");
  dfs(g[s][1],code+"0");
 }
int main()
{
    int t=1;
    //cin >> t;
    while (t--)
    {
      mem(a);
     int i,n,x,y,j;
      string s;
      cin>>s;
      n=s.size();
      for(i=0;i<n;i++)
      {
         a[s[i]-'A']++;
      }
      priority_queue<pair<int,int>>q;
      for(i=0;i<26;i++)
      {
          if(a[i])  q.push({-a[i],i});
      }
      pair<int,int>p1,p2;
       int node=26;
       while(q.size()>1)
       {
        p1=q.top();
        q.pop();
        p2=q.top();
        q.pop();
        int sum=p1.first+p2.first;
        g[node].pb(p1.second);
        g[node].pb(p2.second);
        q.push({sum,node});
        node++;
       }
       node--;
       dfs(node, "");
       for(i=0;i<26;i++)
       {
       
        if(a[i]>0) cout<<char(i+'A')<<" "<<codeward[i]<<endl;
       }
       for(i=0;i<n;i++) 
       {
        cout<<codeward[s[i]-'A'];
       }
       cout<<endl;
    }
}