// // 3.2 C++言語の基本構造
// // 何もしないプログラム(1)

//#include<iostream>

// int main(){
//     return 0;
// }


// 仮数を用いて2つの整数を加算する
// int add( int a, int b){
//     return a + b;
// }

// int main(){
//     int S = add(7, 3);

//     return 0;
// }


// 関数のプロトタイプ宣言
// int add(int, int);

// int main(){
//     int S = add(7, 3);

//     return 0;
// }

// int add (int a, int b){
//     return a + b;
// }


// 何もしないプログラム(2)
// int main(

// )
// {

//     return 0;
// }


// 何もしないプログラム(3)
// int main(){return 0;}

// // 3.3 ライブラリ
// // 画面に文字列を出力する
// #include<iostream>

// int main(){
//     printf("Accepted!\n");

//     return 0;
// }


// // 4.1 変数
// // 2つの値を交換する
// #include<iostream>
// int main (){
//     //  int a, b, t;
//     int a = 5, b = 8, t;

//     a = 5;  // aに5を格納
//     b = 8;  // bに8を格納

//     t = a;  // tにaの値を格納
//     a = b;  // aにbの値を格納、この直後aには8が格納されている 
//     b = t;  // bにtの値を格納、この直後bには5が格納されている

//     return 0;
// }

// #include<iostream>  //入出力を行うためのライブラリを含める

// int main(){
//     int n, S;           // 整数を格納する2つの変数を宣言
//     std::cin >> n;      // 標準入力から１つの整数をnに入力
//     S = n*n/2 + n/2;    // Sの値を計算
//     std::cout << S << "\n"; //標準出力にSの値と改行を入力

//     return 0;

// }

// 代入演算の結合
// int main(){
//     int x, y, z;
//     z = y = x = 10;
// }

// // 5.2演習問題
// // 1つの整数xを読み込んで、
// // xの3乗を計算し結果を出力するプログラムを作成
// #include<iostream>
// using namespace std;
 
// int main(){
//   int x;

//   printf("xに入る数値を入力して下さい >>\n");
//   printf("x = ");

//   cin >> x;

//   printf("解答はこちら >> X = ");
//   cout << x*x*x << endl;

//   return 0;		 
// }



// 6.1 標準出力
// %d = 10進数として出力する
// %C = 文字(1文字)として出力する
// %f = 不動小数点数として出力する
// %s = 文字列として出力する

// printf関数による、変数の値を出力するプログラム
// #include<iostream>

// int main(){
//   int a, b, c;
//   a = 100;
//   b = 23;
//   c = a + b;
//   printf("%d + %d = %d\n", a, b, c);

//   return 0;
// }

// 浮動小数点数を出力する
// #include<iostream>

// int main(){
//   double a, b;
//   char plus = '+'; // 文字はシングルクォーテーションで括る
//   char equql = '=';
//   a = 0.3;
//   b = 1.7;

//   printf("%f %c %f %c %f \n", a, plus, b, equql, a+b);

//   return 0;
// }

// coutによる出力
// #include<iostream>
// using namespace std;

// int main(){
//   cout << "Accepted!" << '\n';
//   return 0;
// }

// coutによる整数値の出力
// #include<iostream>
// using namespace std;

// int main(){
//   int a, b, c;
//   a = 100;
//   b = 23;
//   c = a + b;

//   cout << a << "+" << b << "=" << c << endl;

//   return 0;
// }

// coutによる浮動小数点の出力
// #include<iostream>
// using namespace std;

// int main(){
//   double a, b;
//   char plus= '+';
//   char equal = '=';

//   a = 0.3;
//   b = 1.7;

//   cout << a << " " << plus << " " << b << " ";
//   cout << equal << " " << a+b << endl;

//   return 0;
// }

// // 6.2 標準入力
// // 6.2.1 scanfによる入力
// // 入力された２つの整数を加算する
// #include<iostream>

// int main(){
//   int a, b, c;
//   scanf("%d %d", &a, &b);
//   c = a + b;
//   printf("%d + %d = %d\n", a, b, c);

//   return 0;
//   // scanf("入力変換指定子", &変数名);
// }

// // 入力変換指定子
// // %d = int値を10進数として入力する
// // %C = 文字(1文字)として入力する
// // %lf = 不動小数点数として入力する
// //%s = 文字列として入力する

// // scanfで異なる型の変数へ入力する
// #include<iostream>

