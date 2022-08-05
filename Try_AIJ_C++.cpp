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

// // 9.4 演習問題(2)
// // B : print Test Cases
// #include<iostream>
// using namespace std;

// int main(){
//     for (int x, t = 1; ; t++){ // for文でのからの条件は、常にtrueと見做される
//         cin >> x;
//         if ( x == 0) break;
//         cout << "Case " << t << ": " << x << endl;
//     }
//     return 0;
// }

// // C : Swapping Two Nunbers 121
// #include<iostream>
// using namespace std;

// int main() {
//     int x, y;

//     while(1){
//         cin >> x >> y;
//         if (x == 0 && y == 0) break;

//         if (x < y){
//             cout << x << " " << y << endl;
//         } else {
//             cout << y << " " << x << endl;
//         }
//     }

//         return 0;
// }

// // // D : How Many Divisors? 122
// #include<iostream>
// using namespace std;

// int main(){
//     int a, b, c, f = 0;
//     cin >> a >> b >> c;

//     for (int x = a; x <= b; x++){
//         if ( c % x == 0) f++;
//     }

//     cout << f << endl;

//     return 0;
// }

// // 10.4 演習問題
// // A : A/B_Problem 133
// #include<iostream>
// #include<stdio.h>
// using namespace std;

// int main(){

//     int a, b;
//     cin >> a >> b;

//     printf("%d %d %lf\n", a/b, a%b, (double)a/b);

//     return 0;
// }

// // B : Circle 134
// #include<iostream>
// #include<stdio.h>
// using namespace std;

// int main(){
//     double PI = 3.1415926535589;
//     double r;
//     cin >> r;

//     printf("%lf %lf\n", PI*r*r, 2*PI*r);

//     return 0;
// }

// // C : Simple Calculator 135
// #include<iostream>
// #include<stdio.h>
// using namespace std;

// int main(){
//     int a, b;
//     char op;

//     while(1){;
//     cin >> a >> op >> b;
//     if ( op == '?') break;
//     if ( op == '+') cout << a + b << endl;
//     else if ( op == '-') cout << a - b << endl;
//     else if ( op == '*') cout << a * b << endl;
//     else if ( op == '/') cout << a / b << endl;
//     }

//     return 0;
// }

// // D : Min,Max and Sum 136
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     long long a;
//     long long minValue = 1000000;
//     long long maxValue = -1000000;
//     long long sum = 0;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         cin >> a;
//         if ( a < minValue) minValue = a;
//         if ( a > maxValue) maxValue = a;
//         sum += a;
//     }

//     cout << minValue << " " << maxValue << " " << sum << endl;

//     return 0;
// }

// // 11.3 演習問題
// // A : Print a Rectangle 143
// #include<iostream>
// using namespace std;
// int main(){
//     int H, W;
//     while(1){
//         cin >> H >> W;
//         if ( H == 0 && W == 0) break;

//         for (int i = 0; i < H; i++){
//             for ( int j = 0; j < W; j++){
//                 cout << "#";
//             }
//             cout << "\n";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // B Print a Flame 145
// #include<iostream>
// using namespace std;

// int main(){
//     int H, W;

//     while(1){
//         cin >> H >> W;
//         if ( H == 0 && W == 0) break;

//         for ( int i = 0; i < H; i++ ){
//             for ( int j = 0; j < W; j++ ){
//                 if ( i == 0 || i == H-1 || j == 0 || j == W-1 ){
//                     cout << "#";
//                 } else {
//                     cout << ".";
//                 }
//             }
//             cout << "\n";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // C * Print a Chessboard 146
// #include<iostream>
// using namespace std;
// int main(){
//     int H, W;

//     while(1){
//         cin >> H >> W;
//         if ( H == 0 && W == 0 ) break;

//         for ( int i = 0; i < H; i++){
//             for ( int j = 0; j < W; j++ ) {
//                 if ( (i + j) % 2 == 0){
//                     cout << "#";
//                 } else {
//                     cout << ".";
//                 }
//             }
//             cout << "\n";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // D : Structured Programming 147
// #include<iostream>
// using namespace std;

