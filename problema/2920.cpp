/* bjDLPs9jj ily traian T5KJdeHSu */ #include <bits/stdc++.h>/* bjDLPs9jj ily traian T5KJdeHSu */ using namespace std;/* bjDLPs9jj ily traian T5KJdeHSu */ /* bjDLPs9jj ily traian T5KJdeHSu */ ifstream cin("hidden_number.in");/* bjDLPs9jj ily traian T5KJdeHSu */ ofstream cout("hidden_number.out");/* bjDLPs9jj ily traian T5KJdeHSu */ /* bjDLPs9jj ily traian T5KJdeHSu */ int main(){/* bjDLPs9jj ily traian T5KJdeHSu */     int x, sum = 0, cnt = 0;/* bjDLPs9jj ily traian T5KJdeHSu */     while(cin >> x)/* bjDLPs9jj ily traian T5KJdeHSu */         sum += x, cnt++;/* bjDLPs9jj ily traian T5KJdeHSu */     int ma = sum / cnt;/* bjDLPs9jj ily traian T5KJdeHSu */     if(ma * cnt == sum)/* bjDLPs9jj ily traian T5KJdeHSu */         cout << ma;/* bjDLPs9jj ily traian T5KJdeHSu */     else/* bjDLPs9jj ily traian T5KJdeHSu */         cout << -1;/* bjDLPs9jj ily traian T5KJdeHSu */     return 0;/* bjDLPs9jj ily traian T5KJdeHSu */ }