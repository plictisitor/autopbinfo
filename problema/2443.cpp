/* feHO4vXyy ily traian Do02QVBRW */ #include <bits/stdc++.h>/* feHO4vXyy ily traian Do02QVBRW */ using namespace std;/* feHO4vXyy ily traian Do02QVBRW */ /* feHO4vXyy ily traian Do02QVBRW */ int a[100001] , s[100001] , maxime[100001];/* feHO4vXyy ily traian Do02QVBRW */ /* feHO4vXyy ily traian Do02QVBRW */ int cb(int a[] , int n , int val)/* feHO4vXyy ily traian Do02QVBRW */ {/* feHO4vXyy ily traian Do02QVBRW */     int st = 1 , dr = n;/* feHO4vXyy ily traian Do02QVBRW */     while (st <= dr)/* feHO4vXyy ily traian Do02QVBRW */     {/* feHO4vXyy ily traian Do02QVBRW */         int mij = (st + dr) / 2;/* feHO4vXyy ily traian Do02QVBRW */         if(val < a[mij]) dr = mij - 1;/* feHO4vXyy ily traian Do02QVBRW */         else st = mij + 1;/* feHO4vXyy ily traian Do02QVBRW */     }/* feHO4vXyy ily traian Do02QVBRW */     return dr;/* feHO4vXyy ily traian Do02QVBRW */ }/* feHO4vXyy ily traian Do02QVBRW */ /* feHO4vXyy ily traian Do02QVBRW */ int main()/* feHO4vXyy ily traian Do02QVBRW */ {/* feHO4vXyy ily traian Do02QVBRW */     int n;/* feHO4vXyy ily traian Do02QVBRW */     cin >> n;/* feHO4vXyy ily traian Do02QVBRW */     for(int i = 1 ; i <= n ; ++i)/* feHO4vXyy ily traian Do02QVBRW */         cin >> a[i] , s[i]=s[i-1]+a[i];/* feHO4vXyy ily traian Do02QVBRW */     for(int i = 1 ; i <= n ; ++i)/* feHO4vXyy ily traian Do02QVBRW */         if(a[i]>maxime[i-1])/* feHO4vXyy ily traian Do02QVBRW */             maxime[i]=a[i];/* feHO4vXyy ily traian Do02QVBRW */         else/* feHO4vXyy ily traian Do02QVBRW */             maxime[i]=maxime[i-1];/* feHO4vXyy ily traian Do02QVBRW */     int q;/* feHO4vXyy ily traian Do02QVBRW */     cin >> q;/* feHO4vXyy ily traian Do02QVBRW */     int x , p;/* feHO4vXyy ily traian Do02QVBRW */     for(int i = 1 ; i <= q ; ++i)/* feHO4vXyy ily traian Do02QVBRW */     {/* feHO4vXyy ily traian Do02QVBRW */         cin >> x >> p;/* feHO4vXyy ily traian Do02QVBRW */         int val1 = cb(maxime , n , x);/* feHO4vXyy ily traian Do02QVBRW */         int val2 = cb(s , n , p);/* feHO4vXyy ily traian Do02QVBRW */         cout << min(val1 , val2) << endl;/* feHO4vXyy ily traian Do02QVBRW */     }/* feHO4vXyy ily traian Do02QVBRW */     return 0;/* feHO4vXyy ily traian Do02QVBRW */ }