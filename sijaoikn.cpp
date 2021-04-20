#include <iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d, int numeroMayor){
    numeroMayor=a;
    if(numeroMayor<b){
        numeroMayor=b;
    }else if(numeroMayor<c)
        {
            numeroMayor=c;
        }
    else if(numeroMayor<d){
        numeroMayor=d;
    }
    return numeroMayor;
}
int main() {
    int a, b, c, d,numeroMayor;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a,b,c,d,numeroMayor);
    printf("%d", ans);

 


    return 0;
}