// int main(){
//   int age;
//   char blood;
//   double height;

//   scanf("%d %c %lf", &age, &blood, &height);

//   printf("age = %d, blood = %c, ", age, blood);
//   printf("height = %f\n", height);

//   return 0;
// }

// // cinにより入力された２つの整数を加算する
// #include<iostream>
// using namespace std;

// int main(){
//   int a, b, c;
//   cin >> a >> b;
//   c = a + b;
//   cout << a << " + " << b << " = " << c << endl;

//   return 0;
// }

// // cinで異なる型の変数に入力する
// #include<iostream>
// using namespace std;

// int main(){
//   int age;
//   char blood;
//   double height;

//   cin >> age >> blood >> height;

//   cout << "age = " << age << ", blood = " << blood;
//   cout << ", height = " << height << endl;

//   return 0;
// }

// // C：Rectangle
// // 縦a_cm、横b_cmの長方形の面積と周の長さを求めるプログラムを作成する
// #include<iostream>
// using namespace std;

// int main(){
//   int a, b, c, d;
//   cin >> a >> b;
//   c = a * b;
//   d = 2 * (a + b);
//   // d = (a * 2) + (b * 2);

//   cout << "面積" << c << "cm2" << " ";
//   cout << "円周" << d << "cm" << endl;

//   return 0;
// }


// // 7.1 代入演算子
// // 代入演算の例
// #include<iostream>
// using namespace std;

// int main() {
//   int S, M, L, base = 1000;
//   cin >> S >> M >> L;

//   base += S;
//   base += M + L;

//   cout << base << endl;

//   return 0;
// }
// // 代入演算子
// // = , a = b , aにbを代入する
// // += , a += b , [aにbを加えた値]をaに代入する => a = a + b
// // -= , a -= b , [aからbを引いた値]をaに代入する => a = a - b
// // *= , a *= b , [aにbを掛けた値]をaに代入する => a = a * b
// // /= , a /= b , [aをbで割った値]をaに代入する => a = a / b
// // %= , a %= b , [aをbで割った余りの値]をaに代入する => a = a % b

// // 代入演算の結合
// #include<iostream>
// using namespace std;

// int main(){
//   int a = 10, b = 2, c = 0;

//   c = b += a -= 7; // c = ( b += ( a -= 7));
//   cout << c << endl;

//   return 0;
// }

// // インクリメント演算子
// #include<iostream>
// using namespace std;

// int main(){
//     int i = 0, j = 0;

//     cout << i++ << " "; // 0が出力される
//     cout << i << " ";   // 1が出力される
//     cout << ++j << " "; // 1が出力される
//     cout << j << endl;  // 1が出力される

//     return 0;
// }

// // インクリメント・デクリメント演算子
// # include<iostream>
// using namespace std;

// int main(){
//     int a, b;
//     a = 1;
//     b = a++ ;
//     cout << "a -> " << a << " , ";
//     cout << "b -> " << b << endl;
//     a = 1;
//     b = ++a;
//     cout << "a -> " << a << " , ";
//     cout << "b -> " << b << endl;
//     a = 1;
//     b = a--;
//     cout << "a -> " << a << " , ";
//     cout << "b -> " << b << endl;
//     a = 1;
//     b = --a;
//     cout << "a -> " << a << " , ";
//     cout << "b -> " << b << endl;
    
//     return 0;
// }
// 7.3 等価演算子・不等価演算子
// 7.4 変数に対する等価演算・不等価演算
// #include<iostream>
// using namespace std;

// int main(){
//     int a, b, c;
//     a = b = 3;
//     c = 7;

//     bool r1 = (a == b); // true
//     bool r2 = (a == c); // false
//     bool r3 = (a != b); // false
//     bool r4 = (a != c); // true

//     cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl;

//     return 0;
// }

// // 等価演算の結合
// #include<iostream>
// using namespace std;

// int main (){
//     int a = 3, b = 3, c = 3;
//     bool result1 = (a == b == c); // false
//     cout << result1 << endl;
// // まずa == bが評価され、
// // その結果であるtrue(=1)とc(=3)の等価演算が評価され、
// // 最終的な結果がfalseとなる。

//     int x = 2, y = 1, z = 0;
//     bool result2 = (x == y == z); // true
//     cout << result2 << endl;
// // まずx == yが評価され、
// // その結果であるfalse(=0)とz(=0)の等価演算が評価され、
// // 最終的な結果がtrueとなる。
//     return 0;
// // 等価・不等価演算の連結には注意する必要がある。
// // a,b,cのように３つ以上の値に対して等価・不等価演算を行うためには論理演算子を使用する。
// }


