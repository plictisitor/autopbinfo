/* 0lwy4yHqj ily traian 55bp27g3E */ #include <bits/stdc++.h>/* 0lwy4yHqj ily traian 55bp27g3E */ using namespace std;/* 0lwy4yHqj ily traian 55bp27g3E */ ifstream fin("sumagauss2.in");/* 0lwy4yHqj ily traian 55bp27g3E */ ofstream fout("sumagauss2.out");/* 0lwy4yHqj ily traian 55bp27g3E */ int main()/* 0lwy4yHqj ily traian 55bp27g3E */ {/* 0lwy4yHqj ily traian 55bp27g3E */     long long s , sq , aux , n , m , d , s2;/* 0lwy4yHqj ily traian 55bp27g3E */     fin >> s;/* 0lwy4yHqj ily traian 55bp27g3E */     s2 = s * 2;/* 0lwy4yHqj ily traian 55bp27g3E */     for(d = 1; d * d <= s2; d++)/* 0lwy4yHqj ily traian 55bp27g3E */     {/* 0lwy4yHqj ily traian 55bp27g3E */         if(s2 % d == 0)/* 0lwy4yHqj ily traian 55bp27g3E */         {/* 0lwy4yHqj ily traian 55bp27g3E */             aux = d + s2 / d - 1;/* 0lwy4yHqj ily traian 55bp27g3E */             if(aux % 2 == 0)/* 0lwy4yHqj ily traian 55bp27g3E */             {/* 0lwy4yHqj ily traian 55bp27g3E */                 n = aux / 2;/* 0lwy4yHqj ily traian 55bp27g3E */                 m = n - d;/* 0lwy4yHqj ily traian 55bp27g3E */                 fout << n <<" " << m <<endl;;/* 0lwy4yHqj ily traian 55bp27g3E */             }/* 0lwy4yHqj ily traian 55bp27g3E */         }/* 0lwy4yHqj ily traian 55bp27g3E */     }/* 0lwy4yHqj ily traian 55bp27g3E */     return 0;/* 0lwy4yHqj ily traian 55bp27g3E */ }