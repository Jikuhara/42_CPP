#include <fstream>
#include <iostream>
#include <sstream>
#include <streambuf>
#include <string>
#include <unistd.h>

// カスタムストリームバッファクラス
class CustomStreambuf : public std::streambuf
{
  private:
	std::string buffer_;

  public:
	// 文字が出力される度に呼ばれる
	virtual int_type overflow(int_type ch)
	{
		std::cout << "[DEBUG] overflow called with char: '" << (char)ch << "'" << std::endl;
		buffer_ += (char)ch;
		return (ch);
	}

	// バッファをフラッシュする時に呼ばれる
	virtual int sync()
	{
		std::cout << "[DEBUG] sync called, buffer content: \"" << buffer_ << "\"" << std::endl;

		// 実際に標準出力に書き込み
		write(STDOUT_FILENO, buffer_.c_str(), buffer_.size());
		buffer_.clear();
		return (0);
	}

	std::string getBuffer() const
	{
		return (buffer_);
	}
};

int	main(void)
{
	CustomStreambuf	custom_buf;
	int				number;
	double			pi;
	bool			flag;

	std::cout << "=== cout の内部動作を観察 ===" << std::endl;
	// 1. 通常のcoutの動作
	std::cout << "\n1. 通常のcout:" << std::endl;
	std::cout << "Hello, World!" << std::endl;
	// 2. バッファリングの確認
	std::cout << "\n2. バッファリングの確認:" << std::endl;
	std::cout << "改行なし1";
	std::cout << "改行なし2";
	std::cout << "改行なし3" << std::endl; // endlでフラッシュ
	// 3. 明示的なフラッシュ
	std::cout << "\n3. 明示的なフラッシュ:" << std::endl;
	std::cout << "フラッシュ前";
	std::cout.flush(); // 明示的にフラッシュ
	std::cout << "フラッシュ後" << std::endl;
	// 4. カスタムストリームバッファを使用
	std::cout << "\n4. カスタムストリームバッファ:" << std::endl;
	std::ostream custom_stream(&custom_buf);
	custom_stream << "カスタム";
	custom_stream << "ストリーム";
	custom_stream.flush();
	// 5. 異なるデータ型の出力
	std::cout << "\n5. 異なるデータ型:" << std::endl;
	number = 42;
	pi = 3.14159;
	flag = true;
	std::cout << "整数: " << number << std::endl;
	std::cout << "浮動小数点: " << pi << std::endl;
	std::cout << "真偽値: " << flag << std::endl;
	// 6. ストリームの状態確認
	std::cout << "\n6. ストリームの状態:" << std::endl;
	std::cout << "good(): " << std::cout.good() << std::endl;
	std::cout << "eof(): " << std::cout.eof() << std::endl;
	std::cout << "fail(): " << std::cout.fail() << std::endl;
	std::cout << "bad(): " << std::cout.bad() << std::endl;
	return (0);
}
