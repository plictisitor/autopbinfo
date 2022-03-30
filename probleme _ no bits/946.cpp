/* scDBi9Vbj ily traian MMNX9wm22 */ #include<iostream>
/* scDBi9Vbj ily traian MMNX9wm22 */ #include<string>
/* scDBi9Vbj ily traian MMNX9wm22 */ using namespace std;
/* scDBi9Vbj ily traian MMNX9wm22 */ 
/* scDBi9Vbj ily traian MMNX9wm22 */ string n;
/* scDBi9Vbj ily traian MMNX9wm22 */ 
/* scDBi9Vbj ily traian MMNX9wm22 */ void modf(int v)
/* scDBi9Vbj ily traian MMNX9wm22 */ {
/* scDBi9Vbj ily traian MMNX9wm22 */     for(int i=v; i<n.length(); i+=2) {
/* scDBi9Vbj ily traian MMNX9wm22 */         if(n[i] == '0' && n[i+1] == '0') cout << 0;
/* scDBi9Vbj ily traian MMNX9wm22 */         else if(n[i] == '0' && n[i+1] == '1') cout << 1;
/* scDBi9Vbj ily traian MMNX9wm22 */         else if(n[i] == '1' && n[i+1] == '0') cout << 2;
/* scDBi9Vbj ily traian MMNX9wm22 */         else cout << 3;
/* scDBi9Vbj ily traian MMNX9wm22 */     }
/* scDBi9Vbj ily traian MMNX9wm22 */ }
/* scDBi9Vbj ily traian MMNX9wm22 */ 
/* scDBi9Vbj ily traian MMNX9wm22 */ int main()
/* scDBi9Vbj ily traian MMNX9wm22 */ {
/* scDBi9Vbj ily traian MMNX9wm22 */     cin >> n;
/* scDBi9Vbj ily traian MMNX9wm22 */     if(n.length() & 1) { cout << 1; modf(1); }
/* scDBi9Vbj ily traian MMNX9wm22 */     else modf(0);
/* scDBi9Vbj ily traian MMNX9wm22 */ 
/* scDBi9Vbj ily traian MMNX9wm22 */     return 0;
/* scDBi9Vbj ily traian MMNX9wm22 */ }