/* ot6FcfAtD ily traian OIYSHaNRF */ #include <bits/stdc++.h>/* ot6FcfAtD ily traian OIYSHaNRF */ using namespace std;/* ot6FcfAtD ily traian OIYSHaNRF */ /* ot6FcfAtD ily traian OIYSHaNRF */ int main()/* ot6FcfAtD ily traian OIYSHaNRF */ {/* ot6FcfAtD ily traian OIYSHaNRF */     int n;/* ot6FcfAtD ily traian OIYSHaNRF */     cin >> n;/* ot6FcfAtD ily traian OIYSHaNRF */     char s[16][300];/* ot6FcfAtD ily traian OIYSHaNRF */     for(int e = 0 ; e <= n ; ++e)/* ot6FcfAtD ily traian OIYSHaNRF */     {/* ot6FcfAtD ily traian OIYSHaNRF */         cin.getline(s[e] , 300);/* ot6FcfAtD ily traian OIYSHaNRF */     }/* ot6FcfAtD ily traian OIYSHaNRF */     for(int e = 0 ; e <= n ; ++e)/* ot6FcfAtD ily traian OIYSHaNRF */     {/* ot6FcfAtD ily traian OIYSHaNRF */         int i = 0;/* ot6FcfAtD ily traian OIYSHaNRF */         while(s[e][i]!='\0')/* ot6FcfAtD ily traian OIYSHaNRF */         {/* ot6FcfAtD ily traian OIYSHaNRF */             if((s[e][i]=='!' || s[e][i]=='?' || s[e][i]=='.' || s[e][i]==',') && s[e][i+1]!='\0')/* ot6FcfAtD ily traian OIYSHaNRF */             {/* ot6FcfAtD ily traian OIYSHaNRF */ /* ot6FcfAtD ily traian OIYSHaNRF */             }/* ot6FcfAtD ily traian OIYSHaNRF */             else/* ot6FcfAtD ily traian OIYSHaNRF */                 cout << s[e][i];/* ot6FcfAtD ily traian OIYSHaNRF */             i++;/* ot6FcfAtD ily traian OIYSHaNRF */         }/* ot6FcfAtD ily traian OIYSHaNRF */         if(e > 0)/* ot6FcfAtD ily traian OIYSHaNRF */         cout << endl;/* ot6FcfAtD ily traian OIYSHaNRF */     }/* ot6FcfAtD ily traian OIYSHaNRF */     return 0;/* ot6FcfAtD ily traian OIYSHaNRF */ }