/* q8Po6mvgS ily traian iWXM5neLj */ #include <bits/stdc++.h>/* q8Po6mvgS ily traian iWXM5neLj */ /* q8Po6mvgS ily traian iWXM5neLj */ /* q8Po6mvgS ily traian iWXM5neLj */ using namespace std;/* q8Po6mvgS ily traian iWXM5neLj */ /* q8Po6mvgS ily traian iWXM5neLj */ int n;/* q8Po6mvgS ily traian iWXM5neLj */ char cuv[11][11], rez[11];/* q8Po6mvgS ily traian iWXM5neLj */ int f[30], ok;/* q8Po6mvgS ily traian iWXM5neLj */ /* q8Po6mvgS ily traian iWXM5neLj */ void afisare()/* q8Po6mvgS ily traian iWXM5neLj */ {/* q8Po6mvgS ily traian iWXM5neLj */     for(int i = 1 ; i <= n ; i++)/* q8Po6mvgS ily traian iWXM5neLj */         cout << rez[i];/* q8Po6mvgS ily traian iWXM5neLj */ }/* q8Po6mvgS ily traian iWXM5neLj */ /* q8Po6mvgS ily traian iWXM5neLj */ void back(int k)/* q8Po6mvgS ily traian iWXM5neLj */ {/* q8Po6mvgS ily traian iWXM5neLj */     for (int i = 0; i < strlen(cuv[k]); ++ i)/* q8Po6mvgS ily traian iWXM5neLj */         if (f[cuv[k][i] - 'a'] == 0)/* q8Po6mvgS ily traian iWXM5neLj */         {/* q8Po6mvgS ily traian iWXM5neLj */             f[cuv[k][i] - 'a'] = 1;/* q8Po6mvgS ily traian iWXM5neLj */             rez[k] = cuv[k][i];/* q8Po6mvgS ily traian iWXM5neLj */             if (ok)return;/* q8Po6mvgS ily traian iWXM5neLj */             if (k == n)/* q8Po6mvgS ily traian iWXM5neLj */             {/* q8Po6mvgS ily traian iWXM5neLj */                 ok = 1;/* q8Po6mvgS ily traian iWXM5neLj */                 afisare();/* q8Po6mvgS ily traian iWXM5neLj */             }/* q8Po6mvgS ily traian iWXM5neLj */             else back(k + 1);/* q8Po6mvgS ily traian iWXM5neLj */             f[cuv[k][i] - 'a'] = 0;/* q8Po6mvgS ily traian iWXM5neLj */         }/* q8Po6mvgS ily traian iWXM5neLj */ }/* q8Po6mvgS ily traian iWXM5neLj */ int main()/* q8Po6mvgS ily traian iWXM5neLj */ {/* q8Po6mvgS ily traian iWXM5neLj */     cin >> n;/* q8Po6mvgS ily traian iWXM5neLj */     for (int i = 1; i <= n; i ++)/* q8Po6mvgS ily traian iWXM5neLj */     {/* q8Po6mvgS ily traian iWXM5neLj */         cin >> cuv[i];/* q8Po6mvgS ily traian iWXM5neLj */         sort(cuv[i], cuv[i] + strlen(cuv[i]));/* q8Po6mvgS ily traian iWXM5neLj */     }/* q8Po6mvgS ily traian iWXM5neLj */     back(1);/* q8Po6mvgS ily traian iWXM5neLj */ }