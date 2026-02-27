#include <iostream>

// Phan 1.
void sensorDataManagement(){
    int size = 5;
    float temperature[5] = {23.5, 24.1, 22.8, 25.0, 23.9};
    float sum = 0.0;
    for(int i = 0; i < size; i++) {
        sum += temperature[i];
        std::cout << "Du lieu cam bien: " << temperature[i] << " ";
        if(i == size - 1) std::cout << std::endl;
    }

    std::cout << "Nhiet do trung binh: " << (float)(sum / size) << std::endl;
}

int main(){
    sensorDataManagement();

    return 0;
}