# CPP00
## ex00
### megaphone.cpp
課題要件はめちゃくちゃ簡単。
とりあえず、コマンドライン引数を大文字に変換して出力するプログラムを作成する。
もし引数がなければ、"* LOUD AND UNBEARABLE FEEDBACK NOISE *"と出力する。

どこまでライブラリを使用していいのかが分からん。

## 許可されているライブラリについて

**General rules**の**Allowed/Forbidden**セクションより：

> **You are allowed to use almost everything from the standard library.** Thus, instead of sticking to what you already know, it would be smart to use the C++-ish versions of the C functions you are used to as much as possible.

> However, you can't use any other external library. It means **C++11 (and derived forms) and Boost libraries are forbidden**. The following functions are forbidden too: ***printf(), *alloc() and free()**. If you use them, your grade will be 0 and that's it.

> **You are allowed to use the STL only in Modules 08 and 09.** That means: **no Containers (vector/list/map, and so forth) and no Algorithms (anything that requires including the <algorithm> header)** until then. Otherwise, your grade will be -42.

うーん、どこまで使って良いんやろか。
標準ライブラリってのが何を指すのかが不明確やな。
STLとはまた別物っぽい。

てか、While文じゃなく、For文使ってもいいよな！！Normないし。
とりあえず、`<iostream>` と `<string>` は使ってもいいと思う。

c++98の標準ライブラリについて調べる。

標準ライブラリは、ホンマに大きい集合。
STLも含まれている。

使用して良いライブラリはSTL以外の標準ライブラリって認識でOKかな。
まあiostreamとstringは使ってもいいやろ。

stringの扱い。
参考にしたサイト
- [C++ の文字列操作まとめ](https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3)

string型にたいして、長さを取得したい。
やり方、SizeとLengthの2つあるけど、違いはあるんやろか。
- [C++ string クラスの size や length は strlen とは違う †](https://ruche-home.net/boyaki/2011-06-30/Cstrings)
おもろい記事発見。

なんとかして、CPPのライブラリの中身を確認したい。
どうやって見れば良いんや－－－。

とりあえず、調べて見たところ、Length も Size も同じものを指してるっぽい。

あとは、大文字にしたい。
てかCPPのライブラリどっかにまとまってないかな。
[第 5 章 C++ 標準ライブラリ](https://docs.oracle.com/cd/E19957-01/806-4840/Standard.html)
良さげやけど、C++11以降のライブラリが多い。
うーん、C++98のライブラリを調べるのは大変やな。
[Wiki](https://ja.wikibooks.org/wiki/C%2B%2B/%E6%A8%99%E6%BA%96%E3%83%A9%E3%82%A4%E3%83%96%E3%83%A9%E3%83%AA#)
Wiki発見。

とりあえず、C++98 で使えるライブラリのcctypeに、toupperがあるからそれ使おう。