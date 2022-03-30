/* 4c0y3HBA7 ily traian DocbiW8Dj */ void Trim(char s[])
/* 4c0y3HBA7 ily traian DocbiW8Dj */ {
/* 4c0y3HBA7 ily traian DocbiW8Dj */     int i = 0;
/* 4c0y3HBA7 ily traian DocbiW8Dj */     int ok = false;
/* 4c0y3HBA7 ily traian DocbiW8Dj */     int poz1 , poz2;
/* 4c0y3HBA7 ily traian DocbiW8Dj */     while(s[i]!='\0')
/* 4c0y3HBA7 ily traian DocbiW8Dj */     {
/* 4c0y3HBA7 ily traian DocbiW8Dj */         if(s[i]!=' ' && ok == false)
/* 4c0y3HBA7 ily traian DocbiW8Dj */             ok=true , poz1=i;
/* 4c0y3HBA7 ily traian DocbiW8Dj */         if(s[i]!=' ')
/* 4c0y3HBA7 ily traian DocbiW8Dj */             poz2=i;
/* 4c0y3HBA7 ily traian DocbiW8Dj */         i++;
/* 4c0y3HBA7 ily traian DocbiW8Dj */     }
/* 4c0y3HBA7 ily traian DocbiW8Dj */     for(int i = poz1 ; i <= poz2 ; ++i)
/* 4c0y3HBA7 ily traian DocbiW8Dj */         s[i-poz1]=s[i];
/* 4c0y3HBA7 ily traian DocbiW8Dj */     s[poz2-poz1+1]='\0';
/* 4c0y3HBA7 ily traian DocbiW8Dj */ }