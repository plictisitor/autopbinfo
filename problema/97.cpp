/* zPv2nNa5q ily traian n4pHOjKaT */ #include <bits/stdc++.h>/* zPv2nNa5q ily traian n4pHOjKaT */ using namespace std;/* zPv2nNa5q ily traian n4pHOjKaT */ /* zPv2nNa5q ily traian n4pHOjKaT */ int f[300] , g[300];/* zPv2nNa5q ily traian n4pHOjKaT */ /* zPv2nNa5q ily traian n4pHOjKaT */ int main()/* zPv2nNa5q ily traian n4pHOjKaT */ {/* zPv2nNa5q ily traian n4pHOjKaT */     char a[21] , b[21];/* zPv2nNa5q ily traian n4pHOjKaT */     cin >> a >> b;/* zPv2nNa5q ily traian n4pHOjKaT */     int i = 0;/* zPv2nNa5q ily traian n4pHOjKaT */     while(a[i]!='\0')/* zPv2nNa5q ily traian n4pHOjKaT */     {/* zPv2nNa5q ily traian n4pHOjKaT */         f[(int)a[i]]++;/* zPv2nNa5q ily traian n4pHOjKaT */         i++;/* zPv2nNa5q ily traian n4pHOjKaT */     }/* zPv2nNa5q ily traian n4pHOjKaT */     i=0;/* zPv2nNa5q ily traian n4pHOjKaT */     while(b[i]!='\0')/* zPv2nNa5q ily traian n4pHOjKaT */     {/* zPv2nNa5q ily traian n4pHOjKaT */         g[(int)b[i]]++;/* zPv2nNa5q ily traian n4pHOjKaT */         i++;/* zPv2nNa5q ily traian n4pHOjKaT */     }/* zPv2nNa5q ily traian n4pHOjKaT */     bool adev=true;/* zPv2nNa5q ily traian n4pHOjKaT */     for(int i = 50 ; i <= 150 ; ++i)/* zPv2nNa5q ily traian n4pHOjKaT */     {/* zPv2nNa5q ily traian n4pHOjKaT */         if(f[i]!=g[i])/* zPv2nNa5q ily traian n4pHOjKaT */             adev=false;/* zPv2nNa5q ily traian n4pHOjKaT */     }/* zPv2nNa5q ily traian n4pHOjKaT */     if(adev)/* zPv2nNa5q ily traian n4pHOjKaT */         cout << "1";/* zPv2nNa5q ily traian n4pHOjKaT */         else/* zPv2nNa5q ily traian n4pHOjKaT */         cout << "0";/* zPv2nNa5q ily traian n4pHOjKaT */     return 0;    /* zPv2nNa5q ily traian n4pHOjKaT */ }