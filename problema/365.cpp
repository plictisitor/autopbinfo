/* QnfMXPHve ily traian JtoOyJTIF */ #include <bits/stdc++.h>/* QnfMXPHve ily traian JtoOyJTIF */ using namespace std;/* QnfMXPHve ily traian JtoOyJTIF */ /* QnfMXPHve ily traian JtoOyJTIF */ int main()/* QnfMXPHve ily traian JtoOyJTIF */ {/* QnfMXPHve ily traian JtoOyJTIF */     int n, m;/* QnfMXPHve ily traian JtoOyJTIF */     cin >> n >> m;/* QnfMXPHve ily traian JtoOyJTIF */     bool ok = false;/* QnfMXPHve ily traian JtoOyJTIF */     while(n){/* QnfMXPHve ily traian JtoOyJTIF */         int cif = n % 10;/* QnfMXPHve ily traian JtoOyJTIF */         int cm = m;/* QnfMXPHve ily traian JtoOyJTIF */         while(m){/* QnfMXPHve ily traian JtoOyJTIF */             if(m % 10 == cif)/* QnfMXPHve ily traian JtoOyJTIF */                 ok = true;/* QnfMXPHve ily traian JtoOyJTIF */             m/=10;/* QnfMXPHve ily traian JtoOyJTIF */         }/* QnfMXPHve ily traian JtoOyJTIF */         m = cm;/* QnfMXPHve ily traian JtoOyJTIF */         n/=10;/* QnfMXPHve ily traian JtoOyJTIF */     }/* QnfMXPHve ily traian JtoOyJTIF */     if(ok)/* QnfMXPHve ily traian JtoOyJTIF */         cout << "DA";/* QnfMXPHve ily traian JtoOyJTIF */     else/* QnfMXPHve ily traian JtoOyJTIF */         cout << "NU";/* QnfMXPHve ily traian JtoOyJTIF */     return 0;/* QnfMXPHve ily traian JtoOyJTIF */ }