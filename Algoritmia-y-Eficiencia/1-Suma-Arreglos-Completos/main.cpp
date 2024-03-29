/*
 *  Sumas sobre arreglos completos - Problema 1
 *  https://omegaup.com/arena/problem/Sumas-sobre-arreglos-completos/#problems
 *  Author: Luis Angel Cruz Díaz
 *
 */

#include <iostream>

int main() {
    int n,m;
    std::cin >> n >> m;
    int arr[n];

    for(int i = 0; i < n;i++){
        std::cin >> arr[i];
    }

    int sum = 0;
    
    for (int i = 0; i < m; ++i) {
		int temp;
        std::cin >> temp;
        sum += temp;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << (arr[i] += sum) << " ";
    }

    return 0;
}