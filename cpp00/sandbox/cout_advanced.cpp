#include <iostream>
#include <iomanip>
#include <limits>

int main() {
    std::cout << "=== coutの詳細な動作解析 ===" << std::endl;

    // 1. operator<<の型別動作確認
    std::cout << "\n1. operator<<の型別動作:" << std::endl;

    char c = 'A';
    signed char sc = 65;
    unsigned char uc = 65;

    std::cout << "char 'A': " << c << std::endl;
    std::cout << "signed char 65: " << sc << std::endl;
    std::cout << "unsigned char 65: " << uc << std::endl;

    // 2. 数値の基数変換
    std::cout << "\n2. 数値の基数変換:" << std::endl;
    int num = 255;

    std::cout << "10進数: " << std::dec << num << std::endl;
    std::cout << "16進数: " << std::hex << num << std::endl;
    std::cout << "8進数: " << std::oct << num << std::endl;
    std::cout << std::dec; // 10進数に戻す

    // 3. 精度制御
    std::cout << "\n3. 精度制御:" << std::endl;
    double pi = 3.141592653589793;

    std::cout << "デフォルト: " << pi << std::endl;
    std::cout << "精度6: " << std::setprecision(6) << pi << std::endl;
    std::cout << "精度10: " << std::setprecision(10) << pi << std::endl;
    std::cout << "科学記法: " << std::scientific << pi << std::endl;
    std::cout << "固定小数点: " << std::fixed << pi << std::endl;

    // 4. フィールド幅とアラインメント
    std::cout << "\n4. フィールド幅とアラインメント:" << std::endl;
    std::cout << "右詰め: |" << std::setw(10) << std::right << 123 << "|" << std::endl;
    std::cout << "左詰め: |" << std::setw(10) << std::left << 123 << "|" << std::endl;
    std::cout << "中央揃え: |" << std::setw(10) << std::internal << 123 << "|" << std::endl;
    std::cout << "ゼロ埋め: |" << std::setw(10) << std::setfill('0') << 123 << "|" << std::endl;

    // 5. ブール値の表示
    std::cout << "\n5. ブール値の表示:" << std::endl;
    bool flag = true;

    std::cout << "数値形式: " << flag << std::endl;
    std::cout << "文字形式: " << std::boolalpha << flag << std::endl;
    std::cout << "falseの場合: " << false << std::endl;

    // 6. ポインタの表示
    std::cout << "\n6. ポインタの表示:" << std::endl;
    int value = 42;
    int* ptr = &value;

    std::cout << "値: " << value << std::endl;
    std::cout << "アドレス: " << ptr << std::endl;
    std::cout << "アドレス(void*): " << static_cast<void*>(ptr) << std::endl;

    // 7. 文字列の特殊処理
    std::cout << "\n7. 文字列の特殊処理:" << std::endl;
    const char* str = "Hello, World!";
    char* null_str = NULL;

    std::cout << "通常の文字列: " << str << std::endl;
    std::cout << "NULL文字列: " << null_str << std::endl;

    // 8. 連続した<<演算子の動作
    std::cout << "\n8. 連続した<<演算子の動作:" << std::endl;
    std::cout << "これは " << "連続した " << "出力 " << "です" << std::endl;

    // 9. 改行文字とendlの違い
    std::cout << "\n9. 改行文字とendlの違い:" << std::endl;
    std::cout << "改行文字使用\n";
    std::cout << "endl使用" << std::endl;
    std::cout << "バッファリング確認のため文字列" << std::flush;

    return 0;
}
