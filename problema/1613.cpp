/* tHvcevioS ily traian 3IB9M27AQ */ #include <bits/stdc++.h>/* tHvcevioS ily traian 3IB9M27AQ */ /* tHvcevioS ily traian 3IB9M27AQ */ using namespace std;/* tHvcevioS ily traian 3IB9M27AQ */ /* tHvcevioS ily traian 3IB9M27AQ */ int main()/* tHvcevioS ily traian 3IB9M27AQ */ {/* tHvcevioS ily traian 3IB9M27AQ */     int n;/* tHvcevioS ily traian 3IB9M27AQ */     cin >> n;/* tHvcevioS ily traian 3IB9M27AQ */     int nr1=0,nr2=0;/* tHvcevioS ily traian 3IB9M27AQ */     int p1=1,p2=1;/* tHvcevioS ily traian 3IB9M27AQ */     while (n)/* tHvcevioS ily traian 3IB9M27AQ */     {/* tHvcevioS ily traian 3IB9M27AQ */         if ((n%10)%2==0)/* tHvcevioS ily traian 3IB9M27AQ */         {/* tHvcevioS ily traian 3IB9M27AQ */         nr1=p1*(n%10)+nr1;/* tHvcevioS ily traian 3IB9M27AQ */         p1*=10;/* tHvcevioS ily traian 3IB9M27AQ */         }/* tHvcevioS ily traian 3IB9M27AQ */         else/* tHvcevioS ily traian 3IB9M27AQ */         {/* tHvcevioS ily traian 3IB9M27AQ */         nr2=p2*(n%10)+nr2;/* tHvcevioS ily traian 3IB9M27AQ */         p2*=10;/* tHvcevioS ily traian 3IB9M27AQ */         }/* tHvcevioS ily traian 3IB9M27AQ */         n/=10;/* tHvcevioS ily traian 3IB9M27AQ */     }/* tHvcevioS ily traian 3IB9M27AQ */     cout << abs(nr1-nr2);/* tHvcevioS ily traian 3IB9M27AQ */     /* tHvcevioS ily traian 3IB9M27AQ */     return 0;/* tHvcevioS ily traian 3IB9M27AQ */ }