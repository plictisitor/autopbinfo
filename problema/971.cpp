/* sVPXxbFiJ ily traian KZ9NBhDCO */ #include <bits/stdc++.h>/* sVPXxbFiJ ily traian KZ9NBhDCO */ /* sVPXxbFiJ ily traian KZ9NBhDCO */ using namespace std;/* sVPXxbFiJ ily traian KZ9NBhDCO */ /* sVPXxbFiJ ily traian KZ9NBhDCO */ int prim(int n)/* sVPXxbFiJ ily traian KZ9NBhDCO */ {/* sVPXxbFiJ ily traian KZ9NBhDCO */     int d=2;/* sVPXxbFiJ ily traian KZ9NBhDCO */     int cnt=1;/* sVPXxbFiJ ily traian KZ9NBhDCO */     while(n>1)/* sVPXxbFiJ ily traian KZ9NBhDCO */     {/* sVPXxbFiJ ily traian KZ9NBhDCO */         int p = 0;/* sVPXxbFiJ ily traian KZ9NBhDCO */         while(n%d==0)/* sVPXxbFiJ ily traian KZ9NBhDCO */         {/* sVPXxbFiJ ily traian KZ9NBhDCO */             n/=d;/* sVPXxbFiJ ily traian KZ9NBhDCO */             p++;/* sVPXxbFiJ ily traian KZ9NBhDCO */         }/* sVPXxbFiJ ily traian KZ9NBhDCO */         cnt*=(p+1);/* sVPXxbFiJ ily traian KZ9NBhDCO */         d++;/* sVPXxbFiJ ily traian KZ9NBhDCO */         if(d*d>n)/* sVPXxbFiJ ily traian KZ9NBhDCO */         d=n;/* sVPXxbFiJ ily traian KZ9NBhDCO */     }/* sVPXxbFiJ ily traian KZ9NBhDCO */     if(cnt==2)/* sVPXxbFiJ ily traian KZ9NBhDCO */     return 1;/* sVPXxbFiJ ily traian KZ9NBhDCO */     else/* sVPXxbFiJ ily traian KZ9NBhDCO */     return 0;/* sVPXxbFiJ ily traian KZ9NBhDCO */ }/* sVPXxbFiJ ily traian KZ9NBhDCO */ /* sVPXxbFiJ ily traian KZ9NBhDCO */ int main()/* sVPXxbFiJ ily traian KZ9NBhDCO */ {/* sVPXxbFiJ ily traian KZ9NBhDCO */     int n;/* sVPXxbFiJ ily traian KZ9NBhDCO */     cin >> n;/* sVPXxbFiJ ily traian KZ9NBhDCO */     int x;/* sVPXxbFiJ ily traian KZ9NBhDCO */     int s=0;/* sVPXxbFiJ ily traian KZ9NBhDCO */     for(int i = 0 ; i < n ; ++i)/* sVPXxbFiJ ily traian KZ9NBhDCO */     {/* sVPXxbFiJ ily traian KZ9NBhDCO */         cin >> x;/* sVPXxbFiJ ily traian KZ9NBhDCO */         int m=sqrt(x);/* sVPXxbFiJ ily traian KZ9NBhDCO */         if(m*m==x)/* sVPXxbFiJ ily traian KZ9NBhDCO */         s+=3*x;/* sVPXxbFiJ ily traian KZ9NBhDCO */         else if(prim(x))/* sVPXxbFiJ ily traian KZ9NBhDCO */         s+=0;/* sVPXxbFiJ ily traian KZ9NBhDCO */         else/* sVPXxbFiJ ily traian KZ9NBhDCO */         s+=x;/* sVPXxbFiJ ily traian KZ9NBhDCO */     }/* sVPXxbFiJ ily traian KZ9NBhDCO */     cout << s;/* sVPXxbFiJ ily traian KZ9NBhDCO */ }