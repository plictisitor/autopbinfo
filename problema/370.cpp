/* abKcLqAay ily traian XEAYvh72l */ #include <bits/stdc++.h>/* abKcLqAay ily traian XEAYvh72l */ using namespace std;/* abKcLqAay ily traian XEAYvh72l */ int main()/* abKcLqAay ily traian XEAYvh72l */ {/* abKcLqAay ily traian XEAYvh72l */     int n,x,k,sm=0,aux,s;/* abKcLqAay ily traian XEAYvh72l */     cin>>k>>x;/* abKcLqAay ily traian XEAYvh72l */     for(int i=1;i<=x;i++)/* abKcLqAay ily traian XEAYvh72l */     {/* abKcLqAay ily traian XEAYvh72l */         cin>>n;/* abKcLqAay ily traian XEAYvh72l */         aux=n;/* abKcLqAay ily traian XEAYvh72l */         s=0;/* abKcLqAay ily traian XEAYvh72l */         while(n!=0)/* abKcLqAay ily traian XEAYvh72l */         {/* abKcLqAay ily traian XEAYvh72l */             s=s+n%10;/* abKcLqAay ily traian XEAYvh72l */             n=n/10;/* abKcLqAay ily traian XEAYvh72l */         }/* abKcLqAay ily traian XEAYvh72l */         if(s%k==0) sm=sm+aux;/* abKcLqAay ily traian XEAYvh72l */     }/* abKcLqAay ily traian XEAYvh72l */     cout<<sm;/* abKcLqAay ily traian XEAYvh72l */     return 0;/* abKcLqAay ily traian XEAYvh72l */ }