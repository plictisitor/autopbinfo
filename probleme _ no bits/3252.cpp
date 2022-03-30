/* m0IO13yla ily traian IEb68VEgO */ void Alphanum(char s[], char cuv[][21], int &n, int num[], int &m){
/* m0IO13yla ily traian IEb68VEgO */     int i = 0;
/* m0IO13yla ily traian IEb68VEgO */     char a[101][101];
/* m0IO13yla ily traian IEb68VEgO */     int j = 0, cnt = 1;
/* m0IO13yla ily traian IEb68VEgO */     while(s[i]){
/* m0IO13yla ily traian IEb68VEgO */         if(s[i] != ' ')
/* m0IO13yla ily traian IEb68VEgO */             a[cnt][j++] = s[i];
/* m0IO13yla ily traian IEb68VEgO */         else if(s[i-1] != ' ')
/* m0IO13yla ily traian IEb68VEgO */             cnt++, j = 0;
/* m0IO13yla ily traian IEb68VEgO */         i++;
/* m0IO13yla ily traian IEb68VEgO */     }
/* m0IO13yla ily traian IEb68VEgO */     n = 0, m = 0;
/* m0IO13yla ily traian IEb68VEgO */     for(int i = 1; i <= cnt; ++i){
/* m0IO13yla ily traian IEb68VEgO */         if(a[i][0] >= '0' && a[i][0] <= '9')
/* m0IO13yla ily traian IEb68VEgO */         {
/* m0IO13yla ily traian IEb68VEgO */             int nu = 0;
/* m0IO13yla ily traian IEb68VEgO */             int j = 0;
/* m0IO13yla ily traian IEb68VEgO */             while(a[i][j]){
/* m0IO13yla ily traian IEb68VEgO */                 nu = nu * 10 + a[i][j] - '0';
/* m0IO13yla ily traian IEb68VEgO */                 j++;
/* m0IO13yla ily traian IEb68VEgO */             }
/* m0IO13yla ily traian IEb68VEgO */             num[m++] = nu;
/* m0IO13yla ily traian IEb68VEgO */         }
/* m0IO13yla ily traian IEb68VEgO */         else{
/* m0IO13yla ily traian IEb68VEgO */             int j = 0;
/* m0IO13yla ily traian IEb68VEgO */             while(a[i][j]){
/* m0IO13yla ily traian IEb68VEgO */                 cuv[n][j] = a[i][j];
/* m0IO13yla ily traian IEb68VEgO */                 j++;
/* m0IO13yla ily traian IEb68VEgO */             }
/* m0IO13yla ily traian IEb68VEgO */             n++;
/* m0IO13yla ily traian IEb68VEgO */         }
/* m0IO13yla ily traian IEb68VEgO */     }
/* m0IO13yla ily traian IEb68VEgO */ }