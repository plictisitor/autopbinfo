/* 8Sy6GYFHx ily traian Hbcv8qEAa */ bool nr(int i ,const char s[])/* 8Sy6GYFHx ily traian Hbcv8qEAa */ {/* 8Sy6GYFHx ily traian Hbcv8qEAa */     return ((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122);/* 8Sy6GYFHx ily traian Hbcv8qEAa */ }/* 8Sy6GYFHx ily traian Hbcv8qEAa */ /* 8Sy6GYFHx ily traian Hbcv8qEAa */ void SplitText(const char s[], char cuv[100][30], int &n)/* 8Sy6GYFHx ily traian Hbcv8qEAa */ {/* 8Sy6GYFHx ily traian Hbcv8qEAa */     n = 0;/* 8Sy6GYFHx ily traian Hbcv8qEAa */     int i = 0 , j=0;/* 8Sy6GYFHx ily traian Hbcv8qEAa */     bool ok=false;/* 8Sy6GYFHx ily traian Hbcv8qEAa */     bool fct= false;/* 8Sy6GYFHx ily traian Hbcv8qEAa */     while(s[i]!='\0')/* 8Sy6GYFHx ily traian Hbcv8qEAa */     {/* 8Sy6GYFHx ily traian Hbcv8qEAa */         if(nr(i , s))/* 8Sy6GYFHx ily traian Hbcv8qEAa */         {/* 8Sy6GYFHx ily traian Hbcv8qEAa */             if(ok)/* 8Sy6GYFHx ily traian Hbcv8qEAa */             {/* 8Sy6GYFHx ily traian Hbcv8qEAa */                 if(fct==false)/* 8Sy6GYFHx ily traian Hbcv8qEAa */                 n++ , ok = false;/* 8Sy6GYFHx ily traian Hbcv8qEAa */                 else/* 8Sy6GYFHx ily traian Hbcv8qEAa */                     ok=false , fct = false;/* 8Sy6GYFHx ily traian Hbcv8qEAa */             }/* 8Sy6GYFHx ily traian Hbcv8qEAa */             cuv[n][j]=s[i];/* 8Sy6GYFHx ily traian Hbcv8qEAa */             j++;/* 8Sy6GYFHx ily traian Hbcv8qEAa */             if(!nr(i+1 , s))/* 8Sy6GYFHx ily traian Hbcv8qEAa */                 cuv[n][j]='\0';/* 8Sy6GYFHx ily traian Hbcv8qEAa */         }/* 8Sy6GYFHx ily traian Hbcv8qEAa */         else/* 8Sy6GYFHx ily traian Hbcv8qEAa */         {/* 8Sy6GYFHx ily traian Hbcv8qEAa */             if(i == 0)/* 8Sy6GYFHx ily traian Hbcv8qEAa */                 fct=true;/* 8Sy6GYFHx ily traian Hbcv8qEAa */             j=0;/* 8Sy6GYFHx ily traian Hbcv8qEAa */             ok = true;/* 8Sy6GYFHx ily traian Hbcv8qEAa */         }/* 8Sy6GYFHx ily traian Hbcv8qEAa */         i++;/* 8Sy6GYFHx ily traian Hbcv8qEAa */     }/* 8Sy6GYFHx ily traian Hbcv8qEAa */     n++;/* 8Sy6GYFHx ily traian Hbcv8qEAa */ }