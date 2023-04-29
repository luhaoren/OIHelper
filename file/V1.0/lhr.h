#ifndef LHR_H
#define LHR_H
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

#define ll long long
#define MAXN 10e9
#define INF 0x3f3f3f3f
#define N 501

namespace lhr {
	bool prime(int a) {
		//判断是否为质数
		for (int i = 2; i < a; i++) {
			if (a % i == 0) return false;
		}
		return true;
	}
	
	inline int gcd(int a,int b) {
		//最大公约数
	    return b>0 ? gcd(b,a%b):a;
	}
	
	inline int lcm(int a, int b) {
		//最小公倍数
	    return a*b/gcd(a, b);
	}

	int Fib(int n) {
		//斐波那契数列的第n项
		if (n == 1) return 1;
		if (n == 2) return 1;
		else return Fib(n - 1) + Fib(n - 2);
	}

	int comc(char a[], char b[]) {
		//比较两个字符数组的大小
		int la = strlen(a), lb = strlen(b);
		if (la > lb) return 1;
		if (la < lb) return -1;
		for (int i = 0; i < la; i++) {
			if (a[i] > b[i]) return 1;
			if (a[i] < b[i]) return -1;
		}
		return 0;
	}

	int comarr(int a[], int b[], int la, int lb) {
		//比较两个数组的大小
		if (la > lb) return 1;
		if (la < lb) return -1;
		for (int i = 0; i < la; i++) {
			if (a[i] > b[i]) return 1;
			if (a[i] < b[i]) return -1;
		}
		return 0;
	}

	void sub(char aa[], char bb[]) {
		//高精度减法
		int a[1010], b[1010];
		int flag = comc(aa, bb);
		if (flag == 0) {
			std::cout << 0;
			return;
		}
		int la = strlen(aa), lb = strlen(bb);
		for (int i = 0; i < la; i++) a[la - i] = aa[i] - '0';
		for (int i = 0; i < lb; i++) b[lb - i] = bb[i] - '0';
		if (flag == 1) {
			for (int i = 1; i <= lb; i++)	{
				a[i] -= b[i];
				if (a[i] < 0) {
					a[i + 1]--;
					a[i] += 10;
				}
			}
			while (a[la] == 0) la--;
			for (int i = la; i > 0; i--) std::cout << a[i];
		} else {
			for (int i = 1; i <= la; i++)	{
				b[i] -= a[i];
				if (b[i] < 0) {
					b[i + 1]--;
					b[i] += 10;
				}
			}
			while (b[lb] == 0) lb--;
			std::cout << '-';
			for (int i = lb; i > 0; i--) std::cout << b[i];
		}
	}

	void add(char aa[], char bb[]) {
		//高精度加法
		int a[1010], b[1010], c[2010];
		int la = strlen(aa), lb = strlen(bb);
		for (int i = 0; i < la; i++) a[la - i] = aa[i] - '0';
		for (int i = 0; i < lb; i++) b[lb - i] = bb[i] - '0';
		int lc = std::max(la, lb) + 1;
		for (int i = 1; i <= lc; i++)	{
			c[i] += a[i] + b[i];
			c[i + 1] = c[i] / 10;
			c[i] %= 10;
		}
		if (c[lc] == 0) lc--;
		for (int i = lc; i > 0; i--) std::cout << c[i];
		return;
	}

	inline int read() {
		//快读
		int x = 0, f = 1;
		char c = getchar();
		while (c < '0' || c > '9') {
			if (c == '-') f = -1;
			c = getchar();
		}
		while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
		return x * f;
	}

	inline void write(int x) {
		//快写
		if (x < 0) putchar('-'), x = -x;
		if (x > 9) write(x / 10);
		putchar(x % 10 + '0');
	}

	int arr_max(int a[], int l) {
		//一个数组中的最大值
		int ans = 0;
		for (int i = 1; i <= l; i++) ans = std::max(ans, a[i]);
		return ans;
	}

	int arr_min(int a[], int l) {
		//一个数组中的最小值
		int ans = 0;
		for (int i = 1; i <= l; i++) ans = std::min(ans, a[i]);
		return ans;
	}

	int sum(int a[], int l, int r) {
		//一个数组的和
		int s = 0;
		for (int i = l; i <= r; i++) s += a[i];
		return s;
	}

	int aver(int a[], int l, int r) {
		//一个int数组的平均值
		int s;
		s = sum(a, l, r);
		return s / (r - l);
	}

	int float_aver(double a[], int l, int r) {
		//浮点型的平均值
		double s = 0;
		for (int i = l; i <= r; i++) s += a[i];
		return s / (double)(r - l);
	}
}
namespace game {
	void cls() {
		system("cls");   //清屏
	}
	void p(char c[1100], int time) {
		//输出+停顿
		std::cout << c<<std::endl;
		Sleep(time * 1000);
	}
	char get() {
		char c = getch();
		return c;
	}
	bool is_get(char c) {
		//判断一个字母（键盘写入）是否为得数值
		if (getch() == c) return true;
		else return false;
	}
}
#endif
