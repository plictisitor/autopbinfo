/* dq3dLya8b ily traian P4f3QlC1V */ #include <bits/stdc++.h>/* dq3dLya8b ily traian P4f3QlC1V */ /* dq3dLya8b ily traian P4f3QlC1V */ using namespace std;/* dq3dLya8b ily traian P4f3QlC1V */ int main()/* dq3dLya8b ily traian P4f3QlC1V */ {/* dq3dLya8b ily traian P4f3QlC1V */     long long n , a[201][201], c = 0 , v[205];/* dq3dLya8b ily traian P4f3QlC1V */     cin >> n;/* dq3dLya8b ily traian P4f3QlC1V */     for(int i = 0 ; i < n ; i++)/* dq3dLya8b ily traian P4f3QlC1V */         for(int j = 0 ; j < n ; j++)/* dq3dLya8b ily traian P4f3QlC1V */         cin >> a[i][j];/* dq3dLya8b ily traian P4f3QlC1V */     for(int i = 0 ; i < n ; i++)/* dq3dLya8b ily traian P4f3QlC1V */         for(int j = 0 ; j < n ; j++)/* dq3dLya8b ily traian P4f3QlC1V */         {/* dq3dLya8b ily traian P4f3QlC1V */             if(i > j && i + j > n - 1)/* dq3dLya8b ily traian P4f3QlC1V */             {/* dq3dLya8b ily traian P4f3QlC1V */                 v[c] = a[i][j];/* dq3dLya8b ily traian P4f3QlC1V */                 c++;/* dq3dLya8b ily traian P4f3QlC1V */             }/* dq3dLya8b ily traian P4f3QlC1V */         }/* dq3dLya8b ily traian P4f3QlC1V */     sort(v , v+c);/* dq3dLya8b ily traian P4f3QlC1V */     for(int i = 0 ; i < c ; ++i)/* dq3dLya8b ily traian P4f3QlC1V */     {/* dq3dLya8b ily traian P4f3QlC1V */         if(v[i]==v[i-1] && v[i]!=v[i+1])/* dq3dLya8b ily traian P4f3QlC1V */             cout << v[i] <<" ";/* dq3dLya8b ily traian P4f3QlC1V */     }/* dq3dLya8b ily traian P4f3QlC1V */     return 0;/* dq3dLya8b ily traian P4f3QlC1V */ /* dq3dLya8b ily traian P4f3QlC1V */ }