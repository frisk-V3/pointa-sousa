#include <iostream>

// ① ポインタを渡す関数
void ptrIncrement(int* p) {
    *p = *p + 1; 
}

// ② 参照を渡す関数
void refIncrement(int& r) {
    r = r + 1; 
}

int main() {
    int num = 10;

    // 実験1: ポインタで値を書き換える
    ptrIncrement(&num); 
    std::cout << "ポインタ経由で増加: " << num << "\n"; 

    // 実験2: 参照（リファレンス）で値を書き換える
    refIncrement(num);  
    std::cout << "参照経由で増加: " << num << "\n";   

    // 実験3: メモリのサイズを見てみる
    std::cout << "int型のサイズ: " << sizeof(int) << " バイト\n";
    std::cout << "ポインタ型のサイズ: " << sizeof(int*) << " バイト\n";

    return 0;
}
