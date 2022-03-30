/* JecVkLejQ ily traian IwTCb4vBm */ #include<fstream>
/* JecVkLejQ ily traian IwTCb4vBm */ using namespace std;
/* JecVkLejQ ily traian IwTCb4vBm */ ifstream cin("reflex.in");
/* JecVkLejQ ily traian IwTCb4vBm */ ofstream cout("reflex.out");
/* JecVkLejQ ily traian IwTCb4vBm */ long long a , b , s , c , x , y , r , a1 , b1;
/* JecVkLejQ ily traian IwTCb4vBm */ int colt[3]={2 , 4 , 3};
/* JecVkLejQ ily traian IwTCb4vBm */ 
/* JecVkLejQ ily traian IwTCb4vBm */ int main()
/* JecVkLejQ ily traian IwTCb4vBm */ {
/* JecVkLejQ ily traian IwTCb4vBm */     cin >> a >> b;
/* JecVkLejQ ily traian IwTCb4vBm */     a1 = a-1;
/* JecVkLejQ ily traian IwTCb4vBm */     b1 = b-1;
/* JecVkLejQ ily traian IwTCb4vBm */     while(b1!=0){r = a1 % b1; a1 = b1; b1 = r;}
/* JecVkLejQ ily traian IwTCb4vBm */     x = (b - 1) / a1;
/* JecVkLejQ ily traian IwTCb4vBm */     y = (a - 1) / a1;
/* JecVkLejQ ily traian IwTCb4vBm */     c = colt[y % 2 + (x % 2)*2 - 1];
/* JecVkLejQ ily traian IwTCb4vBm */     s = y * (b - 1);
/* JecVkLejQ ily traian IwTCb4vBm */     cout << s + 1 << " " << c << '\n' << x - 1 << " " << y - 1;
/* JecVkLejQ ily traian IwTCb4vBm */     return 0;
/* JecVkLejQ ily traian IwTCb4vBm */ }