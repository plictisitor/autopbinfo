/* HE8D8x18J ily traian 77Pz8UroY */ #include <bits/stdc++.h>/* HE8D8x18J ily traian 77Pz8UroY */ /* HE8D8x18J ily traian 77Pz8UroY */ using namespace std;/* HE8D8x18J ily traian 77Pz8UroY */ /* HE8D8x18J ily traian 77Pz8UroY */ ifstream cin("bst.in");/* HE8D8x18J ily traian 77Pz8UroY */ ofstream cout("bst.out");/* HE8D8x18J ily traian 77Pz8UroY */ /* HE8D8x18J ily traian 77Pz8UroY */ int a[100001];/* HE8D8x18J ily traian 77Pz8UroY */ /* HE8D8x18J ily traian 77Pz8UroY */ int main(){/* HE8D8x18J ily traian 77Pz8UroY */     int n;/* HE8D8x18J ily traian 77Pz8UroY */     cin >> n;/* HE8D8x18J ily traian 77Pz8UroY */     for(int i = 1; i <= n; ++i)/* HE8D8x18J ily traian 77Pz8UroY */         cin >> a[i];/* HE8D8x18J ily traian 77Pz8UroY */     sort(a + 1, a + n + 1);/* HE8D8x18J ily traian 77Pz8UroY */     for(int i = 1; i <= n; ++i)/* HE8D8x18J ily traian 77Pz8UroY */         cout << a[i] << ' ';/* HE8D8x18J ily traian 77Pz8UroY */ }