/* ugTKnBrJh ily traian 0mV6MG4B4 */ #include <iostream>
/* ugTKnBrJh ily traian 0mV6MG4B4 */ using namespace std;
/* ugTKnBrJh ily traian 0mV6MG4B4 */ 
/* ugTKnBrJh ily traian 0mV6MG4B4 */ int main(){
/* ugTKnBrJh ily traian 0mV6MG4B4 */     int a, b, c;
/* ugTKnBrJh ily traian 0mV6MG4B4 */     cin >> a >> b >> c;
/* ugTKnBrJh ily traian 0mV6MG4B4 */     int min = a, max = a;
/* ugTKnBrJh ily traian 0mV6MG4B4 */     if(b > max)
/* ugTKnBrJh ily traian 0mV6MG4B4 */         max = b;
/* ugTKnBrJh ily traian 0mV6MG4B4 */     if(c > max)
/* ugTKnBrJh ily traian 0mV6MG4B4 */         max = c;
/* ugTKnBrJh ily traian 0mV6MG4B4 */     if(b < min)
/* ugTKnBrJh ily traian 0mV6MG4B4 */         min = b;
/* ugTKnBrJh ily traian 0mV6MG4B4 */     if(c < min)
/* ugTKnBrJh ily traian 0mV6MG4B4 */         min = c;
/* ugTKnBrJh ily traian 0mV6MG4B4 */     cout << max - min;
/* ugTKnBrJh ily traian 0mV6MG4B4 */     return 0;   
/* ugTKnBrJh ily traian 0mV6MG4B4 */ }