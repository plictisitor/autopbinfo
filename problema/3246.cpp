/* qEZW6iOK7 ily traian IWiGC6fxV */ #include <bits/stdc++.h>/* qEZW6iOK7 ily traian IWiGC6fxV */ using namespace std;/* qEZW6iOK7 ily traian IWiGC6fxV */ /* qEZW6iOK7 ily traian IWiGC6fxV */ int main(){/* qEZW6iOK7 ily traian IWiGC6fxV */     int a, b;/* qEZW6iOK7 ily traian IWiGC6fxV */     long long s = 0;/* qEZW6iOK7 ily traian IWiGC6fxV */     cin >> a >> b;/* qEZW6iOK7 ily traian IWiGC6fxV */     for(int i = a; i <= b; ++i){/* qEZW6iOK7 ily traian IWiGC6fxV */         int n = i, cntp = 0, cnti = 0;/* qEZW6iOK7 ily traian IWiGC6fxV */         while(n){/* qEZW6iOK7 ily traian IWiGC6fxV */             if(n % 2 == 0)/* qEZW6iOK7 ily traian IWiGC6fxV */                 cntp++;/* qEZW6iOK7 ily traian IWiGC6fxV */             else/* qEZW6iOK7 ily traian IWiGC6fxV */                 cnti++;/* qEZW6iOK7 ily traian IWiGC6fxV */             n/=10;/* qEZW6iOK7 ily traian IWiGC6fxV */         }/* qEZW6iOK7 ily traian IWiGC6fxV */         if(cntp == cnti)/* qEZW6iOK7 ily traian IWiGC6fxV */             s += i;/* qEZW6iOK7 ily traian IWiGC6fxV */     }/* qEZW6iOK7 ily traian IWiGC6fxV */     cout << s;/* qEZW6iOK7 ily traian IWiGC6fxV */     return 0;/* qEZW6iOK7 ily traian IWiGC6fxV */ }