// 7.4 比較演算子
// 変数に対する比較演算子
// #include<iostream>
// using namespace std;

// int main (){
//     int a = 2, b = 3, c = 2;
    
//     cout << (a < b) << " "; // true
//     cout << (a <= b) << " "; // true
//     cout << (a <= c) << "\n"; // true
//     cout << (a > b) << " "; // false
//     cout << (a >= b) << " "; // false
//     cout << (a >= c) << endl;
    
//     return 0;
// }

// // 比較演算の結合
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 5, b = 4, c = 3;

//     bool result1 = (a > b > c); // false

//     cout << result1 << endl;

//     return 0;
// }

// // 7.5 論理演算子
// // 整数の範囲を判定する
// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cin >> a;

//     cout << (0 <= a && a <= 30) << "\n"; // aが０以上かつ30以下ならtrue
//     cout << (a < 0 || 30 < a) << endl;   // aが0より小さいまたは30より大きいならtrue

//     cout << "[!] 否定 [!A] Aでないならばtrue" << "\n";
//     cout << "[||] 論理和 [A || B] AまたはBならばtrue" << "\n";
//     cout << "[&&] 論理積 [A && B] AかつBならばtrue" << "\n";
//     cout << "論理演算子の演算対象は主に等価・不等価演算や比較演算の結果である" << "\n";
//     cout << "論理演算子よりも比較演算の方が優先度が高い" << "\n";
//     cout << "論理演算子は否定->論理積->論理和の順で優先的に評価される" << "\n";
//     cout << "論理演算子は左結合である" << endl;

//     return 0; 
// }

// // 論理演算の結合
// #include<iostream>
// using namespace std;

// int main(){
//     bool A = true;
//     bool B = false;
//     bool C = true;

//     cout << (A && !B && C) << " " ; // true
//     cout << (A && B || C != B) << " "; //true
//     cout << (A && B || C == B && A == !B) << " "; // false
//     cout << !(A && B || C == B && A == !B) << endl; // true

//     return 0;
// }

// // 7.6 演算子の優先度と結合法則
// // 算術演算と比較演算の優先度
// #include<iostream>
// using namespace std;

// int main(){
//   int a = 3, b = 2, c = 13, d = 6;

//   bool result = a + b < c -d;
//   // bool result =((a + b) < (c - d));と同じ。

//   cout << result << "\n";  // 1

//   printf("単項演算子 ++ -- - ! \n");
//   printf("算術演算子 * / % + - 左結合 \n");
//   printf("関係演算子 < > <= >= 左結合 \n");
//   printf("等価演算子 == != 左結合 \n");
//   printf("論理演算子 && || 左結合 \n");
//   printf("代入演算子 = += -= *= /= 右結合 \n");

//   return 0;
// }


// // 8 構造文:条件分岐
// // 8.1 条件分岐
// // 8.1.1 if文
// #include<iostream>
// using namespace std;

// int main(){
//   int x;
//   cin >> x;

//   // if ( 条件式 ) 文;
//   // または
//   // if ( 条件式 ) {
//     //
//     // 処理
//     //
//   // };
//   if (x < 0) x *= -1; // xが0より小さい場合に-1をかける

//   cout << x << endl;

//   return 0;
// }

// // 8.1.2 if-else文
// #include<iostream>
// using namespace std;

// int main(){
//   int a;
//   cin >> a;

//   if (a % 2 == 0){
//     cout << a << "is an even number." << endl;
//   } else {
//     cout << a << "is an odd number." << endl;
//   }

//   return 0;
// }

// // 8.1.3 if-else,if-else文
// #include<iostream>
// using namespace std;

// int main(){
//   int day;
//   cin >> day;

//   if ( day == 0) cout << "Sunday" << endl;
//   else if (day == 1) cout << "Monday" << endl;
//   else if (day == 2) cout << "Tuesday" << endl;
//   else if (day == 3) cout << "Wednesday" << endl;
//   else if (day == 4) cout << "Thursday" << endl;
//   else if (day == 5) cout << "Friday" << endl;
//   else if (day == 6) cout << "Saturday" << endl;
//   else cout << "Invalid Input!" << endl;

//   return 0;
// }

