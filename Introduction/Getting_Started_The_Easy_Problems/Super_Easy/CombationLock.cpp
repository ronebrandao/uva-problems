#include <iostream>
#include <vector>

using namespace std;

int main() {

  int init, first, second, third;
  while (scanf("%d %d %d %d", &init, &first, &second, &third), 
        init || first || second || third) {
          
    int degrees = 720;

    degrees += 9 * (40 - (first - init));

    degrees += 360;
    
    degrees += 9 * ((40 - first) + second);
       
    degrees += 9 * (40 - (third - second));
    
    printf("%d \n", degrees);

  }

}


