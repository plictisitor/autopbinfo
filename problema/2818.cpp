/* yElKhJ9LL ily traian Vce8IXFtn */ #include <bits/stdc++.h>/* yElKhJ9LL ily traian Vce8IXFtn */ using namespace std;/* yElKhJ9LL ily traian Vce8IXFtn */ ifstream cin("inserare2.in");/* yElKhJ9LL ily traian Vce8IXFtn */ ofstream cout("inserare2.out");/* yElKhJ9LL ily traian Vce8IXFtn */ int main()/* yElKhJ9LL ily traian Vce8IXFtn */ {/* yElKhJ9LL ily traian Vce8IXFtn */     int n , m , x , mini , maxi , y , ok = 0 , ind = -1;/* yElKhJ9LL ily traian Vce8IXFtn */     cin >> n >> m;/* yElKhJ9LL ily traian Vce8IXFtn */     cin >> mini;/* yElKhJ9LL ily traian Vce8IXFtn */     for(int i = 2 ; i < n ; ++i)/* yElKhJ9LL ily traian Vce8IXFtn */         cin >> x;/* yElKhJ9LL ily traian Vce8IXFtn */     cin >> maxi;/* yElKhJ9LL ily traian Vce8IXFtn */     cin >> x;/* yElKhJ9LL ily traian Vce8IXFtn */     for(int i = 2 ; i <= m ; ++i)/* yElKhJ9LL ily traian Vce8IXFtn */     {/* yElKhJ9LL ily traian Vce8IXFtn */         cin >> x;/* yElKhJ9LL ily traian Vce8IXFtn */         if(y <= mini && x >= maxi) ok = 1 , ind = i;/* yElKhJ9LL ily traian Vce8IXFtn */         y = x;/* yElKhJ9LL ily traian Vce8IXFtn */     }/* yElKhJ9LL ily traian Vce8IXFtn */     if(ok == 1) cout << ind;/* yElKhJ9LL ily traian Vce8IXFtn */     else cout << "imposibil";/* yElKhJ9LL ily traian Vce8IXFtn */     return 0;/* yElKhJ9LL ily traian Vce8IXFtn */ }