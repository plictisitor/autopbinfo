/* MocCH38vv ily traian IyNQ8lXZS */ #include <bits/stdc++.h>/* MocCH38vv ily traian IyNQ8lXZS */ using namespace std;/* MocCH38vv ily traian IyNQ8lXZS */ /* MocCH38vv ily traian IyNQ8lXZS */ int main()/* MocCH38vv ily traian IyNQ8lXZS */ {/* MocCH38vv ily traian IyNQ8lXZS */     long long n;/* MocCH38vv ily traian IyNQ8lXZS */     int cnt2 = 0, cnt3 = 0;/* MocCH38vv ily traian IyNQ8lXZS */     cin >> n;/* MocCH38vv ily traian IyNQ8lXZS */     while(n > 0){/* MocCH38vv ily traian IyNQ8lXZS */         if(n % 10 == 2)/* MocCH38vv ily traian IyNQ8lXZS */             cnt2++;/* MocCH38vv ily traian IyNQ8lXZS */         else/* MocCH38vv ily traian IyNQ8lXZS */             cnt3++;/* MocCH38vv ily traian IyNQ8lXZS */         n/=10;/* MocCH38vv ily traian IyNQ8lXZS */     }/* MocCH38vv ily traian IyNQ8lXZS */     if(cnt2 > cnt3)/* MocCH38vv ily traian IyNQ8lXZS */         cout << 2;/* MocCH38vv ily traian IyNQ8lXZS */     else if(cnt2 == cnt3)/* MocCH38vv ily traian IyNQ8lXZS */         cout << 2 << ' ' << 3;/* MocCH38vv ily traian IyNQ8lXZS */     else/* MocCH38vv ily traian IyNQ8lXZS */         cout << 3;/* MocCH38vv ily traian IyNQ8lXZS */     return 0;/* MocCH38vv ily traian IyNQ8lXZS */ }