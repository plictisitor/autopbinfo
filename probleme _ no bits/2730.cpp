/* e4yERMGO2 ily traian LEyDVzy4G */ bool okkk(char ch)
/* e4yERMGO2 ily traian LEyDVzy4G */ {
/* e4yERMGO2 ily traian LEyDVzy4G */     return ch >= '0' && ch <= '9';
/* e4yERMGO2 ily traian LEyDVzy4G */ }
/* e4yERMGO2 ily traian LEyDVzy4G */ 
/* e4yERMGO2 ily traian LEyDVzy4G */ int SC(char s[])
/* e4yERMGO2 ily traian LEyDVzy4G */ {
/* e4yERMGO2 ily traian LEyDVzy4G */     int i = 0;
/* e4yERMGO2 ily traian LEyDVzy4G */     int nr = 0 , sum = 0;
/* e4yERMGO2 ily traian LEyDVzy4G */     while(s[i]!='\0')
/* e4yERMGO2 ily traian LEyDVzy4G */     {
/* e4yERMGO2 ily traian LEyDVzy4G */         if(okkk(s[i]))
/* e4yERMGO2 ily traian LEyDVzy4G */             sum += s[i]-'0';
/* e4yERMGO2 ily traian LEyDVzy4G */         i++;
/* e4yERMGO2 ily traian LEyDVzy4G */     }
/* e4yERMGO2 ily traian LEyDVzy4G */     return sum;
/* e4yERMGO2 ily traian LEyDVzy4G */ }