// // 3のつく数字ならtrue
// bool has3(int x){
//     while(x){
//         if ( x % 10 == 3) return true;
//         x /= 10;
//     }
//     return false;
// }

// void call(int n){
//     for ( int x = 1; x <= n; x++ ){
//         if ( x % 3 == 0 || has3(x) ){
//             cout << " " << x;
//         }
//     }
//     cout << endl;
// }

// int main(){
//     int n;
//     cin >> n;
//     call(n);

//     return 0;
// }

// // 12.2 演習問題(1)
// // A ; Reversing Numbers 154 - 234
// #include<iostream>
// using namespace std;

// int main(){
//     int n, A[100];
//     cin >> n;
//     for (int i = 0; i < n; i++) cin >> A[i];

//     for ( int i = n-1; i >=0; i--){
//         if (i != n-1) cout << " ";
//         cout << A[i];
//     }
//     cout << endl;

//     return 0;
// }


// // 12.4 演習問題(2)
// // B : Finding Missing Cards 158
// #include<iostream>
// using namespace std;

// int main(){
//     bool cards[4][14];
//     int n, rank;
//     char suit;

//     for ( int s = 0; s < 4; s++ )
//         for ( int r = 1; r <= 13; r++ )
//             cards[s][r] = 0;

//     cin >> n;
//     for ( int i = 0; i < n; i++ ){
//         cin >> suit >> rank;
//         if ( suit == 'S' ) cards[0][rank] = 1;
//         if ( suit == 'H' ) cards[1][rank] = 1;
//         if ( suit == 'C' ) cards[2][rank] = 1;
//         if ( suit == 'D' ) cards[3][rank] = 1;
//     }

//     for ( int  s = 0; s < 4; s++ ){
//         for ( int r = 1; r < 13; r++ ){
//             if ( cards[s][r] ) continue;
//             if ( s == 0 ) suit = 'S';
//             if ( s == 1 ) suit = 'H';
//             if ( s == 2 ) suit = 'C';
//             if ( s == 3 ) suit = 'D';
//             cout << suit << " " << r << endl;
//         }
//     }

//     return 0;
// }

// // C : Official House 160
// #include<iostream>
// using namespace std;

// int main(){
//     int A[5][4][11], n;
//     for ( int i = 1; i < 4; i++ ){
//         for ( int j = 1; j <= 3; j++ ){
//             for ( int k = 1; k <= 10; k ++ ) A[i][j][k] = 0;
//         }
//     }

//     cin >> n;
//     for (int i = 0; i < n; i++ ) {
//         int b, f, r, v;
//         cin >> b >> f >> r >> v;
//         A[b][f][r] += v;
//     }

//     for ( int f = 1; f <= 4; f++ ){
//         if ( f > 1 ) cout << "####################\n";
//         for ( int b = 1; b <= 3; b++ ){
//             for ( int r = 1; r <= 10; r++ ){
//                 cout << " " << A[f][b][r];
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }

// // D : Matrix Vector Mutiplication 162
// #include<iostream>
// using namespace std;

// int main(){
//     int n, m, A[100][100], b[100], c[100];

//     cin >> n >> m;
//     for (int i = 0; i < n; i++ )
//         for ( int j = 0; j < m; j++) cin >> A[i][j];
//     for ( int i = 0; i < m; i++ ) cin >> b[i];

//     for (int i = 0; i < n; i++ ){
//         c[i] = 0;
//         for ( int j = 0; j < m; j++ ){
//             c[i] += A[i][j]*b[j];
//         }
//     }

//     for ( int i = 0; i < n; i++ ) cout << c[i] << endl;

//     return 0;
// }

// 12.5 演習問題(3)
// A : Grading
// #include<iostream>
// using namespace std;

