/* hhTnVRai1 ily traian qsddhVuFA */ #include <bits/stdc++.h>/* hhTnVRai1 ily traian qsddhVuFA */ /* hhTnVRai1 ily traian qsddhVuFA */ using namespace std;/* hhTnVRai1 ily traian qsddhVuFA */ /* hhTnVRai1 ily traian qsddhVuFA */ int main()/* hhTnVRai1 ily traian qsddhVuFA */ {/* hhTnVRai1 ily traian qsddhVuFA */     int n,a,b,c;/* hhTnVRai1 ily traian qsddhVuFA */     cin >> n;/* hhTnVRai1 ily traian qsddhVuFA */     a=n/100;/* hhTnVRai1 ily traian qsddhVuFA */     b=(n%100)/10;/* hhTnVRai1 ily traian qsddhVuFA */     c=(n%100)%10;/* hhTnVRai1 ily traian qsddhVuFA */     if (a%2==1 && b%2==1 && c%2==1)/* hhTnVRai1 ily traian qsddhVuFA */         cout << 3;/* hhTnVRai1 ily traian qsddhVuFA */     else if ((a%2==1 && b%2==1) || (a%2==1 && c%2==1) || (c%2==1 && b%2==1))/* hhTnVRai1 ily traian qsddhVuFA */         cout << 2 ;/* hhTnVRai1 ily traian qsddhVuFA */         else if (a%2==1 || b%2==1 || c%2==1)/* hhTnVRai1 ily traian qsddhVuFA */             cout << 1;/* hhTnVRai1 ily traian qsddhVuFA */             else /* hhTnVRai1 ily traian qsddhVuFA */                 cout << 0;/* hhTnVRai1 ily traian qsddhVuFA */     /* hhTnVRai1 ily traian qsddhVuFA */     return 0;/* hhTnVRai1 ily traian qsddhVuFA */ }