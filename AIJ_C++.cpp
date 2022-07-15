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

// // 7.7 演習問題
// // D:Watch
// #include<iostream>
// using namespace std;

// int main(){
//   int h, m, s;
//   cin >> s >> s;

//   h = s / 3600; s %= 3600;
//   m = s /60; s %= 60;

//   cout << h << ":" << m << ":" << s << endl;

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

// // B: Range 104
// // ３つの整数値a,b,cを読み込み、それらがa<b<Cの条件を満たすならばYesを、
// // 満たさないならばNoを出力するプログラムを作成する。
// #include<iostream>
// using namespace std;
// int main(){
//   int a, b, c;
//   cin >> a >> b >> c;

//   if (a < b && b < c) cout << "Yes" << endl;
//   else cout << "No" << endl;

//   return 0;

// }

// // C: Sorting Three Numbers 105 
// // 3つの整数を読み込み、それらを値が小さい順に並べて出力するプログラムを作成
// #include<iostream>
// using namespace std;

// int main(){
//   int a, b, c, t;
//   cin >> a >> b >> c;

//   if (a > b) {t = a; a = b; b = t;}
//   if (b > c) {t = b; b = c; c = t;}
//   if (a > b) {t = a; a = b; b = t;}

//   cout << a << " " << b << " " << c << endl;

//   return 0;
// }

// // D: Circle in a Rectangle 106
// // 長方形の中に縁が含まれるかを判定するプログラムを作成する
// // 長方形は左下の頂点を原点とし、右上の頂点の座標(W,H)が与えられる
// // また、縁はその中心の座標(x,y)と半径rで与えられる
// #include<iostream>
// using namespace std;

// int main(){
//   int W, H, x, y, r;
//   cin >> W >> H >> x >> y >> r;

//   if (0 <= x - r && x + r <= W && 0 <= y -r && y + r <= H){
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }

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

// // 9.2 演習問題(1)
// // A : Print Many HelloWorld
// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i < 1000; i++) {
//         cout << "Hello World" << endl; 
//     }
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

// 9.7 : ３の倍数を無視する
#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 10; i++){
        if (i %3 == 0) continue;
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

