/* o3Bi61LGi ily traian 54ZGiYcLK */ #include <bits/stdc++.h>/* o3Bi61LGi ily traian 54ZGiYcLK */ using namespace std;/* o3Bi61LGi ily traian 54ZGiYcLK */ /* o3Bi61LGi ily traian 54ZGiYcLK */ int main()/* o3Bi61LGi ily traian 54ZGiYcLK */ {/* o3Bi61LGi ily traian 54ZGiYcLK */     int n, rez = 0, put = 1;/* o3Bi61LGi ily traian 54ZGiYcLK */     cin >> n;/* o3Bi61LGi ily traian 54ZGiYcLK */     while(n > 0){/* o3Bi61LGi ily traian 54ZGiYcLK */         int a = (n / 10) % 10;/* o3Bi61LGi ily traian 54ZGiYcLK */         int b = n % 10;/* o3Bi61LGi ily traian 54ZGiYcLK */ /* o3Bi61LGi ily traian 54ZGiYcLK */         int nr = b * 10 + a;/* o3Bi61LGi ily traian 54ZGiYcLK */         rez = nr * put + rez;/* o3Bi61LGi ily traian 54ZGiYcLK */ /* o3Bi61LGi ily traian 54ZGiYcLK */         n /= 100;/* o3Bi61LGi ily traian 54ZGiYcLK */         put *= 100;/* o3Bi61LGi ily traian 54ZGiYcLK */     }/* o3Bi61LGi ily traian 54ZGiYcLK */     cout << rez;/* o3Bi61LGi ily traian 54ZGiYcLK */     return 0;/* o3Bi61LGi ily traian 54ZGiYcLK */ }