/* vhO1zWuSl ily traian RcMYEgNgn */ #include <bits/stdc++.h>/* vhO1zWuSl ily traian RcMYEgNgn */ /* vhO1zWuSl ily traian RcMYEgNgn */ /* vhO1zWuSl ily traian RcMYEgNgn */ using namespace std;/* vhO1zWuSl ily traian RcMYEgNgn */ /* vhO1zWuSl ily traian RcMYEgNgn */ char s[101];/* vhO1zWuSl ily traian RcMYEgNgn */ char m[101][101];/* vhO1zWuSl ily traian RcMYEgNgn */ char v[101] , p = 0;/* vhO1zWuSl ily traian RcMYEgNgn */ /* vhO1zWuSl ily traian RcMYEgNgn */ bool putere(char a[])/* vhO1zWuSl ily traian RcMYEgNgn */ {/* vhO1zWuSl ily traian RcMYEgNgn */     int i = 0;/* vhO1zWuSl ily traian RcMYEgNgn */     while(a[i])/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         if(a[i] == '^')/* vhO1zWuSl ily traian RcMYEgNgn */             return true;/* vhO1zWuSl ily traian RcMYEgNgn */         i++;/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     return false;/* vhO1zWuSl ily traian RcMYEgNgn */ }/* vhO1zWuSl ily traian RcMYEgNgn */ /* vhO1zWuSl ily traian RcMYEgNgn */ bool c(char ch)/* vhO1zWuSl ily traian RcMYEgNgn */ {/* vhO1zWuSl ily traian RcMYEgNgn */     return ch >= 'a' && ch <= 'x';/* vhO1zWuSl ily traian RcMYEgNgn */ }/* vhO1zWuSl ily traian RcMYEgNgn */ /* vhO1zWuSl ily traian RcMYEgNgn */ bool lit(char ch)/* vhO1zWuSl ily traian RcMYEgNgn */ {/* vhO1zWuSl ily traian RcMYEgNgn */     return ch >= '0' && ch <= '9';/* vhO1zWuSl ily traian RcMYEgNgn */ }/* vhO1zWuSl ily traian RcMYEgNgn */ /* vhO1zWuSl ily traian RcMYEgNgn */ bool cif(char a[])/* vhO1zWuSl ily traian RcMYEgNgn */ {/* vhO1zWuSl ily traian RcMYEgNgn */     int i = 0;/* vhO1zWuSl ily traian RcMYEgNgn */     while(a[i])/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         if(c(a[i]))/* vhO1zWuSl ily traian RcMYEgNgn */             return false;/* vhO1zWuSl ily traian RcMYEgNgn */         i++;/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     return true;/* vhO1zWuSl ily traian RcMYEgNgn */ }/* vhO1zWuSl ily traian RcMYEgNgn */ /* vhO1zWuSl ily traian RcMYEgNgn */ int main()/* vhO1zWuSl ily traian RcMYEgNgn */ {/* vhO1zWuSl ily traian RcMYEgNgn */     cin >> s;/* vhO1zWuSl ily traian RcMYEgNgn */     int i = 0;/* vhO1zWuSl ily traian RcMYEgNgn */     int cnt = 0 , j = 0;/* vhO1zWuSl ily traian RcMYEgNgn */     if(!(s[0] == '-' || s[0] == '+'))/* vhO1zWuSl ily traian RcMYEgNgn */         v[p] = '+' , p++;/* vhO1zWuSl ily traian RcMYEgNgn */     while(s[i])/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         if((s[i] == '-' || s[i] == '+'))/* vhO1zWuSl ily traian RcMYEgNgn */         {/* vhO1zWuSl ily traian RcMYEgNgn */             v[p] = s[i];/* vhO1zWuSl ily traian RcMYEgNgn */             p++;/* vhO1zWuSl ily traian RcMYEgNgn */             if(i > 0)/* vhO1zWuSl ily traian RcMYEgNgn */                 cnt++;/* vhO1zWuSl ily traian RcMYEgNgn */             j = 0;/* vhO1zWuSl ily traian RcMYEgNgn */         }/* vhO1zWuSl ily traian RcMYEgNgn */         else/* vhO1zWuSl ily traian RcMYEgNgn */             m[cnt][j] = s[i] , j++;/* vhO1zWuSl ily traian RcMYEgNgn */         i++;/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     int ia , ib , ic;/* vhO1zWuSl ily traian RcMYEgNgn */     for(int i = 0 ; i <= cnt ; ++i)/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         if(putere(m[i]))/* vhO1zWuSl ily traian RcMYEgNgn */             ia = i;/* vhO1zWuSl ily traian RcMYEgNgn */         else if(cif(m[i]))/* vhO1zWuSl ily traian RcMYEgNgn */             ic = i;/* vhO1zWuSl ily traian RcMYEgNgn */         else/* vhO1zWuSl ily traian RcMYEgNgn */             ib = i;/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     int a = 0 , b = 0 , cc = 0;/* vhO1zWuSl ily traian RcMYEgNgn */     i = 0;/* vhO1zWuSl ily traian RcMYEgNgn */     while(lit(m[ia][i]))/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         a = a * 10 + m[ia][i] - '0';/* vhO1zWuSl ily traian RcMYEgNgn */         i++;/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     i = 0;/* vhO1zWuSl ily traian RcMYEgNgn */     while(lit(m[ib][i]))/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         b = b * 10 + m[ib][i] - '0';/* vhO1zWuSl ily traian RcMYEgNgn */         i++;/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     i = 0;/* vhO1zWuSl ily traian RcMYEgNgn */     while(lit(m[ic][i]))/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         cc = cc * 10 + m[ic][i] - '0';/* vhO1zWuSl ily traian RcMYEgNgn */         i++;/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     if(v[ia] == '-')/* vhO1zWuSl ily traian RcMYEgNgn */         a = a * (-1);/* vhO1zWuSl ily traian RcMYEgNgn */     if(v[ib] == '-')/* vhO1zWuSl ily traian RcMYEgNgn */         b = b * (-1);/* vhO1zWuSl ily traian RcMYEgNgn */     if(v[ic] == '-')/* vhO1zWuSl ily traian RcMYEgNgn */         cc = cc * (-1);/* vhO1zWuSl ily traian RcMYEgNgn */     int delta = b * b - 4 * a * cc;/* vhO1zWuSl ily traian RcMYEgNgn */     if(delta < 0)/* vhO1zWuSl ily traian RcMYEgNgn */         cout << "imaginare" << endl;/* vhO1zWuSl ily traian RcMYEgNgn */     else if(delta == 0)/* vhO1zWuSl ily traian RcMYEgNgn */         cout << "real" << endl;/* vhO1zWuSl ily traian RcMYEgNgn */     else/* vhO1zWuSl ily traian RcMYEgNgn */         cout << "reale" << endl;/* vhO1zWuSl ily traian RcMYEgNgn */     if(delta == 0)/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         cout << ((-1) * b) / (2 * a);/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     if(delta > 0)/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         double x1 = ((-1) * b + sqrt(delta)) / (2 * a);/* vhO1zWuSl ily traian RcMYEgNgn */         double x2 = ((-1) * b - sqrt(delta)) / (2 * a);/* vhO1zWuSl ily traian RcMYEgNgn */         cout <<min( x1 , x2 ) << ' ' << max (x2 , x1);/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     if(delta < 0)/* vhO1zWuSl ily traian RcMYEgNgn */     {/* vhO1zWuSl ily traian RcMYEgNgn */         delta = delta*(-1);/* vhO1zWuSl ily traian RcMYEgNgn */         double md = sqrt(delta) / (2 * a) , ms = (double)((-1) * b) / (2 * a);/* vhO1zWuSl ily traian RcMYEgNgn */         cout << ms << ' ' << md << 'i';/* vhO1zWuSl ily traian RcMYEgNgn */     }/* vhO1zWuSl ily traian RcMYEgNgn */     return 0;/* vhO1zWuSl ily traian RcMYEgNgn */ }