/* ONPEjkJN2 ily traian VEKVMunXv */ #include <bits/stdc++.h>/* ONPEjkJN2 ily traian VEKVMunXv */ using namespace std;/* ONPEjkJN2 ily traian VEKVMunXv */ /* ONPEjkJN2 ily traian VEKVMunXv */ ifstream cin("croco1.in");/* ONPEjkJN2 ily traian VEKVMunXv */ ofstream cout("croco1.out");/* ONPEjkJN2 ily traian VEKVMunXv */ /* ONPEjkJN2 ily traian VEKVMunXv */ int a[105][105] , n , m , cnt1=0 , cnt2=0;/* ONPEjkJN2 ily traian VEKVMunXv */ /* ONPEjkJN2 ily traian VEKVMunXv */ void fill(int i , int j , bool c)/* ONPEjkJN2 ily traian VEKVMunXv */ {/* ONPEjkJN2 ily traian VEKVMunXv */         a[i][j]=1;/* ONPEjkJN2 ily traian VEKVMunXv */         if(c)/* ONPEjkJN2 ily traian VEKVMunXv */             cnt1++;/* ONPEjkJN2 ily traian VEKVMunXv */         else/* ONPEjkJN2 ily traian VEKVMunXv */             cnt2++;/* ONPEjkJN2 ily traian VEKVMunXv */         c=!c;/* ONPEjkJN2 ily traian VEKVMunXv */         if(a[i+1][j]==0 && i+1 <= n)/* ONPEjkJN2 ily traian VEKVMunXv */             fill(i+1 , j , c);/* ONPEjkJN2 ily traian VEKVMunXv */         if(a[i-1][j]==0 && i-1 >= 1)/* ONPEjkJN2 ily traian VEKVMunXv */             fill(i-1 , j , c);/* ONPEjkJN2 ily traian VEKVMunXv */         if(a[i][j+1]==0 && j+1 <= m)/* ONPEjkJN2 ily traian VEKVMunXv */             fill(i , j+1 , c);/* ONPEjkJN2 ily traian VEKVMunXv */         if(a[i][j-1]==0 && j-1 >= 1)/* ONPEjkJN2 ily traian VEKVMunXv */             fill(i , j-1 , c);/* ONPEjkJN2 ily traian VEKVMunXv */ }/* ONPEjkJN2 ily traian VEKVMunXv */ /* ONPEjkJN2 ily traian VEKVMunXv */ int main()/* ONPEjkJN2 ily traian VEKVMunXv */ {/* ONPEjkJN2 ily traian VEKVMunXv */     cin >> n >> m;/* ONPEjkJN2 ily traian VEKVMunXv */     for(int i = 1 ; i <= n ; ++i)/* ONPEjkJN2 ily traian VEKVMunXv */         for(int j = 1 ; j <= m ; ++j)/* ONPEjkJN2 ily traian VEKVMunXv */             cin >> a[i][j];/* ONPEjkJN2 ily traian VEKVMunXv */     int croco=0 , ele=0;/* ONPEjkJN2 ily traian VEKVMunXv */     for(int i = 1 ; i <= n ; ++i)/* ONPEjkJN2 ily traian VEKVMunXv */         for(int j = 1 ; j <= m ; ++j)/* ONPEjkJN2 ily traian VEKVMunXv */             if(a[i][j]==0)/* ONPEjkJN2 ily traian VEKVMunXv */             {/* ONPEjkJN2 ily traian VEKVMunXv */                 cnt1=0 , cnt2=0;/* ONPEjkJN2 ily traian VEKVMunXv */                 bool c=true;/* ONPEjkJN2 ily traian VEKVMunXv */                 fill(i , j , c);/* ONPEjkJN2 ily traian VEKVMunXv */                 if(cnt1>cnt2)/* ONPEjkJN2 ily traian VEKVMunXv */                     croco+=cnt1 , ele+=cnt2;/* ONPEjkJN2 ily traian VEKVMunXv */                 else/* ONPEjkJN2 ily traian VEKVMunXv */                     croco+=cnt2 , ele+=cnt1;/* ONPEjkJN2 ily traian VEKVMunXv */             }/* ONPEjkJN2 ily traian VEKVMunXv */     cout << croco << ' ' << ele;/* ONPEjkJN2 ily traian VEKVMunXv */     return 0;/* ONPEjkJN2 ily traian VEKVMunXv */ }