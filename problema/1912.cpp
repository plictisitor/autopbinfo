/* D61TLmoOH ily traian RZzgzACBU */ #include <bits/stdc++.h>/* D61TLmoOH ily traian RZzgzACBU */ using namespace std;/* D61TLmoOH ily traian RZzgzACBU */ ifstream cin("becuri.in");/* D61TLmoOH ily traian RZzgzACBU */ ofstream cout("becuri.out");/* D61TLmoOH ily traian RZzgzACBU */ int main()/* D61TLmoOH ily traian RZzgzACBU */ {/* D61TLmoOH ily traian RZzgzACBU */     int n , nrd , cnt = 0 , d = 1 , i = 1;/* D61TLmoOH ily traian RZzgzACBU */     cin >> n;/* D61TLmoOH ily traian RZzgzACBU */     while(i * d <= n)/* D61TLmoOH ily traian RZzgzACBU */     {/* D61TLmoOH ily traian RZzgzACBU */         cnt++;/* D61TLmoOH ily traian RZzgzACBU */         i++;/* D61TLmoOH ily traian RZzgzACBU */         d++;/* D61TLmoOH ily traian RZzgzACBU */     }/* D61TLmoOH ily traian RZzgzACBU */     cout << cnt;/* D61TLmoOH ily traian RZzgzACBU */     return 0;/* D61TLmoOH ily traian RZzgzACBU */ }