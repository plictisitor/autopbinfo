/* cfzUJqMvb ily traian xLj5Bfs9Q */ #include <bits/stdc++.h>/* cfzUJqMvb ily traian xLj5Bfs9Q */ using namespace std;/* cfzUJqMvb ily traian xLj5Bfs9Q */ ifstream cin("sume2.in");/* cfzUJqMvb ily traian xLj5Bfs9Q */ ofstream cout("sume2.out");/* cfzUJqMvb ily traian xLj5Bfs9Q */ int main()/* cfzUJqMvb ily traian xLj5Bfs9Q */ {/* cfzUJqMvb ily traian xLj5Bfs9Q */     long long n , m , x , y , a[100001] , s[100001]={0};/* cfzUJqMvb ily traian xLj5Bfs9Q */     cin >> n;/* cfzUJqMvb ily traian xLj5Bfs9Q */     for(int i = 1 ; i <= n ; ++i)/* cfzUJqMvb ily traian xLj5Bfs9Q */     {/* cfzUJqMvb ily traian xLj5Bfs9Q */         cin >> a[i];/* cfzUJqMvb ily traian xLj5Bfs9Q */         s[i]=s[i-1]+a[i];/* cfzUJqMvb ily traian xLj5Bfs9Q */     }/* cfzUJqMvb ily traian xLj5Bfs9Q */     cin >> m;/* cfzUJqMvb ily traian xLj5Bfs9Q */     for(int i = 0 ; i < m ; ++i)/* cfzUJqMvb ily traian xLj5Bfs9Q */     {/* cfzUJqMvb ily traian xLj5Bfs9Q */         cin >> x >> y;/* cfzUJqMvb ily traian xLj5Bfs9Q */         cout << s[y]-s[x - 1] << endl;/* cfzUJqMvb ily traian xLj5Bfs9Q */     }/* cfzUJqMvb ily traian xLj5Bfs9Q */ }