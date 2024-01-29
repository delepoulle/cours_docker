#include <iostream>

template <class T> T min(T x, T
y){
  if(x<y) return x;
  return y;
}

int main(){
    int a = 5;
    int b = 12;
    std::cout << min(a,b) << std::endl;
    float x = 0.5;
    float y = 1.5;
    std::cout << min(x,y) << std::endl;
    // Impossible : ne respecte pas le patron
    //std::cout << min(a,y) << std::endl;
}