// char getGrade(int m, int f, int r){
//     int sum = m +f ;
//     char grade;
//     if ( m == -1 || f == -1 ){
//         grade = 'F';
//     } else if ( 80 <= sum ){
//         grade = 'A';
//     } else if ( 65 <= sum && sum < 80 ){
//         grade = 'B';
//     } else if ( 50 <= sum && sum < 65 ){
//         grade = 'C';
//     } else if ( 30 <= sum && sum < 50 ){
//         if ( 50 <= r ) grade = 'C';
//         else grade = 'D';
//     } else if ( sum < 30 ){
//         grade = 'F';
//     }

//     return grade;
// }

// int main(){
//     int m, f, r;
//     while(1){
//         cin >> m >> f >> r;
//         if ( m == -1 && f == -1 && r == -1 ) break;
//         cout << getGrade(m, f, r) << endl;
//     }

//     return 0;
// }

// // B : How many ways?
// #include<iostream>
// using namespace std;

// int count(int n, int x){
//     int cnt = 0;
//     for (  int i = 1; i <= n-2; i++ ){
//         for ( int j = i+1; j <= n-1; j++ ){
//             for ( int k = j+1; k <= n; k++ ){
//                 if ( i + j + k == x) cnt++;
//             }
//         }
//     }
//     return cnt;
// }

// int main(){
//     int n, x;

//     while(1){
//         cin >> n >> x;
//         if ( n == 0 && x == 0 ) break;
//         cout << count (n, x) << endl; 
//     }

//     return 0;
// }

// // C : Spreadsheet 166 - 240
// #include<iostream>
// using namespace std;

// int main(){
//     int T[100][101], r, c;

//     cin >> r >> c;
//     for  ( int i = 0; i < r; i++)
//         for ( int j = 0; j < c; j++ ) cin >> T[i][j];
    
//     for ( int i = 0; i <= r; i++ ) T[i][c] = 0;
//     for ( int j = 0; j <= c; j++ ) T[r][j] = 0;

//     for ( int i = 0; i < r; i++ ){
//         for ( int j = 0; j < c; j++ ){
//             T[i][c] += T[i][j];
//             T[r][j] += T[i][j];
//             T[r][c] += T[i][j];
//         }
//     }

//     for ( int i = 0; i <= r; i++ ){
//         for ( int j = 0; j <= c; j++ ){
//             if ( j ) cout << " ";
//             cout << T[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // D : Matrix Multiplication 167 - 241
// #include<iostream>
// using namespace std;

// int main(){
//     int n, m, l;
//     long long A[100][100], B[100][100], C[100][100];

//     cin >> n >> m >> l;
//     for ( int i = 0; i < n; i++ )
//         for ( int j = 0; j < m; j++ ) cin >> A[i][j];
//     for ( int i = 0; i < m; i++)
//         for ( int j = 0; j < l; j++ ) cin >> B[i][j];
    
//     for ( int i = 0; i < n; i++ ){
//         for ( int j = 0; j < l ; j++ ){
//             C[i][j] = 0;
//             for ( int k = 0; k < m; k++ ){
//                 C[i][j] += A[i][k]*B[k][j];
//             }
//         } 
//     }

//     for ( int i = 0; i < n; i++ ){
//         for ( int j = 0; j < l; j++ ){
//             if ( j ) cout << " ";
//             cout << C[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }


// // 13.2 演習問題
// // A : Toggling Cases 174 - 242
// #include<cstdio>
// #include<cctype>
// using namespace std;
// int main(){
//     char ch;
    
//     while(1){
//         scanf("%c", &ch);
//         if ( isalpha(ch) ){
//             if ( islower(ch) ) printf("%c", toupper(ch));
//             else printf("%c", tolower(ch));
//         } else printf("%c", ch);

//         if (ch == '\n') break;
//     }

//     return 0;
// }


// // 13.4 演習問題(2)
// // B : Sum of Numbers 181 - 243
// #include<cstdio>
// #include<cstring>

// int main(){
//     char str[1001];

