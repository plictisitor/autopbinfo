/* oAvbj9cvE ily traian mEESU0KUN */ #include <bits/stdc++.h>/* oAvbj9cvE ily traian mEESU0KUN */ using namespace std;/* oAvbj9cvE ily traian mEESU0KUN */ ifstream fin("serbare.in");/* oAvbj9cvE ily traian mEESU0KUN */ ofstream fout("serbare.out");/* oAvbj9cvE ily traian mEESU0KUN */ int main()/* oAvbj9cvE ily traian mEESU0KUN */ {/* oAvbj9cvE ily traian mEESU0KUN */     int f[11]={0} , n , m , c , b , maxi = 0;/* oAvbj9cvE ily traian mEESU0KUN */     fin >> n >> m;/* oAvbj9cvE ily traian mEESU0KUN */     for(int i = 0 ; i < n ; ++i)/* oAvbj9cvE ily traian mEESU0KUN */     {/* oAvbj9cvE ily traian mEESU0KUN */         fin >> c >> b;/* oAvbj9cvE ily traian mEESU0KUN */         f[b]+=c;/* oAvbj9cvE ily traian mEESU0KUN */         if(f[b] > maxi) maxi=f[b];/* oAvbj9cvE ily traian mEESU0KUN */     }/* oAvbj9cvE ily traian mEESU0KUN */     for(int i = maxi ; i >= 1 ; --i)/* oAvbj9cvE ily traian mEESU0KUN */     {/* oAvbj9cvE ily traian mEESU0KUN */         for(int j = 1 ; j <= m ; ++j)/* oAvbj9cvE ily traian mEESU0KUN */         {/* oAvbj9cvE ily traian mEESU0KUN */             if(i==f[j]) /* oAvbj9cvE ily traian mEESU0KUN */             fout << j <<" ";/* oAvbj9cvE ily traian mEESU0KUN */         }/* oAvbj9cvE ily traian mEESU0KUN */     }/* oAvbj9cvE ily traian mEESU0KUN */     return 0;/* oAvbj9cvE ily traian mEESU0KUN */ }