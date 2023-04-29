#include<lhr.h>
using namespace std;
using namespace game;

string name;
int rp;

void init() {
	cls();
	system("color f0");
	rp=0;
	name="none";
}



void print_main() {
	p("\n       OIÐ¡ÖúÊÖ", 0);
	p("|------------------|", 0);
	p("|      1.ÉèÖÃ      |", 0);
	p("|------------------|", 0);
	p("|      2.ÍË³ö      |", 0);
	p("|------------------|", 0);
	p("|      3.¹ØÓÚ      |", 0);
	p("|__________________|", 0);
	return;
}

void set_up_color() {
	while (true) {
		cls();
		p("\n     ÑÕÉ«ÉèÖÃ", 0);
		p("|------------------|", 0);
		p("|    1.ÆÕÍ¨Ä£Ê½    |", 0);
		p("|------------------|", 0);
		p("|    2.Ò¹¼äÄ£Ê½    |", 0);
		p("|------------------|", 0);
		p("|    3.»¤ÑÛÄ£Ê½    |", 0);
		p("|------------------|", 0);
		p("|      4.Àë¿ª      |", 0);
		p("|__________________|", 0);
		char c = getch();
		switch (c) {
			case '1':
				cls();
				system("color f0");
				break;
			case '2':
				cls();
				system("color 07");
				break;
			case '3':
				system("color e0");
				cls();
				break;
			default:
				return;

		}
	}
}

void set_up_use(){
	if(name=="none"){
		p("Äã»¹Ã»ÓÐ×¢²á£¬Çë×¢²á£¡",1);
		cout<<"ÓÃ»§Ãû£º";
		cin>>name;
		system("pause");
		return;
	}
	else{
		cout<<"usename:"<<name<<endl<<"rp:"<<rp<<endl;
		p("×¢ÏúÕË»§£¿(y/n)",0);
		if(is_get('y')==true){
			name="none";
			rp=0;
		}
		system("pause");
		return;
	}
}

void set_up() {
	while (true) {
		cls();
		p("\n       ÉèÖÃ", 0);
		p("|------------------|", 0);
		p("|      1.ÑÕÉ«      |", 0);
		p("|------------------|", 0);
		p("|      2.ÓÃ»§      |", 0);
		p("|------------------|", 0);
		p("|      3.Àë¿ª      |", 0);
		p("|__________________|", 0);
		char c = getch();
		switch (c) {
			case '1':
				cls();
				set_up_color();
				break;
			case '2':
				cls();
				set_up_use();
				break;
			case '3':
				cls();
				return;
		}
	}
}

void save() {

}
void about() {
	p("\n       ¹ØÓÚ", 0);
	p("|------------------|", 0);
	p("| OIÐ¡ÖúÊÖ         |", 0);
	p("|                  |", 0);
	p("| °æ±¾£ºV1.0       |", 0);
	p("|                  |", 0);
	p("| ´´×÷Õß£ºluhaoren |", 0);
	p("|__________________|\n", 0);
	p("±¾Èí¼þÖ¼ÔÚ°ïÖú¹ã´óoierÑ§Ï°oi£¬ÇëÎðµÁ°æ\n", 0);
	p("ÁË½â¸ü¶à£º°´g¼ü\n", 0);
	if (is_get('g') == true) system("start https://www.luogu.com.cn/paste/dwfd4paz");
	else system("pause");
	return;
}
void main_while() {
	cls();
	print_main();
	char c = getch();
	switch (c) {
		case '1':
			cls();
			set_up();
			break;
		case '2':
			cls();
			exit(-1);
			break;
		case '3':
			cls();
			about();
			break;
	}
}


int main() {
	init();
	while (true) main_while();
}
