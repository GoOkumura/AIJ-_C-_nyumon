//#include<iostream>

// 何もしないプログラム(1)
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


// 画面に文字列を出力する
// #include<iostream>

// int main(){
//     printf("Accepted!\n");

//     return 0;
// }


// 変数(1)
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


// 5.2演習問題
// 1つの整数xを読み込んで、
// xの3乗を計算し結果を出力するプログラムを作成
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
//     b = a ++ ;
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

