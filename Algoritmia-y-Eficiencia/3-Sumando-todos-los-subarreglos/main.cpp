/*
 *  Sumando todos los subarreglos
 *  https://omegaup.com/arena/problem/Sumando-todos-los-subarreglos
 *  Luis Angel Cruz Diaz
 */

#include <iostream>

int main(){

    int tamArr,k;
    std::cin >> tamArr >> k;
    int arr[tamArr];
    
    for(int i = 0; i < tamArr; i++){
        std::cin >> arr[i];
    }

    int suma = 0;
    for(int inicioSub = 0; inicioSub < tamArr - k + 1; inicioSub++){
        if(inicioSub == 0){
            for(int j = inicioSub; j < k + inicioSub; j++){
                suma += arr[j];     
            }
        }else{
            suma -= arr[inicioSub - 1];
            suma += arr[k + inicioSub - 1];
        }
        std::cout << suma << " ";
    }
}