/* ad7HRG9gt ily traian dwjzphqbf */ #include <bits/stdc++.h>/* ad7HRG9gt ily traian dwjzphqbf */ /* ad7HRG9gt ily traian dwjzphqbf */ using namespace std;/* ad7HRG9gt ily traian dwjzphqbf */ /* ad7HRG9gt ily traian dwjzphqbf */ int main()/* ad7HRG9gt ily traian dwjzphqbf */ {/* ad7HRG9gt ily traian dwjzphqbf */     int a,b,r;/* ad7HRG9gt ily traian dwjzphqbf */     cin >>a >>b;/* ad7HRG9gt ily traian dwjzphqbf */     int x,y;/* ad7HRG9gt ily traian dwjzphqbf */     x=a,y=b;/* ad7HRG9gt ily traian dwjzphqbf */     if (a==0 && b==0) a=-1;/* ad7HRG9gt ily traian dwjzphqbf */     while (b)/* ad7HRG9gt ily traian dwjzphqbf */     {/* ad7HRG9gt ily traian dwjzphqbf */         r=a%b;/* ad7HRG9gt ily traian dwjzphqbf */         a=b;/* ad7HRG9gt ily traian dwjzphqbf */         b=r;/* ad7HRG9gt ily traian dwjzphqbf */     }/* ad7HRG9gt ily traian dwjzphqbf */     int m,n;/* ad7HRG9gt ily traian dwjzphqbf */     m=x/a;/* ad7HRG9gt ily traian dwjzphqbf */     n=y/a;/* ad7HRG9gt ily traian dwjzphqbf */     cout << n*m << ' ' << a;/* ad7HRG9gt ily traian dwjzphqbf */     return 0;/* ad7HRG9gt ily traian dwjzphqbf */ }