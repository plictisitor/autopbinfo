/* MHoS8XJwu ily traian TCIEVFXLa */ #include <iostream>
/* MHoS8XJwu ily traian TCIEVFXLa */ using namespace std;
/* MHoS8XJwu ily traian TCIEVFXLa */ 
/* MHoS8XJwu ily traian TCIEVFXLa */ char ch[256];
/* MHoS8XJwu ily traian TCIEVFXLa */ 
/* MHoS8XJwu ily traian TCIEVFXLa */ int main()
/* MHoS8XJwu ily traian TCIEVFXLa */ {
/* MHoS8XJwu ily traian TCIEVFXLa */     cin.getline(ch , 256);
/* MHoS8XJwu ily traian TCIEVFXLa */     int i = 0;
/* MHoS8XJwu ily traian TCIEVFXLa */     while(ch[i]!='\0')
/* MHoS8XJwu ily traian TCIEVFXLa */     {
/* MHoS8XJwu ily traian TCIEVFXLa */         if(i==0 || ((int)ch[i-1]==32 || (int)ch[i+1]==32) && ((int)ch[i] >= 97 && (int)ch[i] <= 122) || (ch[i+1]=='\0')) 
/* MHoS8XJwu ily traian TCIEVFXLa */         {
/* MHoS8XJwu ily traian TCIEVFXLa */             int nr=(int)ch[i]-32;
/* MHoS8XJwu ily traian TCIEVFXLa */             cout << (char)nr;
/* MHoS8XJwu ily traian TCIEVFXLa */         }
/* MHoS8XJwu ily traian TCIEVFXLa */         else
/* MHoS8XJwu ily traian TCIEVFXLa */             cout << ch[i];
/* MHoS8XJwu ily traian TCIEVFXLa */         i++;
/* MHoS8XJwu ily traian TCIEVFXLa */     }
/* MHoS8XJwu ily traian TCIEVFXLa */     return 0;
/* MHoS8XJwu ily traian TCIEVFXLa */ }