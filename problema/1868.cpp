/* LFafuUa3W ily traian KRqRsRbjp */ #include <bits/stdc++.h>/* LFafuUa3W ily traian KRqRsRbjp */ /* LFafuUa3W ily traian KRqRsRbjp */ /* LFafuUa3W ily traian KRqRsRbjp */ using namespace std;/* LFafuUa3W ily traian KRqRsRbjp */ /* LFafuUa3W ily traian KRqRsRbjp */ ifstream cin("prosirx.in");/* LFafuUa3W ily traian KRqRsRbjp */ ofstream cout("prosirx.out");/* LFafuUa3W ily traian KRqRsRbjp */ /* LFafuUa3W ily traian KRqRsRbjp */ char a[200][200];/* LFafuUa3W ily traian KRqRsRbjp */ /* LFafuUa3W ily traian KRqRsRbjp */ int main()/* LFafuUa3W ily traian KRqRsRbjp */ {/* LFafuUa3W ily traian KRqRsRbjp */     char s[300];/* LFafuUa3W ily traian KRqRsRbjp */     cin.getline(s , 300);/* LFafuUa3W ily traian KRqRsRbjp */     int i = 0;/* LFafuUa3W ily traian KRqRsRbjp */     int cnt = 0;/* LFafuUa3W ily traian KRqRsRbjp */     while(s[i]!='\0')/* LFafuUa3W ily traian KRqRsRbjp */     {/* LFafuUa3W ily traian KRqRsRbjp */         if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!=' ')/* LFafuUa3W ily traian KRqRsRbjp */             cnt++;/* LFafuUa3W ily traian KRqRsRbjp */         i++;/* LFafuUa3W ily traian KRqRsRbjp */     }/* LFafuUa3W ily traian KRqRsRbjp */     cout << cnt << endl;/* LFafuUa3W ily traian KRqRsRbjp */     i=0;/* LFafuUa3W ily traian KRqRsRbjp */     while(s[i]!='\0')/* LFafuUa3W ily traian KRqRsRbjp */     {/* LFafuUa3W ily traian KRqRsRbjp */         if(i == 0 && s[i]!=' ')/* LFafuUa3W ily traian KRqRsRbjp */             cout << 'X';/* LFafuUa3W ily traian KRqRsRbjp */         else if(s[i-1]==' ' && s[i]!=' ')/* LFafuUa3W ily traian KRqRsRbjp */             cout << 'X';/* LFafuUa3W ily traian KRqRsRbjp */         else/* LFafuUa3W ily traian KRqRsRbjp */             cout << s[i];/* LFafuUa3W ily traian KRqRsRbjp */         i++;/* LFafuUa3W ily traian KRqRsRbjp */     }/* LFafuUa3W ily traian KRqRsRbjp */     s[i]=' ' , s[i+1]='\0';/* LFafuUa3W ily traian KRqRsRbjp */     i = 0 , cnt = 0;/* LFafuUa3W ily traian KRqRsRbjp */     int j = 0;/* LFafuUa3W ily traian KRqRsRbjp */     while(s[i]!='\0')/* LFafuUa3W ily traian KRqRsRbjp */     {/* LFafuUa3W ily traian KRqRsRbjp */         if(s[i]!=' ')/* LFafuUa3W ily traian KRqRsRbjp */         {/* LFafuUa3W ily traian KRqRsRbjp */             a[cnt][j]=s[i];/* LFafuUa3W ily traian KRqRsRbjp */             j++;/* LFafuUa3W ily traian KRqRsRbjp */         }/* LFafuUa3W ily traian KRqRsRbjp */         else/* LFafuUa3W ily traian KRqRsRbjp */         {/* LFafuUa3W ily traian KRqRsRbjp */             j=0;/* LFafuUa3W ily traian KRqRsRbjp */             if(s[i+1]!=' ')/* LFafuUa3W ily traian KRqRsRbjp */                 cnt++;/* LFafuUa3W ily traian KRqRsRbjp */         }/* LFafuUa3W ily traian KRqRsRbjp */         i++;/* LFafuUa3W ily traian KRqRsRbjp */     }/* LFafuUa3W ily traian KRqRsRbjp */     cout << endl;/* LFafuUa3W ily traian KRqRsRbjp */     for(int i = 0 ; i < cnt ; ++i)/* LFafuUa3W ily traian KRqRsRbjp */         for(int j = i + 1 ; j < cnt ; ++j)/* LFafuUa3W ily traian KRqRsRbjp */             if(strcmp(a[i] , a[j]) > 0)/* LFafuUa3W ily traian KRqRsRbjp */                 swap(a[i] , a[j]);/* LFafuUa3W ily traian KRqRsRbjp */     for(int i = 0 ; i < cnt ; ++i)/* LFafuUa3W ily traian KRqRsRbjp */         if(a[i][0]!=' ')/* LFafuUa3W ily traian KRqRsRbjp */             cout << a[i] << ' ';/* LFafuUa3W ily traian KRqRsRbjp */     return 0;/* LFafuUa3W ily traian KRqRsRbjp */ }