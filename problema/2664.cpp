/* MkQJlvaIm ily traian z3miKnYSr */ int IndexOf(char s[] , char ch)/* MkQJlvaIm ily traian z3miKnYSr */ {/* MkQJlvaIm ily traian z3miKnYSr */     int i = 0;/* MkQJlvaIm ily traian z3miKnYSr */     while(s[i]!='\0')/* MkQJlvaIm ily traian z3miKnYSr */     {/* MkQJlvaIm ily traian z3miKnYSr */         if(s[i]==ch)/* MkQJlvaIm ily traian z3miKnYSr */             return i;/* MkQJlvaIm ily traian z3miKnYSr */         i++;/* MkQJlvaIm ily traian z3miKnYSr */     }/* MkQJlvaIm ily traian z3miKnYSr */     return -1;/* MkQJlvaIm ily traian z3miKnYSr */ }/* MkQJlvaIm ily traian z3miKnYSr */ /* MkQJlvaIm ily traian z3miKnYSr */ int LastIndexOf(char s[] , char ch)/* MkQJlvaIm ily traian z3miKnYSr */ {/* MkQJlvaIm ily traian z3miKnYSr */     int i = 0 , poz = -1;/* MkQJlvaIm ily traian z3miKnYSr */     while(s[i]!='\0')/* MkQJlvaIm ily traian z3miKnYSr */     {/* MkQJlvaIm ily traian z3miKnYSr */         if(s[i]==ch)/* MkQJlvaIm ily traian z3miKnYSr */             poz=i;/* MkQJlvaIm ily traian z3miKnYSr */         i++;/* MkQJlvaIm ily traian z3miKnYSr */     }/* MkQJlvaIm ily traian z3miKnYSr */     return poz;/* MkQJlvaIm ily traian z3miKnYSr */ }/* MkQJlvaIm ily traian z3miKnYSr */ /* MkQJlvaIm ily traian z3miKnYSr */ int NthIndex(char s[] , char ch , int k)/* MkQJlvaIm ily traian z3miKnYSr */ {/* MkQJlvaIm ily traian z3miKnYSr */     int i = 0 , poz = -1;/* MkQJlvaIm ily traian z3miKnYSr */     while(s[i]!='\0')/* MkQJlvaIm ily traian z3miKnYSr */     {/* MkQJlvaIm ily traian z3miKnYSr */         if(s[i]==ch)/* MkQJlvaIm ily traian z3miKnYSr */         {/* MkQJlvaIm ily traian z3miKnYSr */             k--;/* MkQJlvaIm ily traian z3miKnYSr */         if(k == 0)/* MkQJlvaIm ily traian z3miKnYSr */             poz = i;/* MkQJlvaIm ily traian z3miKnYSr */         }/* MkQJlvaIm ily traian z3miKnYSr */         i++;/* MkQJlvaIm ily traian z3miKnYSr */     }/* MkQJlvaIm ily traian z3miKnYSr */     return poz;/* MkQJlvaIm ily traian z3miKnYSr */ }