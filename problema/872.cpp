/* 2njeNevMZ ily traian piMMCwJkr */ #include <bits/stdc++.h>/* 2njeNevMZ ily traian piMMCwJkr */ using namespace std;/* 2njeNevMZ ily traian piMMCwJkr */ /* 2njeNevMZ ily traian piMMCwJkr */ void rec(int n, int put){/* 2njeNevMZ ily traian piMMCwJkr */     if(n == 0)/* 2njeNevMZ ily traian piMMCwJkr */         return ;/* 2njeNevMZ ily traian piMMCwJkr */     if(n % 2 == 0)/* 2njeNevMZ ily traian piMMCwJkr */         rec(n / 2, put * 2);/* 2njeNevMZ ily traian piMMCwJkr */     else/* 2njeNevMZ ily traian piMMCwJkr */         cout << put << ' ', rec(n / 2, put * 2);/* 2njeNevMZ ily traian piMMCwJkr */ }/* 2njeNevMZ ily traian piMMCwJkr */ /* 2njeNevMZ ily traian piMMCwJkr */ int main(){/* 2njeNevMZ ily traian piMMCwJkr */ /* 2njeNevMZ ily traian piMMCwJkr */     int n;/* 2njeNevMZ ily traian piMMCwJkr */     cin >> n;/* 2njeNevMZ ily traian piMMCwJkr */     rec(n, 1);/* 2njeNevMZ ily traian piMMCwJkr */ /* 2njeNevMZ ily traian piMMCwJkr */     return 0;/* 2njeNevMZ ily traian piMMCwJkr */ }