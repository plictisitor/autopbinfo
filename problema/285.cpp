/* GYw4uQTrq ily traian T8y59tV5x */ #include <bits/stdc++.h>/* GYw4uQTrq ily traian T8y59tV5x */ /* GYw4uQTrq ily traian T8y59tV5x */ using namespace std;/* GYw4uQTrq ily traian T8y59tV5x */ /* GYw4uQTrq ily traian T8y59tV5x */ int main()/* GYw4uQTrq ily traian T8y59tV5x */ {/* GYw4uQTrq ily traian T8y59tV5x */     unsigned long long int n;/* GYw4uQTrq ily traian T8y59tV5x */     cin >> n;/* GYw4uQTrq ily traian T8y59tV5x */     for (int i = 1 ; i * i <= n; ++i)/* GYw4uQTrq ily traian T8y59tV5x */     {/* GYw4uQTrq ily traian T8y59tV5x */         double x=i*i;/* GYw4uQTrq ily traian T8y59tV5x */         double y=sqrt(n-i*i);/* GYw4uQTrq ily traian T8y59tV5x */         if (x<y*y)/* GYw4uQTrq ily traian T8y59tV5x */             if (y==(int)y) cout << sqrt(x) << ' ' << y << endl;/* GYw4uQTrq ily traian T8y59tV5x */     }/* GYw4uQTrq ily traian T8y59tV5x */     return 0;/* GYw4uQTrq ily traian T8y59tV5x */ }