# CPP00
## ex01
### My Awesome PhoneBook
めっちゃおもろそう。
CPPって感じしてきた。
クラスの作成か。

> • PhoneBook  
◦ It has an array of contacts.  
◦ It can store a maximum of 8 contacts. If the user tries to add a 9th contact, replace the oldest one by the new one.  
◦ Please note that dynamic allocation is forbidden.  
• Contact  
◦ Stands for a phonebook contact.  


PhoneBookとContactのクラスを作成するんやな。
#### PhoneBook
- PhoneBookには最大で8つのContactを保存できる。
- 9つ目を追加すると、最も古いContactが削除される。
- 動的メモリ確保は禁止されている。
#### Contact
- 情報なさすぎ。文字数制限とかないんかな。動的メモリ確保禁止やし。

> In your code, the phonebook must be instantiated as an instance of the PhoneBook
class. Same thing for the contacts. Each one of them must be instantiated as an instance
of the Contact class. You’re free to design the classes as you like but keep in mind that
anything that will always be used inside a class is private, and that anything that can be
used outside a class is public.

英語むずい。。。
なんかイントラの動画見ろって書いある。
めんどい～～～。

> At program start-up, the phonebook is empty and the user is prompted to enter one
of three commands. The program only accepts ADD, SEARCH and EXIT.

OKOK。とりあえず、空で始めれば良いんやな。
んで、ADD, SEARCH, EXITのコマンドを受け付けてほかは無視と。

> • ADD: save a new contact  
◦ If the user enters this command, they are prompted to input the information
of the new contact one field at a time. Once all the fields have been completed,
add the contact to the phonebook.  
◦ The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.

OKOK。
- ADDコマンドで、コンタクトの情報を入力して保存する。
- フィールドは、first name, last name, nickname, phone number, darkest secret。  
→ここは動的メモリ確保？？けど禁止されてるくね。。
- 空のフィールドは保存できない。  
→これは1つのフィールドがからの時点で無理なのか。それとも全て空だと無理なのか。

> • SEARCH: display a specific contact  
◦ Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.  
◦ Each column must be 10 characters wide. A pipe character (’|’) separates them. The text must be right-aligned. If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).  
◦ Then, prompt the user again for the index of the entry to display. If the index is out of range or wrong, define a relevant behavior. Otherwise, display the contact information, one field per line.  

OKOK。
- SEARCHコマンドで、コンタクトの情報を表示する。
- 4列表示で、index, first name, last name, nickname。
- 各列は10文字幅で、パイプ（|）区切り
- 長いテキストは切り捨て、最後の文字をドット（.）に置換
- その後、表示するエントリのインデックスを入力するように促す。
- インデックスが範囲外または間違っている場合は、なにかしら適切な動作を定義する。
- 正しいインデックスが入力された場合は、該当するコンタクトの情報を表示する。

> EXIT
◦ The program quits and the contacts are lost forever!

- EXITコマンドでプログラムを終了する。
- Contactは全て削除。
こいつは簡単。

この課題やるうえでは、Contactの情報切り取っても良さそう。
やけど、うーん。残したいけどなぁ。表示できひんとはいえ。
けど動的メモリ確保駄目やしなぁ。

[CPP00 解説](https://42-cursus.gitbook.io/guide/4-rank-04/cpp-00-04-doing/cpp00)

鬼分かりやすいぞこれ。

[What is OOP?](https://www.techtarget.com/searchapparchitecture/definition/object-oriented-programming-OOP)

Video見た。
英語むずいよぉぉ。
Listningの練習にもなるし、見ておいて損はないけど、だるいなぁ。

[CPPを100秒で解説（YouTube）](https://www.youtube.com/watch?v=MNeX4EGtR5Y&ab_channel=Fireship)

うーー、英語きつい。。

[C++ Exercise](https://www.w3schools.com/cpp/default.asp)
このサイトめっちゃ勉強しやすそう。
一旦これやり込むか。

[CPP00-04についての解説](https://haglobah.github.io/Mastering-42/holy_graph/cpp00-04.html)
てかNormないからWild Card使えるんやな。
CPP00 ex02は後回しが良いらしい。OK~。

w3schoolでクラスについて学習している。
[CPPのクラスについて](https://www.w3schools.com/cpp/cpp_classes.asp)
クラスの所感。
要素に対する演算（関数）をまとめたもの。
例えば、自然数と足し算みたいな。
それを外側から見れるようにするのが、Public,逆がPrivate。

今回は、Contactに、
5つのフィールド（first name, last name, nickname, phone number, darkest secret）を持たせる。

それをPhoneBookに8つまで保存できるようにする。
PhoneBookにcontactを認識させるにはどうしたら良いんやろ。

てか、Contactの方は簡単に作れそう。

#### コンストラクター
クラスで同じ名前の関数を定義すると、コンストラクターになる。
コンストラクターは、クラスのオブジェクトが生成されるときに自動的に呼び出される。
これめっちゃ便利そうやん。
毎回初期化する必要がないのあつい。

できそう！！
とりあえず、Contactを作成した。
次にPhoneBookを作成する。

こっからなにするんやーー。
とりあえず、Contactを入力・出力する関数を作成するか。

入力機構分からんすぎ。
[CPPの入力について](https://www.w3schools.com/cpp/cpp_input_validation.asp)
わかりやすいこれ。

分からんすぎるし、Githubを探索。
[github anurtiagさんのCPP00](https://github.com/anurtiag/cpp00/blob/main/ex01/Contact.cpp)
10個ぐらい調べた。これが一番分かりやすい。

なるほど。Privateは中から参照すれば良いのか。
