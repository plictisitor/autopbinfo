/* q1oDoAtGM ily traian 7EmVaU4Fr */ #include <bits/stdc++.h>/* q1oDoAtGM ily traian 7EmVaU4Fr */ using namespace std;/* q1oDoAtGM ily traian 7EmVaU4Fr */ /* q1oDoAtGM ily traian 7EmVaU4Fr */ int main()/* q1oDoAtGM ily traian 7EmVaU4Fr */ {/* q1oDoAtGM ily traian 7EmVaU4Fr */     int n,x,s=0;/* q1oDoAtGM ily traian 7EmVaU4Fr */     cin>>n;/* q1oDoAtGM ily traian 7EmVaU4Fr */     for(int i=1;i<=n;i++)/* q1oDoAtGM ily traian 7EmVaU4Fr */     {/* q1oDoAtGM ily traian 7EmVaU4Fr */         cin>>x;/* q1oDoAtGM ily traian 7EmVaU4Fr */         int c=x%10;/* q1oDoAtGM ily traian 7EmVaU4Fr */         int nr=0,p=1;/* q1oDoAtGM ily traian 7EmVaU4Fr */         while(x)/* q1oDoAtGM ily traian 7EmVaU4Fr */         {/* q1oDoAtGM ily traian 7EmVaU4Fr */             if(x%10!=c)/* q1oDoAtGM ily traian 7EmVaU4Fr */             {/* q1oDoAtGM ily traian 7EmVaU4Fr */                 nr=nr+x%10*p;/* q1oDoAtGM ily traian 7EmVaU4Fr */                 p=p*10;/* q1oDoAtGM ily traian 7EmVaU4Fr */             }/* q1oDoAtGM ily traian 7EmVaU4Fr */             x/=10;/* q1oDoAtGM ily traian 7EmVaU4Fr */         }/* q1oDoAtGM ily traian 7EmVaU4Fr */         s=s+nr;/* q1oDoAtGM ily traian 7EmVaU4Fr */     }/* q1oDoAtGM ily traian 7EmVaU4Fr */     cout<<s;/* q1oDoAtGM ily traian 7EmVaU4Fr */     return 0;/* q1oDoAtGM ily traian 7EmVaU4Fr */ /* q1oDoAtGM ily traian 7EmVaU4Fr */ }