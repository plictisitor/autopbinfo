/* 1vnZ2sEDH ily traian fxdRd4yeC */ #include <iostream>
/* 1vnZ2sEDH ily traian fxdRd4yeC */ using namespace std;
/* 1vnZ2sEDH ily traian fxdRd4yeC */ 
/* 1vnZ2sEDH ily traian fxdRd4yeC */ int main()
/* 1vnZ2sEDH ily traian fxdRd4yeC */ {
/* 1vnZ2sEDH ily traian fxdRd4yeC */     char ch[11];
/* 1vnZ2sEDH ily traian fxdRd4yeC */     cin >> ch;
/* 1vnZ2sEDH ily traian fxdRd4yeC */     int n=0;
/* 1vnZ2sEDH ily traian fxdRd4yeC */     while(ch[n]!='\0')
/* 1vnZ2sEDH ily traian fxdRd4yeC */         n++;    
/* 1vnZ2sEDH ily traian fxdRd4yeC */     int i = n;
/* 1vnZ2sEDH ily traian fxdRd4yeC */     while(i)
/* 1vnZ2sEDH ily traian fxdRd4yeC */     {
/* 1vnZ2sEDH ily traian fxdRd4yeC */         int j = 0;
/* 1vnZ2sEDH ily traian fxdRd4yeC */         while(j<i)
/* 1vnZ2sEDH ily traian fxdRd4yeC */         {
/* 1vnZ2sEDH ily traian fxdRd4yeC */             cout << ch[j];
/* 1vnZ2sEDH ily traian fxdRd4yeC */             j++;
/* 1vnZ2sEDH ily traian fxdRd4yeC */         }
/* 1vnZ2sEDH ily traian fxdRd4yeC */         cout << endl;
/* 1vnZ2sEDH ily traian fxdRd4yeC */         i--;
/* 1vnZ2sEDH ily traian fxdRd4yeC */     }
/* 1vnZ2sEDH ily traian fxdRd4yeC */     i=0;
/* 1vnZ2sEDH ily traian fxdRd4yeC */     while(ch[i]!='\0')
/* 1vnZ2sEDH ily traian fxdRd4yeC */     {
/* 1vnZ2sEDH ily traian fxdRd4yeC */         int j = i; 
/* 1vnZ2sEDH ily traian fxdRd4yeC */         while(ch[j]!='\0')
/* 1vnZ2sEDH ily traian fxdRd4yeC */         {
/* 1vnZ2sEDH ily traian fxdRd4yeC */             cout << ch[j];
/* 1vnZ2sEDH ily traian fxdRd4yeC */             j++;
/* 1vnZ2sEDH ily traian fxdRd4yeC */         }
/* 1vnZ2sEDH ily traian fxdRd4yeC */         cout << endl;
/* 1vnZ2sEDH ily traian fxdRd4yeC */         i++;
/* 1vnZ2sEDH ily traian fxdRd4yeC */     }
/* 1vnZ2sEDH ily traian fxdRd4yeC */     return 0;    
/* 1vnZ2sEDH ily traian fxdRd4yeC */ }