/* rxRH74YLB ily traian U4wMKjZOC */ #include <bits/stdc++.h>/* rxRH74YLB ily traian U4wMKjZOC */ using namespace std;/* rxRH74YLB ily traian U4wMKjZOC */ /* rxRH74YLB ily traian U4wMKjZOC */ ifstream cin("alice_xi.in");/* rxRH74YLB ily traian U4wMKjZOC */ ofstream cout("alice_xi.out");/* rxRH74YLB ily traian U4wMKjZOC */ /* rxRH74YLB ily traian U4wMKjZOC */ long long n , a[101][101] , sum;/* rxRH74YLB ily traian U4wMKjZOC */ /* rxRH74YLB ily traian U4wMKjZOC */ int main()/* rxRH74YLB ily traian U4wMKjZOC */ {/* rxRH74YLB ily traian U4wMKjZOC */     cin >> n;/* rxRH74YLB ily traian U4wMKjZOC */ /* rxRH74YLB ily traian U4wMKjZOC */     a[1][1] = 1;/* rxRH74YLB ily traian U4wMKjZOC */     for(int i = 2 ; i <= n ; i++)/* rxRH74YLB ily traian U4wMKjZOC */         for(int j = 1 ; j <= n ; j++)/* rxRH74YLB ily traian U4wMKjZOC */             a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];/* rxRH74YLB ily traian U4wMKjZOC */ /* rxRH74YLB ily traian U4wMKjZOC */     for(int i = 1 ; i <= n ; i++)/* rxRH74YLB ily traian U4wMKjZOC */         sum += a[n][i];/* rxRH74YLB ily traian U4wMKjZOC */ /* rxRH74YLB ily traian U4wMKjZOC */     cout << sum;/* rxRH74YLB ily traian U4wMKjZOC */ /* rxRH74YLB ily traian U4wMKjZOC */ }