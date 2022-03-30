/* HC6uxhPI9 ily traian TPw1EQtPg */ void ReverseWords(char s[]){
/* HC6uxhPI9 ily traian TPw1EQtPg */     int i = 0, j = 0, cnt = 0;
/* HC6uxhPI9 ily traian TPw1EQtPg */     while(s[i]){
/* HC6uxhPI9 ily traian TPw1EQtPg */         if(s[i] == ' '){
/* HC6uxhPI9 ily traian TPw1EQtPg */             j = cnt;
/* HC6uxhPI9 ily traian TPw1EQtPg */             cnt = i - 1;
/* HC6uxhPI9 ily traian TPw1EQtPg */             int cpy = cnt;
/* HC6uxhPI9 ily traian TPw1EQtPg */             while(j < cnt)
/* HC6uxhPI9 ily traian TPw1EQtPg */                 swap(s[j], s[cnt]), cnt --, j ++;
/* HC6uxhPI9 ily traian TPw1EQtPg */             cnt = cpy + 2;
/* HC6uxhPI9 ily traian TPw1EQtPg */         }
/* HC6uxhPI9 ily traian TPw1EQtPg */         i++;
/* HC6uxhPI9 ily traian TPw1EQtPg */     }
/* HC6uxhPI9 ily traian TPw1EQtPg */     j = cnt;
/* HC6uxhPI9 ily traian TPw1EQtPg */     cnt = i - 1;
/* HC6uxhPI9 ily traian TPw1EQtPg */     int cpy = cnt;
/* HC6uxhPI9 ily traian TPw1EQtPg */     while(j < cnt)
/* HC6uxhPI9 ily traian TPw1EQtPg */         swap(s[j], s[cnt]), cnt --, j ++;
/* HC6uxhPI9 ily traian TPw1EQtPg */     cnt = cpy + 2;
/* HC6uxhPI9 ily traian TPw1EQtPg */     int a = 0, b = i - 1;
/* HC6uxhPI9 ily traian TPw1EQtPg */     while(a < b)
/* HC6uxhPI9 ily traian TPw1EQtPg */         swap(s[a], s[b]), a ++, b --;
/* HC6uxhPI9 ily traian TPw1EQtPg */ }