/* 85ZWJ2nM1 ily traian 4us9WwKgT */ #include <bits/stdc++.h>/* 85ZWJ2nM1 ily traian 4us9WwKgT */ /* 85ZWJ2nM1 ily traian 4us9WwKgT */ using namespace std;/* 85ZWJ2nM1 ily traian 4us9WwKgT */ ifstream cin("eureni.in");/* 85ZWJ2nM1 ily traian 4us9WwKgT */ ofstream cout("eureni.out");/* 85ZWJ2nM1 ily traian 4us9WwKgT */ int main()/* 85ZWJ2nM1 ily traian 4us9WwKgT */ {/* 85ZWJ2nM1 ily traian 4us9WwKgT */     int s , m , e , cnt1 = 0;/* 85ZWJ2nM1 ily traian 4us9WwKgT */     cin >> s >> m >> e;/* 85ZWJ2nM1 ily traian 4us9WwKgT */     long long max=1;/* 85ZWJ2nM1 ily traian 4us9WwKgT */     while(m) max*=e , m--;/* 85ZWJ2nM1 ily traian 4us9WwKgT */     for(int i = 1 ; max/e ; ++i)/* 85ZWJ2nM1 ily traian 4us9WwKgT */     {/* 85ZWJ2nM1 ily traian 4us9WwKgT */         int cnt=0;/* 85ZWJ2nM1 ily traian 4us9WwKgT */         while(s>=max){s-=max;cnt++;}/* 85ZWJ2nM1 ily traian 4us9WwKgT */         if(cnt!=0) cout << max << ' ' << cnt << endl;/* 85ZWJ2nM1 ily traian 4us9WwKgT */         cnt1+=cnt;/* 85ZWJ2nM1 ily traian 4us9WwKgT */         max/=e;/* 85ZWJ2nM1 ily traian 4us9WwKgT */     }/* 85ZWJ2nM1 ily traian 4us9WwKgT */     if(s!=0) cout << 1 << ' ' << s << endl;/* 85ZWJ2nM1 ily traian 4us9WwKgT */     cout << cnt1+s;/* 85ZWJ2nM1 ily traian 4us9WwKgT */     return 0;/* 85ZWJ2nM1 ily traian 4us9WwKgT */ }