//     while(1){
//         scanf("%s", str);
//         if ( str[0] == '0' ) break;
//         int sum = 0;
//         for ( int i =0; i < strlen(str); i++ ){
//             sum += (str[i]-'0');
//         }

//         printf("%d\n", sum);
//     }

//     return 0;
// }

// // C : Counting Characters 182 - 244
// #include<iostream>
// #include<cstdio>
// #include<cctype>
// using namespace std;

// int main(){
//     char ch;
//     int cnt[26] = {};

//     while( cin >> ch ){
//         ch = tolower(ch);
//         if ( isalpha(ch) ){
//             cnt[ch-'a']++;
//         }
//     }

//     for ( int i = 0; i < 26; i++ ){
//         printf("%c : %d\n", i+'a', cnt[i]);
//     }

//     return 0;
// }

// // D : Ring 184 - 244
// #include<cstdio>
// #include<cstring>

// int main(){
//     char s[201], t[101], p[101];

//     scanf("%s %s", s, p);
//     strcpy(t, s);
//     strcat(s, t);

//     if ( strstr(s, p) == NULL ) printf("No\n");
//     else printf("Yes\n");

//     return 0;
// }

// // 13.6 演習問題(3)
// // A : Finding a Word 193 - 245
// #include<iostream>
// #include<string>
// #include<cctype>

// using namespace std;

// string toUpper( string s ){
//     string t = s;
//     for ( int i = 0; i < s.size(); i++){
//         t[i] = toupper(s[i]);
//     }
//     return t;
// }

// int main(){
//     string target, source;

//     cin >> target;
//     target = toUpper(target);

//     int cnt = 0;

//     while(1){
//         cin >> source;
//         if ( source == "END_OF_TEXT" ) break;
//         source = toUpper(source);
//         if ( target == source ) cnt++;
//     }

//     cout << cnt << endl;

//     return 0;
// }

// // B : Shuffle 194 - 246
// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;

// string shuffle(string str, int h ){
//     string head = str.substr(0, h);
//     string tail = str.substr(h, str.size()-h);
//     return tail + head;
// }

// int main(){
//     string cards;
//     int m, h;

//     while(1){
//         cin >> cards;
//         if ( cards == "-" ) break;

//         cin >> m;
//         for ( int i = 0; i < m; i++){
//             cin >> h;
//             cards = shuffle(cards, h);
//         }
//         cout << cards << endl;
//     }

//     return 0;
// }

// // C : Card Game 195 - 247
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     int n;
//     string s1, s2;
//     int a = 0, b = 0;
//     cin >> n;

//     for ( int i = 0; i < n; i++){
//         cin >> s1 >> s2;
//         if ( s1 > s2 ) a += 3;
//         else if ( s1 < s2 ) b += 3;
//         else {
//             a++; b++;
//         }
//     }

//     cout << a << " " << b << endl;

//     return 0;
// }

// // D : Transformation 196 - 248
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str, com, p;
//     int q, a, b;

//     cin >> str >> q;
//     for ( int t =0; t < q; t++ ){
//         cin >> com >> a >> b;
//         if ( com == "print" ){
//             cout << str.substr(a, b-a+1) << endl;
//         } else if (com == "reverse" ){
//             string tmp = str.substr(a, b-a+1);
//             int n = tmp.size();
//             for ( int i =0; i < n; i++ ) str [i+a] = tmp[n-i-1];
//         } else if ( com == "replace" ){
//             cin >> p;
//             str = str.replace(a, b-a+1, p);
//         }
//     }

//     return 0;
// }

// // 14.2 演習問題
// // A : Distance 201 - 249
// #include<iostream>
// #include<cmath>
// #include<cstdio>
// using namespace std;

// int main(){
//     double x1, y1, x2, y2;
//     cin >> x1 >> y1 >> x2 >> y2;
//     double d = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1- y2));
//     printf("%lf\n", d);

//     return 0;
// }

