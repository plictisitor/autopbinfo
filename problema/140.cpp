/* TAMz6AljV ily traian JJEuUcHyY */ #include <bits/stdc++.h>/* TAMz6AljV ily traian JJEuUcHyY */ using namespace std;/* TAMz6AljV ily traian JJEuUcHyY */ ifstream fin("putere.in");/* TAMz6AljV ily traian JJEuUcHyY */ ofstream fout("putere.out");/* TAMz6AljV ily traian JJEuUcHyY */ int put(int a,int b)/* TAMz6AljV ily traian JJEuUcHyY */ {/* TAMz6AljV ily traian JJEuUcHyY */     long long p = 1;/* TAMz6AljV ily traian JJEuUcHyY */     for(int i = 1 ; i <= b ; ++i) p *= a;/* TAMz6AljV ily traian JJEuUcHyY */     return p;/* TAMz6AljV ily traian JJEuUcHyY */ }/* TAMz6AljV ily traian JJEuUcHyY */ int main()/* TAMz6AljV ily traian JJEuUcHyY */ {/* TAMz6AljV ily traian JJEuUcHyY */     long long n , m , s = 0;/* TAMz6AljV ily traian JJEuUcHyY */     fin >> n >> m;/* TAMz6AljV ily traian JJEuUcHyY */     fout << put(n % 10 , m % 10) << endl;/* TAMz6AljV ily traian JJEuUcHyY */     while(n != 0 && m != 0)/* TAMz6AljV ily traian JJEuUcHyY */     {/* TAMz6AljV ily traian JJEuUcHyY */         s = s + put(n % 10 , m % 10);/* TAMz6AljV ily traian JJEuUcHyY */         n /= 10;/* TAMz6AljV ily traian JJEuUcHyY */         m /= 10;/* TAMz6AljV ily traian JJEuUcHyY */     }/* TAMz6AljV ily traian JJEuUcHyY */     fout << s;/* TAMz6AljV ily traian JJEuUcHyY */ /* TAMz6AljV ily traian JJEuUcHyY */     fin.close();/* TAMz6AljV ily traian JJEuUcHyY */     fout.close();/* TAMz6AljV ily traian JJEuUcHyY */ /* TAMz6AljV ily traian JJEuUcHyY */     return 0;/* TAMz6AljV ily traian JJEuUcHyY */ }