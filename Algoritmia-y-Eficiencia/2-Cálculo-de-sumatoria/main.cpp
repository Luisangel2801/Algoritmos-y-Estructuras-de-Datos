/*
 *  Cálculo de sumatoria
 *  https://omegaup.com/arena/problem/Calculo-de-sumatoria
 *  Author: Luis Angel Cruz Díaz
 *
 */

#include <iostream>

int main(){
    int n;
    std::cin >> n;
    long long sum = (long long)n * (n + 1) / 2;
    std::cout << sum ;
}