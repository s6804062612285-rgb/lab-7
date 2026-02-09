#include <stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
}

//a)  functionM(); จะไม่มีค่าออกมาเพราะยังไม่ได้เก็บค่าในตัวแปร
//b)  a = functionM(); ค่าอาจผิด เพราะa เป็น int แต่ฟังก์ชันreturn double
//c)  b = functionN(a, b); ถูกต้อง เพราะ ตัวแปรเป็น int และฟังก์ชันreturn int 
//d)  r = functionO(r,a,s,b); ถูกต้อง รับค่าและรีเทิร์นออกมาตรงกัน
//e)  s = functionP(a,b,c,d,e); ผิด เพราะพารามิเตอร์ของฟังก์ชันรับแค่ 4 ตัว แต่ส่งไป 5 ตัว
//f)  u = functionM(); ถูกต้อง รับค่าเป็นdouble ตรงกับตัวแปร
//g)  c = d + functionN(r,s); ถูกต้อง เพราะ r เปลี่ยนเป็นจำนวนเต็ม
//h)  t = s * functionO(r, a, r, a); ถูกต้อง รับค่าdouble มาใส่ตัวแปรที่เป็นdouble
//i)  a = v + functionP(r, s, t, t); ค่าสุดท้ายที่เก็บใน a เป็นint ค่าอาจไม่ตรง
//j)  functionP(functionN(a, a), s, t, t+r); รันได้แต่ไม่แสดงค่าออกมา
//k)  v = functionP(functionN(a, a), s, t, t+r); ถูกต้อง 