/* 4o8eC0fqu ily traian AtEQckChq */ #include <bits/stdc++.h>/* 4o8eC0fqu ily traian AtEQckChq */ using namespace std;/* 4o8eC0fqu ily traian AtEQckChq */ /* 4o8eC0fqu ily traian AtEQckChq */ ifstream cin("sumpow2.in");/* 4o8eC0fqu ily traian AtEQckChq */ ofstream cout("sumpow2.out");/* 4o8eC0fqu ily traian AtEQckChq */ /* 4o8eC0fqu ily traian AtEQckChq */ int f[27];/* 4o8eC0fqu ily traian AtEQckChq */ /* 4o8eC0fqu ily traian AtEQckChq */ int main()/* 4o8eC0fqu ily traian AtEQckChq */ {/* 4o8eC0fqu ily traian AtEQckChq */     char s1[200] , s2[200];/* 4o8eC0fqu ily traian AtEQckChq */     cin >> s1 >> s2;/* 4o8eC0fqu ily traian AtEQckChq */     int i = 0;/* 4o8eC0fqu ily traian AtEQckChq */     while(s1[i]!='\0')/* 4o8eC0fqu ily traian AtEQckChq */     {/* 4o8eC0fqu ily traian AtEQckChq */         f[(int)s1[i]-96]++;/* 4o8eC0fqu ily traian AtEQckChq */         i++;/* 4o8eC0fqu ily traian AtEQckChq */     }/* 4o8eC0fqu ily traian AtEQckChq */     i=0;/* 4o8eC0fqu ily traian AtEQckChq */     while(s2[i]!='\0')/* 4o8eC0fqu ily traian AtEQckChq */     {/* 4o8eC0fqu ily traian AtEQckChq */         f[(int)s2[i]-96]++;/* 4o8eC0fqu ily traian AtEQckChq */         i++;/* 4o8eC0fqu ily traian AtEQckChq */     }/* 4o8eC0fqu ily traian AtEQckChq */     for(int i = 0 ; i < 25 ; ++i)/* 4o8eC0fqu ily traian AtEQckChq */     {/* 4o8eC0fqu ily traian AtEQckChq */         while(f[i]-2 >= 0)/* 4o8eC0fqu ily traian AtEQckChq */             f[i]-=2 , f[i+1]++;/* 4o8eC0fqu ily traian AtEQckChq */         if(f[i]==1)/* 4o8eC0fqu ily traian AtEQckChq */             cout << (char)(i + 96);/* 4o8eC0fqu ily traian AtEQckChq */     }/* 4o8eC0fqu ily traian AtEQckChq */     for(int i = 0 ; i < f[25] ; ++i)/* 4o8eC0fqu ily traian AtEQckChq */         cout << 'z';/* 4o8eC0fqu ily traian AtEQckChq */     return 0;/* 4o8eC0fqu ily traian AtEQckChq */ }