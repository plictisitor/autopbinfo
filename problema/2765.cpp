/* j7w0mUOSm ily traian 38A4uOHFo */ #include <bits/stdc++.h>/* j7w0mUOSm ily traian 38A4uOHFo */ /* j7w0mUOSm ily traian 38A4uOHFo */ using namespace std;/* j7w0mUOSm ily traian 38A4uOHFo */ /* j7w0mUOSm ily traian 38A4uOHFo */ int a[3];/* j7w0mUOSm ily traian 38A4uOHFo */ /* j7w0mUOSm ily traian 38A4uOHFo */ int main()/* j7w0mUOSm ily traian 38A4uOHFo */ {/* j7w0mUOSm ily traian 38A4uOHFo */     cin >> a[0] >> a[1] >> a[2];/* j7w0mUOSm ily traian 38A4uOHFo */     sort(a , a + 3);/* j7w0mUOSm ily traian 38A4uOHFo */     int dif = a[2]-a[0];/* j7w0mUOSm ily traian 38A4uOHFo */     if(a[0] >= 0 && a[2] <= 255)/* j7w0mUOSm ily traian 38A4uOHFo */     {/* j7w0mUOSm ily traian 38A4uOHFo */         if(dif <= 10)/* j7w0mUOSm ily traian 38A4uOHFo */             cout << "GRI";/* j7w0mUOSm ily traian 38A4uOHFo */         else/* j7w0mUOSm ily traian 38A4uOHFo */             cout << "CULOARE";/* j7w0mUOSm ily traian 38A4uOHFo */     }/* j7w0mUOSm ily traian 38A4uOHFo */     else/* j7w0mUOSm ily traian 38A4uOHFo */         cout << "NU E CULOARE";/* j7w0mUOSm ily traian 38A4uOHFo */     return 0;/* j7w0mUOSm ily traian 38A4uOHFo */ }