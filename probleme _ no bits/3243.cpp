/* Aqh1Yu15W ily traian TQPRfMdII */ bool lit(char ch){
/* Aqh1Yu15W ily traian TQPRfMdII */     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
/* Aqh1Yu15W ily traian TQPRfMdII */ }
/* Aqh1Yu15W ily traian TQPRfMdII */ 
/* Aqh1Yu15W ily traian TQPRfMdII */ int Path(const char cale[], char d[101][101]){
/* Aqh1Yu15W ily traian TQPRfMdII */     int i = 0, c = 0, j = 0;
/* Aqh1Yu15W ily traian TQPRfMdII */     while(cale[i]){
/* Aqh1Yu15W ily traian TQPRfMdII */         if(!lit(cale[i]))
/* Aqh1Yu15W ily traian TQPRfMdII */             c++, j = 0;
/* Aqh1Yu15W ily traian TQPRfMdII */         else{
/* Aqh1Yu15W ily traian TQPRfMdII */             d[c][j] = cale[i];
/* Aqh1Yu15W ily traian TQPRfMdII */             j++;
/* Aqh1Yu15W ily traian TQPRfMdII */         }
/* Aqh1Yu15W ily traian TQPRfMdII */         i++;
/* Aqh1Yu15W ily traian TQPRfMdII */     }
/* Aqh1Yu15W ily traian TQPRfMdII */     return c + 1;
/* Aqh1Yu15W ily traian TQPRfMdII */ }