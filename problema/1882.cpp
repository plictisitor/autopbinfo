/* ev1YfweKF ily traian igAJZw5kc */ #include <bits/stdc++.h>/* ev1YfweKF ily traian igAJZw5kc */ using namespace std;/* ev1YfweKF ily traian igAJZw5kc */ ifstream fin("calcul3.in");/* ev1YfweKF ily traian igAJZw5kc */ ofstream fout("calcul3.out");/* ev1YfweKF ily traian igAJZw5kc */ int main()/* ev1YfweKF ily traian igAJZw5kc */ {/* ev1YfweKF ily traian igAJZw5kc */     int n , x;/* ev1YfweKF ily traian igAJZw5kc */     char c;/* ev1YfweKF ily traian igAJZw5kc */     fin >> n;/* ev1YfweKF ily traian igAJZw5kc */     fout << n;/* ev1YfweKF ily traian igAJZw5kc */     while(fin >> c)/* ev1YfweKF ily traian igAJZw5kc */     {/* ev1YfweKF ily traian igAJZw5kc */         if(c!='=')/* ev1YfweKF ily traian igAJZw5kc */         {/* ev1YfweKF ily traian igAJZw5kc */             fin >> x;/* ev1YfweKF ily traian igAJZw5kc */             fout << c << x;/* ev1YfweKF ily traian igAJZw5kc */             if(c == '+')n = n + x;/* ev1YfweKF ily traian igAJZw5kc */             else n = n - x;/* ev1YfweKF ily traian igAJZw5kc */         }/* ev1YfweKF ily traian igAJZw5kc */     }/* ev1YfweKF ily traian igAJZw5kc */     fout << "=" << n;/* ev1YfweKF ily traian igAJZw5kc */     return 0;/* ev1YfweKF ily traian igAJZw5kc */ }