// // B : Triangle 202 - 249
// #include<iostream>
// #include<cstdio>
// #include<cmath>
// using namespace std;

// int main(){
//     int a, b, C;
//     double S, L, h, d;
//     cin >> a >> b >> C;

//     d = (acos(-1.0)*C)/180.0;
//     S = a * b * sin(d) / 2.0;
//     L = a + b + sqrt(a*a + b*b - 2*a*b*cos(d));
//     h = b*sin(d);

//     printf("%lf\n%lf\n%lf\n", S, L, h);

//     return 0;
// }

// // C : Standard Deviation 203 - 250
// #include<iostream>
// #include<cstdio>
// #include<cmath>
// using namespace std;

// int main(){
//     int n, A[1000];

//     while(1){
//         cin >> n;
//         if ( n == 0 ) break;

//         for ( int i = 0; i < n; i++ ) cin >> A[i];
//         int sum = 0;
//         for ( int i = 0; i < n; i++ ) sum += A[i];
//         double avg = 1.0*sum/n;
//         double dist = 0.0;
//         for ( int i =0; i < n; i++ ){
//             dist += (avg-A[i])*(avg-A[i]);
//         }
    
//     printf("%lf\n", sqrt(dist/n));
//     }
// }

// // D : Distance2 203 - 251
// #include<iostream>
// #include<cstdio>
// #include<cmath>
// using namespace std;

// int main(){
//     int n, x[100], y[100];
//     cin >> n;
//     for ( int i = 0; i < n; i++ ) cin >> x[i];
//     for ( int i = 0; i < n; i++ ) cin >> y[i];

//     double d[4];
//     for ( int i = 0; i < 4; i++ ) d[i] = 0.0;

//     for ( int p = 1; p <=3; p++ ){
//         for ( int i = 0; i < n; i++){
//             d[p] += pow(fabs(x[i] - y[i]), p);
//         }
//         d[p] = pow(d[p], 1.0/p);
//     }

//     for ( int i = 0; i < n; i++ ){
//         d[0] = (d[0] < fabs(x[i] - y[i])?fabs(x[i] - y[i]):d[0]);
//     }

//     printf("%lf\n", d[1]);
//     printf("%lf\n", d[2]);
//     printf("%lf\n", d[3]);
//     printf("%lf\n", d[0]);

//     return 0;
// }

// // A : Dice 1 216 - 252
// #include<iostream>
// using namespace std;

// class Cube{
//     public:
//     int f[6];
//     Cube(){}
//     void roll_z(){roll(1, 2, 4, 3);} //
//     void roll_y(){roll(0, 2, 5, 3);} // to W
//     void roll_x(){roll(0, 1 ,5, 4);} // to N
//     void roll(int i, int j, int k, int l){
//         int t = f[i]; f[i] = f[j]; f[j] = f[k]; f[k] = f[l]; f[l] = t;
//     }
//     void move (char ch){
//         if ( ch == 'E' ) for (int i = 0; i < 3; i++ ) roll_y();
//         if ( ch == 'W' ) roll_y();
//         if ( ch == 'N' ) roll_x();
//         if ( ch == 'S' ) for (int i = 0; i < 3; i++ ) roll_x();
//     }
// };

// int main(){
//     Cube c;
//     string com;

//     for ( int i = 0; i < 6; i++ ) cin >> c.f[i];
//     cin >> com;

//     for (int i = 0; i < com.size(); i++ ) c.move (com[i]);

//     cout << c.f[0] << endl;

//     return 0;
// }

// // B : Dice 2 218 - 253
// #include<iostream>
// using namespace std;

// class Cube{
//     public:
//     int f[6];
//     Cube(){}
//     void roll_z(){roll(1, 2, 4, 3);} //
//     void roll_y(){roll(0, 2, 5, 3);} // to W
//     void roll_x(){roll(0, 1 ,5, 4);} // to N
//     void roll(int i, int j, int k, int l){
//         int t = f[i]; f[i] = f[j]; f[j] = f[k]; f[k] = f[l]; f[l] = t;
//     }
// };

