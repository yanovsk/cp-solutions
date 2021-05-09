#include <iostream>
using namespace std;

int main() {
    int C, X, M;
    double X;

    cin >> C >> X >> M;
    
    double mpg[6]; 
    double mph[6];

    for(int i = 0; i < 6; i++){
      cin >> mph[i] >> mpg[i];
    }

    int len = *(&mpg + 1) - mpg;

    for(int i = 0; i < len; i++) {
      double time = M / mph[i];

      if(C/2 - (M / mpg[i]) - (X * time) > 0) {
        cout << "YES " << mph[i];
        return 0;
      }
    }
    cout << "NO";

    return 0;

}

