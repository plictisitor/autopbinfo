/* XCu7yH0Hl ily traian mMkAwbUMZ */ #include <bits/stdc++.h>/* XCu7yH0Hl ily traian mMkAwbUMZ */ /* XCu7yH0Hl ily traian mMkAwbUMZ */ using namespace std;/* XCu7yH0Hl ily traian mMkAwbUMZ */ /* XCu7yH0Hl ily traian mMkAwbUMZ */ char a[260];/* XCu7yH0Hl ily traian mMkAwbUMZ */ long long int n, s, x = 1, nr;/* XCu7yH0Hl ily traian mMkAwbUMZ */ /* XCu7yH0Hl ily traian mMkAwbUMZ */ int main()/* XCu7yH0Hl ily traian mMkAwbUMZ */ {/* XCu7yH0Hl ily traian mMkAwbUMZ */     cin >> a;/* XCu7yH0Hl ily traian mMkAwbUMZ */     n = strlen(a);/* XCu7yH0Hl ily traian mMkAwbUMZ */     for (int i = n - 1; i >= 0 ; i--)/* XCu7yH0Hl ily traian mMkAwbUMZ */     {/* XCu7yH0Hl ily traian mMkAwbUMZ */         if (a[i] >= '0' && a[i] <= '9')/* XCu7yH0Hl ily traian mMkAwbUMZ */             nr = a[i] - '0';/* XCu7yH0Hl ily traian mMkAwbUMZ */         else /* XCu7yH0Hl ily traian mMkAwbUMZ */             nr = a[i] - 'A' + 10;/* XCu7yH0Hl ily traian mMkAwbUMZ */         s += x * nr;/* XCu7yH0Hl ily traian mMkAwbUMZ */         x = x * 16;/* XCu7yH0Hl ily traian mMkAwbUMZ */     }/* XCu7yH0Hl ily traian mMkAwbUMZ */     cout << s;/* XCu7yH0Hl ily traian mMkAwbUMZ */     return 0;/* XCu7yH0Hl ily traian mMkAwbUMZ */ }