// int getRight( Cube c1, int f1, int f2 ){
//     for ( int i = 0; i < 6; i++ ){
//         for ( int j = 0; j < 4; j++ ){
//             if ( c1.f[0] == f1 && c1.f[1] == f2) return c1.f[2];
//             c1.roll_z();
//         }
//         if ( i % 2 == 0 ) c1.roll_y();
//         else c1.roll_x();
//     }
//     return -1;
// }

// int main(){
//     Cube c;
//     int f1, f2;

//     for ( int i = 0; i < 6; i++ ) cin >> c.f[i];
//     int q; cin >> q;

//     for ( int i = 0; i < q; i++ ){
//         cin >> f1 >> f2;
//         cout << getRight (c, f1, f2) << endl;
//     }
    
//     return 0;
// }

// // C : Dice 3 219 - 254
// #include<iostream>
// using namespace std;

// class Cube{
//     public:
//     int f[6];
//     Cube(){}
//     void roll_z(){roll(1, 2, 4, 3);} //
//     void roll_y(){roll(0, 2, 5, 3);} // to W
//     void roll_x(){roll(0, 1 ,5, 4);} // to N
//     void roll(int i, int j, int k, int l){
//         int t = f[i]; f[i] = f[j]; f[j] = f[k]; f[k] = f[l]; f[l] = t;
//     }
// };

// bool eq ( Cube c1, Cube c2 ){
//     for ( int i = 0; i < 6; i++ ){
//         if (c1.f[i] != c2.f[i] ) return false;
//     }
//     return true;
// }

// bool equal ( Cube c1, Cube c2 ){
//     for (int i =0; i < 6; i++ ){
//         for ( int j =0; j < 4; j++ ){
//             if ( eq(c1, c2) )return true;
//             c1.roll_z();
//         }
//         if ( i % 2 == 0 )c1.roll_y();
//         else c1.roll_x();
//     }
//     return false;
// }

// int main(){
//     Cube c1, c2;
//     for ( int i = 0; i < 6; i++ )cin >> c1.f[i];
//     for ( int i = 0; i < 6; i++ )cin >> c2.f[i];

//     if ( equal(c1, c2) )cout << "Yes" << endl;
//     else cout << "No" << endl;

//     return 0;
// }

// // D : Dice 4 220 - 255
// #include<iostream>
// using namespace std;

// class Cube{
//     public:
//     int f[6];
//     Cube(){}
//     void roll_z(){roll(1, 2, 4, 3);} //
//     void roll_y(){roll(0, 2, 5, 3);} // to W
//     void roll_x(){roll(0, 1 ,5, 4);} // to N
//     void roll(int i, int j, int k, int l){
//         int t = f[i]; f[i] = f[j]; f[j] = f[k]; f[k] = f[l]; f[l] = t;
//     }
// };

// bool eq ( Cube c1, Cube c2 ){
//     for ( int i = 0; i < 6; i++ ){
//         if (c1.f[i] != c2.f[i] ) return false;
//     }
//     return true;
// }

// bool equal ( Cube c1, Cube c2 ){
//     for (int i =0; i < 6; i++ ){
//         for ( int j =0; j < 4; j++ ){
//             if ( eq(c1, c2) )return true;
//             c1.roll_z();
//         }
//         if ( i % 2 == 0 )c1.roll_y();
//         else c1.roll_x();
//     }
//     return false;
// }

// Cube C[1000]; int n;

// bool check(){
//     for ( int i = 0; i < n-1; i++)
//         for ( int j = i+1; j < n; j++ ) if ( equal(C[i], C[j]) ) return false;
//     return true;
    
// }

// int main(){
//     cin >> n;
//     for ( int j =0; j < n; j++ )
//         for ( int i = 0; i < 6; i++ )cin >> C[j].f[i];

//     if ( check() ) cout << "Yes" << endl;
//     else cout << "No" << endl;

//     return 0;
// }