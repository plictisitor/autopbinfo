/* zfpkJIdHG ily traian ZamicZMDK */ #include <bits/stdc++.h>/* zfpkJIdHG ily traian ZamicZMDK */ /* zfpkJIdHG ily traian ZamicZMDK */ using namespace std;/* zfpkJIdHG ily traian ZamicZMDK */ /* zfpkJIdHG ily traian ZamicZMDK */ int f[300];/* zfpkJIdHG ily traian ZamicZMDK */ /* zfpkJIdHG ily traian ZamicZMDK */ bool litmica(char ch)/* zfpkJIdHG ily traian ZamicZMDK */ {/* zfpkJIdHG ily traian ZamicZMDK */     return ch >= 'a' && ch <= 'z';/* zfpkJIdHG ily traian ZamicZMDK */ }/* zfpkJIdHG ily traian ZamicZMDK */ /* zfpkJIdHG ily traian ZamicZMDK */ bool litmare(char ch)/* zfpkJIdHG ily traian ZamicZMDK */ {/* zfpkJIdHG ily traian ZamicZMDK */     return ch >= 'A' && ch <= 'Z';/* zfpkJIdHG ily traian ZamicZMDK */ }/* zfpkJIdHG ily traian ZamicZMDK */ /* zfpkJIdHG ily traian ZamicZMDK */ int main()/* zfpkJIdHG ily traian ZamicZMDK */ {/* zfpkJIdHG ily traian ZamicZMDK */     char s[300];/* zfpkJIdHG ily traian ZamicZMDK */     cin.getline(s , 300);/* zfpkJIdHG ily traian ZamicZMDK */     int i = 0;/* zfpkJIdHG ily traian ZamicZMDK */     int cnt1 = 0 , cnt2 = 0;/* zfpkJIdHG ily traian ZamicZMDK */     while(s[i]!='\0')/* zfpkJIdHG ily traian ZamicZMDK */     {/* zfpkJIdHG ily traian ZamicZMDK */         if(litmica(s[i]))/* zfpkJIdHG ily traian ZamicZMDK */             cnt1++ , f[(int)s[i]]++;/* zfpkJIdHG ily traian ZamicZMDK */         if(litmare(s[i]))/* zfpkJIdHG ily traian ZamicZMDK */             cnt2++ , f[(int)tolower(s[i])]++;/* zfpkJIdHG ily traian ZamicZMDK */         i++;/* zfpkJIdHG ily traian ZamicZMDK */     }/* zfpkJIdHG ily traian ZamicZMDK */     if(cnt1 > cnt2)/* zfpkJIdHG ily traian ZamicZMDK */     {/* zfpkJIdHG ily traian ZamicZMDK */         cout << '{';/* zfpkJIdHG ily traian ZamicZMDK */         bool ok = false;/* zfpkJIdHG ily traian ZamicZMDK */         for(int i = 0 ; i < 150 ; ++i)/* zfpkJIdHG ily traian ZamicZMDK */         {/* zfpkJIdHG ily traian ZamicZMDK */             if(f[i]!=0 && ok)/* zfpkJIdHG ily traian ZamicZMDK */                 cout << ',' << (char)i;/* zfpkJIdHG ily traian ZamicZMDK */             else if(f[i]!=0)/* zfpkJIdHG ily traian ZamicZMDK */                 cout << (char)i , ok=true;/* zfpkJIdHG ily traian ZamicZMDK */         }/* zfpkJIdHG ily traian ZamicZMDK */         cout << '}';/* zfpkJIdHG ily traian ZamicZMDK */     }/* zfpkJIdHG ily traian ZamicZMDK */     else/* zfpkJIdHG ily traian ZamicZMDK */     {/* zfpkJIdHG ily traian ZamicZMDK */         cout << '{';/* zfpkJIdHG ily traian ZamicZMDK */         bool ok = false;/* zfpkJIdHG ily traian ZamicZMDK */         for(int i = 0 ; i < 150 ; ++i)/* zfpkJIdHG ily traian ZamicZMDK */         {/* zfpkJIdHG ily traian ZamicZMDK */             if(f[i]!=0 && ok)/* zfpkJIdHG ily traian ZamicZMDK */                 cout << ',' << (char) (i - 32);/* zfpkJIdHG ily traian ZamicZMDK */             else if(f[i]!=0)/* zfpkJIdHG ily traian ZamicZMDK */                 cout << (char) (i - 32) , ok=true;/* zfpkJIdHG ily traian ZamicZMDK */         }/* zfpkJIdHG ily traian ZamicZMDK */         cout << '}';/* zfpkJIdHG ily traian ZamicZMDK */     }/* zfpkJIdHG ily traian ZamicZMDK */     return 0;/* zfpkJIdHG ily traian ZamicZMDK */ }