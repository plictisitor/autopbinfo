/* cfhOyCSBx ily traian Fuf0aZE3u */ #include <bits/stdc++.h>/* cfhOyCSBx ily traian Fuf0aZE3u */ using namespace std;/* cfhOyCSBx ily traian Fuf0aZE3u */ /* cfhOyCSBx ily traian Fuf0aZE3u */ ifstream cin("align.in");/* cfhOyCSBx ily traian Fuf0aZE3u */ ofstream cout("align.out");/* cfhOyCSBx ily traian Fuf0aZE3u */ /* cfhOyCSBx ily traian Fuf0aZE3u */ int main()/* cfhOyCSBx ily traian Fuf0aZE3u */ {/* cfhOyCSBx ily traian Fuf0aZE3u */     int n;/* cfhOyCSBx ily traian Fuf0aZE3u */     char ch;/* cfhOyCSBx ily traian Fuf0aZE3u */     cin >> n >> ch;/* cfhOyCSBx ily traian Fuf0aZE3u */     if(ch=='D')/* cfhOyCSBx ily traian Fuf0aZE3u */     {/* cfhOyCSBx ily traian Fuf0aZE3u */         char m[101][201];/* cfhOyCSBx ily traian Fuf0aZE3u */         int vec[101];/* cfhOyCSBx ily traian Fuf0aZE3u */         int max=0;/* cfhOyCSBx ily traian Fuf0aZE3u */         char c[11];/* cfhOyCSBx ily traian Fuf0aZE3u */         cin.getline(c , 10);/* cfhOyCSBx ily traian Fuf0aZE3u */         for(int q = 0 ; q <= n ; ++q)/* cfhOyCSBx ily traian Fuf0aZE3u */         {/* cfhOyCSBx ily traian Fuf0aZE3u */             cin.getline(m[q] , 201);/* cfhOyCSBx ily traian Fuf0aZE3u */             int i = 0;/* cfhOyCSBx ily traian Fuf0aZE3u */             while(m[q][i]!='\0')/* cfhOyCSBx ily traian Fuf0aZE3u */                 i++;/* cfhOyCSBx ily traian Fuf0aZE3u */             if(i > max)/* cfhOyCSBx ily traian Fuf0aZE3u */                 max=i;/* cfhOyCSBx ily traian Fuf0aZE3u */             vec[q]=i;/* cfhOyCSBx ily traian Fuf0aZE3u */         }/* cfhOyCSBx ily traian Fuf0aZE3u */         for(int q = 0 ; q < n ; ++q)/* cfhOyCSBx ily traian Fuf0aZE3u */         {/* cfhOyCSBx ily traian Fuf0aZE3u */             for(int i = 0 ; i < max-vec[q] ; ++i)/* cfhOyCSBx ily traian Fuf0aZE3u */                 cout << ' ';/* cfhOyCSBx ily traian Fuf0aZE3u */             int i=0;/* cfhOyCSBx ily traian Fuf0aZE3u */             while(m[q][i]!='\0')/* cfhOyCSBx ily traian Fuf0aZE3u */             {/* cfhOyCSBx ily traian Fuf0aZE3u */                 cout << m[q][i];/* cfhOyCSBx ily traian Fuf0aZE3u */                 i++;/* cfhOyCSBx ily traian Fuf0aZE3u */             }/* cfhOyCSBx ily traian Fuf0aZE3u */             cout << endl;/* cfhOyCSBx ily traian Fuf0aZE3u */         }/* cfhOyCSBx ily traian Fuf0aZE3u */     }/* cfhOyCSBx ily traian Fuf0aZE3u */     else/* cfhOyCSBx ily traian Fuf0aZE3u */     {/* cfhOyCSBx ily traian Fuf0aZE3u */         for(int q = 0 ; q <= n ; ++q)/* cfhOyCSBx ily traian Fuf0aZE3u */         {/* cfhOyCSBx ily traian Fuf0aZE3u */             char s[300];/* cfhOyCSBx ily traian Fuf0aZE3u */             cin.getline(s , 300);/* cfhOyCSBx ily traian Fuf0aZE3u */             int i = 0;/* cfhOyCSBx ily traian Fuf0aZE3u */             bool ok = true;/* cfhOyCSBx ily traian Fuf0aZE3u */             while(s[i]!='\0')/* cfhOyCSBx ily traian Fuf0aZE3u */             {/* cfhOyCSBx ily traian Fuf0aZE3u */                 if(s[i]==' ' && ok)/* cfhOyCSBx ily traian Fuf0aZE3u */                 {/* cfhOyCSBx ily traian Fuf0aZE3u */ /* cfhOyCSBx ily traian Fuf0aZE3u */                 }/* cfhOyCSBx ily traian Fuf0aZE3u */                 else/* cfhOyCSBx ily traian Fuf0aZE3u */                 {/* cfhOyCSBx ily traian Fuf0aZE3u */                     cout << s[i];/* cfhOyCSBx ily traian Fuf0aZE3u */                     ok=false;/* cfhOyCSBx ily traian Fuf0aZE3u */                 }/* cfhOyCSBx ily traian Fuf0aZE3u */                 i++;/* cfhOyCSBx ily traian Fuf0aZE3u */             }/* cfhOyCSBx ily traian Fuf0aZE3u */             if(q)/* cfhOyCSBx ily traian Fuf0aZE3u */             cout << endl;/* cfhOyCSBx ily traian Fuf0aZE3u */         }/* cfhOyCSBx ily traian Fuf0aZE3u */     }/* cfhOyCSBx ily traian Fuf0aZE3u */     return 0;/* cfhOyCSBx ily traian Fuf0aZE3u */ }