// //8.1.4 三項演算子
// #include<iostream>
// using namespace std;

// int main(){
//   int x, y, maxv;
//   cin >> x >> y;

//   maxv = (x > y)?x:y;

//   cout << maxv << endl;

//   return 0;
// }

// // 8.2 演習問題 A: Small Large, or Equal
// // 2つの整数a, bを読み込んで、aとbの大小関係を出力するプログラムを作成する
// #include<iostream>
// using namespace std;

// int main(){
//   int a, b, maxv;
//   cin >> a >> b;

//   if (a < b) cout << "a < b" << endl;
//   else if (a > b) cout << "a > b" << endl;
//   else if (a == b) cout << "a == b" << endl;

//   return 0;

// }


// // 9. 構造文：繰り返し処
// // 9.1 繰り返し処理
// // 9.1.1 whileループ
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     int sum = 0;

//     while (i <= n) { // iがn以下の間、繰り返す
//         sum += i;
//         i++;
//     }

//     cout << sum << endl;

//     return 0;
// }

// // 9.1.2 forループ
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++){
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

// // 9.3 繰り返し処理の制御
// // 9.3.1 break文
// // 9.3 1からnまでの整数を出力する(制限付き)
// #include<iostream>
// using namespace std;

// int main(){
//     int n, limit = 10, i = 1;

//     cin >> n;

//     while(i <= n){
//         if (limit < i) break;
//         cout << i++ << " ";
//     }
//     cout << endl;

//     return 0;
// }

// // 9.4 1からnまでの整数を出力する(制限付き)
// #include<iostream>
// using namespace std;

// int main(){
//     int n, limit = 10, i;

//     cin >> n;

//     for (i = 1; i <= n; i++){
//         if (limit < i) break; // iがlimitを超えたら強制終了
//         cout << i << " ";
//     }
//     cout << "[" << i << "]" << endl;

//     return 0;
// }

// // 9.5 無限ループ
// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     while(1){
//         cin >> x;
//         if (x == 0) break;
//         cout << x << endl;
//     }
//     return 0;
// }

// // 9.3.2 continue文
// // 9.6 : 3の倍数を無視する
// #include<iostream>
// using namespace std;

// int main(){
//     int i = -1;
//     while (++i <= 10){
//         if (i % 3 == 0)continue;
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

// // 9.7 : ３の倍数を無視する
// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i <= 10; i++){
//         if (i %3 == 0) continue;
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

//     return 0;
// }

// 9.2.3 return文
// 9.8 2つの整数の割算 "エラー未解決"
// #include<iostream>
// using namespace std;

// int div(int x, int y){
//     if (y == 0){
//         cout << "division by zero." << endl;
//         return -1;
//     }

//     return x / y;
// }
// int main(){
//     int x, y;
//     cin >> x >> y;

//     cout << div(x, y) << endl;

//     return 0;
// }


// // 10 変数(2)
// // 10.1 型の表現範囲
// // 10.1 : 二乗の計算
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     cout << n*n << endl;

//     return 0;
// }

// // 10.2 : 二乗の計算
// #include<iostream>
// using namespace std;

// int main(){
//     long long n;
//     cin >> n;
//     cout << n*n << endl;

//     return 0;
// }

// // 表 10.1 : 型の表現範囲
// #include<iostream>
// using namespace std;

// int main(){
//     printf("10.1 : 型の表現範囲");
//     printf("short : 整数 : -32768~32767");
//     printf("int : 整数 : -2147483648~2147483647");
//     printf("long : 整数 : -2147483648~2147483647");
//     printf("long long : 整数 : -9223372036854775808~923372036854775807");
//     printf("bool : ブール値 : trueまたはfalse");
//     printf("float : 実数 : +-3.4*10(-38乗)~+-3.4*10(38乗)");
//     printf("double : 実数 : +-1.7*10(-308乗)~+=1.7*10(308乗)");
//     printf("char : 文字 : -127~127");
//     printf("演算において、型が表現できる値の上限を超えてしまうことをオーバーフローという。\n");
//     printf("プログラムを作成するときは、最終的な計算結果のみではなく、\n");
//     printf("式の評価の途中でオーバーフローなどが起こらないかを十分検討して\n各変数の型を決める必要がある。\n");

//     return 0;
// }


// // 10.2 型変換
// // 10.2.1 金剛演算の型変換
// #include<iostream>
// using namespace std;

// int main(){
//     int t = 20;
//     int v0 = 14;
//     double a = 2 + 0.80665;

//     cout << v0 / 5 << endl;
//     cout << v0 / 5.0 << endl;
//     cout << v0 * t + (a * t * t) / 2 << endl;

//     return 0;
// }

// // 10.2.2 代入演算の型変換
// // 10.4 : 代入演算での型変換
// #include <iostream>
// using namespace std;

// int main(){
//     double GPA = 4.98;
//     int grade;

//     grade = GPA;

//     cout << "grade = " << grade << endl;

//     return 0;
// }

// // 10.2.3 キャスト演算
// // 10.5 : キャスト演算
// #include<iostream>
// using namespace std;

// int main(){
//     double L = 1.5;
//     double R = 1.8;
    
//     int val1 = L + R;
//     int val2 = (int)L + (int)R;

//     cout << val1 << endl;
//     cout << val2 << endl;

//     return 0;
// }

// // 10.3 ポインタ
// // 10.6 ポインタの宣言と変数
// #include<cstdio>

// int main(){
//     int x, y;
//     int *p; // 整数型変数を指すポインタ変数pの宣言

//     // アドレス演算子＆で変数xのアドレスを取得しポインタ変数pに代入
//     p = &x;
//     // ポインタ変数の中身であるアドレスを出力
//     printf("%p\n", p); 

//     // 間接演算子*でポインタpが指し示すものを参照
//     *p = 8;
//     // 間接演算子*でポインタpが指し示すものを参照
//     y = *p + x;

//     printf("%d\n", y);

//     return 0;
// }

// // 10.7 : 2つの変数の中身を入れ替える
// #include<iostream>
// using namespace std;

// void swap1(int x, int y){
//     int t =x; x = y; y =t;
// }
// void swap2(int *X, int *Y){
//     int t = *X; *X = *Y; *Y = t;
// }

// int main(){
//     int a, b;
//     int *A = &a, *B = &b;
//     cin >> a >> b;

//     swap1(a, b);
//     cout << a << " " << b << "\n";
//     swap2(A, B);
//     cout << a << " " << b << "\n";

//     return 0;
// }


// // 11 プログラムの構造
// // 11.1 文の構造
// // 宣言文：型と変数名に対応したメモリ領域の確保を行う。
// // 実行文：実際の処理を行う
// // 実行文の分類：単純文／複合文／構造文
// // 変数を宣言する位置に関する制約がC言語とC++言語で異なる。
// // C++言語では、実行文の後でも変数を宣言することができる。
// #include<iostream>
// using namespace std;
// int main(){
    
//     printf("プログラムは一般的に、以下の構造を持つブロックで構成することができる。\n");
//     printf("1. 連結：順番に実行される分野関数の並び\n");
//     printf("2. 選択：if文などによって異なる処理を行う分岐構造\n");
//     printf("3. 反復：while文やfor文による繰り返し構造\n");
//     printf("4. 1.2.3.の組み合わせ・入れ子構造\n");

//     return 0;
// }

// // 11.1 : 九九の表を出力する
// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 1; i <= 9; i++){
//         for (int j = 1; j <= 9; j++){
//             int val = i*j;
//             if (val < 10)
//                 cout << " ";
//             cout << val << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // 11.2 変数のスコープ
// // 11.2 : 局所変数と大域変数
// #include<iostream>
// using namespace std;

// int cnt; // どこからでもアクセスできる大域変数。

// int increment(){
//     int i = 0; // 局所変数の初期化。この関数内でしか使用できない。
//     return cnt++; // 値を返して大域変数をインクリメント。
// }

// int main(){
//     int i = 0; // 局所変数の初期化。この関数内でしか使用できない。
//     cnt = 0; // 大域変数を初期化。
//     cout << cnt++ << " "; // 大域変数を出力してインクリメント。
//     cout << increment() << " "; // 関数の戻り値を出力。関数内で大域変数も変更される。

//     {
//         int j = cnt; // 局所変数の初期化。このブロック内でしか使用できない。
//         cout << j++ << " "; // 局所変数を変更して出力。
//         i = j;
//     }
//     int x = 0;
//     // xはこれ以降で使用可能。

//     // ここでjは使用できない。
//     cout << i << endl;

//     printf("11.2.1 大域変数\n");
//     printf("大域変数(グローバル変数)とは関数の外に宣言された変数で、どの関数からもアクセスすることができる変数である。\n");
//     printf("Program11.2に宣言された[int cnt;]は大域変数で、関数incrementと関数mainから読み書きすることができる。\n");
//     printf("11.2.2 局所変数\n");
//     printf("局所変数(ローカル変数)はブロックの中に宣言される変数で、そのブロックの内側だけで有効になる。\n");
//     printf("例えばmain関数の最初に宣言された[int i;]は局所年数でmain関数の中からのみ読み書きすることができる。\n");
//     printf("関数incrementの中の[int i;]も同じ名前の局所変数だが、それぞれが別の変数になる。\n");
//     printf("また、main関数内のブロックに宣言されている[int j]はこのブロック内でのみ利用できる局所変数で、\n");
//     printf("main関数の中から出会ってもこのブロックの外からはアクセスすることができない。\n");
    
//     return 0;
// }


// // 12 配列
// // 12.1 配列
// // 12.1 : 配列の要素の合計を求める
// #include<iostream>
// using namespace std;

// int main(){
//     int day[7] = {3, 4, 2, 1, 8, 2, 0};
//     int sum = 0;
//     for ( int i = 0; i < 7; i++){
//         cout << day[i] << " ";
//         sum += day[i];
//     }
//     cout << "\n" << sum << endl;

//     return 0;
// }

// 12.3 多次元配列
// 12.4 : 二次元配列の初期化と出力
// #include<iostream>
// using namespace std;

// int main(){
//     int month[5][7];
    
//     for (int i = 0; i < 5; i++){
//         for ( int j = 0; j < 7; j++){
//             month[i][j] = (i == 2 || j >= 5)?0:1;
//         }
//     } 
    
//     for ( int i = 0; i < 5; i++){
//         for (int j = 0; j < 7; j++){
//             cout << " " << month[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 12.3.1 多次元配列の〜
// 


// // 13 文字列
// // 13.1 文字
// // 13.1.1 文字とアスキーコード
// // 13.1 : 文字とアスキーコードの表示
// #include<iostream>

// int main(){
//     char ch = 'A';
//     printf("%c = %d\n", ch, ch);

//     int num = 122;
//     printf("%c = %d\n", num, num);

//     printf("v%c%c%c%c%cv\n", 40, 94, 95, 94, 41);

//     return 0;
// }

// // 13.1.2 文字の関数
// // 13.2 : 文字の種類の判定
// #include<iostream>
// #include<cctype>
// using namespace std;

// int main(){
//     char ch;
//     cin >> ch;

//     cout << ch << " is ";
//     if ( !isalpha(ch) ) cout << "not ";
//     cout << "alphabet." << endl;

//     cout << ch << " is ";
//     if ( !isdigit(ch) ) cout << "not ";
//     cout << "digit." << endl;

//     printf("int isalpha(int ch) = chがアルファベットならtrueを返す\n");
//     printf("int isdigit(int ch) = chが数字ならtrueを返す\n");
//     printf("int islower(int ch) = chが小文字ならtrueを返す\n");
//     printf("int isupper(int ch) = chが大文字ならtrueを返す\n");
//     printf("int tolower(int ch) = chの小文字を返す\n");
//     printf("int toupper(int ch) = chの大文字を返す\n");

//     return 0;
// }

// // 13.3 char型配列による文字列
// #include<cstdio>

// int main(){
//     char name[9] = "Rose";

//     scanf("%s", name);
//     printf("Myname is %s.\n", name);

//     return 0;
// }

// // 13.3.5 文字列の基本操作
// // 13.4 : 文字列要素へのアクセス
// #include<cstdio>
// #include<cctype>

// int main(){
//     char city[20] = "Aizu-Wakamatsu";

//     printf("%c\n", city[1]);

//     int i = 0;
//     while ( city[i] ){
//         printf("%c", toupper(city[i]));
//         i++;
//     }
//     printf("\n");

//     city[2] = 'd';
//     city[4] = '\n';

//     printf("%s\n", city);

//     return 0;
// }

// // 13.3.6 文字列の関数
// // 13.5 : 文字列の検索
// #include<cstdio>
// #include<cstring>
// using namespace std;

// int main(){
//     char s1[100], s2[100];

//     scanf("%s %s", s1, s2);

//     if ( strstr(s1, s2) == NULL ) printf("No\n");
//     else printf("Yes\n");

//     printf("int strlen(cahr[] str) = 文字列strの長さを返す\n");
//     printf("char[] strcpy(char[] s1, char[] s2) = 文字列s1に文字列s2をコピーする\n");
//     printf("char[] strcat(char[] s1, char[] s2) = 文字列s1に文字列s2を連結する\n");
//     printf("char[] strstr(char[: s1, char[] s2) = 文字列s1からs2を探す\n");
//     printf("int strcmp(char[] s1, char[] s2) = 文字列s1と文字列s2を比較する\n");
//     printf("s1<s2の時は負の値、s1=s2の時は0、s1>s2の時は正の値を返す\n");

//     return 0;
// }

// // 13.6 : 文字列の連結とコピー
// #include<cstdio>
// #include<cstring>

// int main(){
//     char str1[100], str2[100], str3[100];

//     scanf("%s %s", str1, str2); // 2つの文字列を読み込む

//     printf("%s (%d)\n", str1, strlen(str1)); // 文字列の長さを出力する
//     printf("%s (%d)\n", str2, strlen(str2)); // 文字列の長さを出力する

//     strcat (str1, str2); // 文字列str1に文字列str2を連結する
//     printf("%s\n", str1);

//     strcpy(str3, str1); // 文字列str1の内容を文字列str3にコピーする

//     if ( strcmp(str1, str3) == 0 ){ // 文字列を比較する
//         printf("%s = %s\n", str1, str3);
//     }
    
//     return 0;
// }

// // 13.5 stringクラスによる文字列
// // 13.7 : 文字列の入出力
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     int n;
//     string color = "black";

//     color = "white";

//     cin >> n;
//     for (int i = 1; i <= n; i++){
//         cin >> color;
//         cout << i << ": " << color << endl;
//     }

//     return 0;
// }

// // 13.5.4 文字列の基本操作
// // 13.8 : 文字列を大文字にして出力する
// #include<iostream>
// #include<cctype>
// #include<string>
// using namespace std;

// int main(){
//     string greeting = "Hello";

//     for ( int i = 0; i < greeting.size(); i++ ){
//         cout << greeting[i];
//         greeting[i] = toupper(greeting[i]);
//     }
//     cout << "\n";
//     cout << greeting << endl;

//     return 0;
// }

// // 13.9 : 文字列の比較 (辞書順を基準に行われる)
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str1, str2;
//     cin >> str1 >> str2;

//     cout << str1;
//     if ( str1 == str2 ) cout << " == ";
//     else if ( str1 < str2 ) cout << " < " ;
//     else if ( str1 > str2 ) cout << " > ";
//     cout << str2 << endl;

//     return 0;
// }

// // 13.10 : 文字列の連結・追加
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string name, name2;

//     cin >> name >> name2;

//     name = "Mt. " + name + " ";
//     name2 += '.';

//     cout << name << name2 << endl;

//     return 0;
// }

// // 13.4 : stringの主な演算
// #include<iostream>
// using namespace std;

// int main(){
//     printf("size() : 文字数を返す\n");
//     printf("insert() : (指定した場所に)文字・文字列を挿入する\n");
//     printf("erase() : (指定した場所の)文字・文字列を削除する\n");
//     printf("clear() : すべての文字を削除する\n");
//     printf("substr() : 文字列の(指定した)部分文字列を返す\n");
//     printf("replace() : (指定した)部分文字列を新しい文字列に置換する\n");

//     return 0;
// }

// // 13.11 : 文字列の連結・挿入
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string nation, zip, address;
//     address = "";

//     cin >> nation >> zip;

//     address = zip + nation;
//     address.insert( zip.size(), "," );

//     cout << address << endl;

//     return 0;
// }

// // 13.12 : 部分文字列の置換
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string numbers = "0123456789";
//     string sub, rep;

//     cout <<  numbers.size() << endl;

//     sub = numbers.substr(3, 5);
//     cout << sub << endl;

//     rep = numbers.replace(3, 4, "ABCD");
//     cout << rep << endl;

//     return 0;
// }


// // 14 ライブラリ
// // 14.1 数学関数
// // 14.1 : 平方根を求める
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int x;
//     cin >> x;
//     cout << sqrt(x) << endl;

//     return 0;
// }

// // 14.2 : 正弦・余弦を求める
// #include<iostream>
// #include<cstdio>
// #include<cmath>
// using namespace std;

// int main(){
//     int deg;
//     double rad;
//     double PI = acos(-1); // PI = 3.141593....

//     cin >> deg;
//     rad = deg * PI / 180;

//     printf("%d degree = %lf randian\n", deg, rad);
//     printf("cos(%d) = %lf, sin(%d = %lf\n", deg, cos(rad), deg, sin(rad));

//     return 0;
// }

// // cmathに含まれる主な数学関数
// #include<iostream>
// using namespace std;
// int main(){
//     printf("double sqrt(double x) : xの平方根を返す。\n");
//     printf("double pow(double x, double n) : xのn乗を返す。\n");
//     printf("double fabs(double x) : xの絶対値を返す。\n");
//     printf("double sin(double x) : sine(正弦)を返す。引数の単位はラジアン。\n");
//     printf("double cos(double x) : cosine(余弦)を返す。日k数の単位はラジアン。\n");
//     printf("double log(double x) : xの自然対数を返す。\n");
//     printf("double log10(double x) : xの常用対数を返す。");

//     return 0;
// }


// 15 構造体とクラス
// 15.1 構造体
// 15.1.1 構造体の定義

// 15.1 : 学生を表す変数
// string name;
// int id;
// int age;
// string e_mail;
// double GPA;
// 15.2 : 複数の学生を表す変数
// string name[1000];
// int id[1000];
// int age[1000];
// string e_mail[1000];
// double GPA[1000];
// 15.3 : 学生を表す構造体
// struct Student{
//     string name;
//     int id;
//     int age;
//     string e_mail;
//     double GPA;
// };
// 15.4 : 1人の学生を表す変数の宣言
// Student student;
// 15.5 : 複数の学生を管理する構造体の配列の宣言
// Studen students[1000];

// // 15.1.2 構造体の使用
// // 15.6 : 構造体のメンバ変数にアクセスする
// #include<iostream>
// #include<string>
// using namespace std;

// struct Student{
//     string name;
//     int id;
// };

// int main(){
//     Student student;
//     student.id = 2014;
//     student.name = "wakamatsu";

//     cout << student.id << " " << student.name << endl;

//     return 0;
// }

// // 15.1.3 構造体の配列
// // 15.7 : 構造体変数の配列
// #include<iostream>
// #include<string>
// using namespace std;

// struct Student{
//     string name;
//     int id, age;
//     string e_mail;
//     double GPA;
// };

// void printStudent(Student st){
//     cout << st.name << " " << st.GPA << endl;
// }

// int main(){
//     int n;
//     Student S[1000];

//     cin >> n;

//     for ( int i = 0; i < n; i++ ){
//         cin >> S[i].name >> S[i].id;
//         cin >> S[i].age >> S[i].e_mail >> S[i].GPA;
//     }

//     for ( int i = 0; i < n; i++ ) printStudent(S[i]);

//     return 0;
// }

// // 15.2 クラス
// // 15.2.1 クラスの定義
// // 15.8 : 2点間の距離を求める(クラスを用いた実装)
// #include<iostream>
// #include<cmath>
// using namespace std;

// class Point{
//     public:
//     double x, y;

//     Point(double xx, double yy){
//         x = xx;
//         y = yy;
//     }
// };

// double getDistance(Point p1, Point p2){
//     return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
// }

// int main (){
//     Point p1(0, 0), p2(0, 0);

//     cin >> p1.x >> p1.y >> p2.x >> p2.y;

//     cout << getDistance (p1, p2) << endl;

//     return 0;
// }

// // 15.9 : ロボットのシミュレーション
// #include<iostream>
// #include<string>
// #include<cmath>
// using namespace std;

// class Robot{
//     public:
//     int x, y, energy;
//     string name;

//     Robot(string n, int xx, int yy){
//         name = n;
//         x = xx;
//         y = yy;
//         energy = 100;
//     }

//     void move(int dx, int dy){
//         x += dx;
//         y += dy;
//         energy -= abs(dx) + abs(dy);
//     }

//     void print(){
//         cout << name << "is at (" << x << ", " << y << ") with" << energy << endl;
//     }
// };

// int main(){
//     Robot r1("Rose", 10, 10), r2("Mary", 0, 0);

//     r1.move(1, 3);
//     r1.move(0, 2);
//     r2.move(3, 5);
//     r1.print();
//     r1.move(3, -1);
//     r2.move(4, 2);
//     r2.print();
//     r1.move(-7, 3);
//     r1.print();

//     return 0;
// }

