#include<stdio.h>
//需要引入的文件
#include<string.h>
#include<math.h>
#include <stdlib.h>
//如提示运行通过，但解题失败，认真对比预期输出和实际输出之间的差异
int main()
{
	//注意：main函数必须return 0,否则无法通过评测， 因此不要修改下面的代码
	//long int input;
	//int out1, out2, out3;
	//scanf_s("%ld", &input);
	//out1 = input % 1000;
	//out2 = input % 1000000 / 1000;
	//out3 = input / 1000000;
	//printf("%d %d %d", out1, out2, out3);

	//float input = 100.453627;
	//printf("%.1f\n", input);
	//printf("%.2f\n", input);
	//printf("%.3f\n", input);
	//printf("%.4f\n", input);

	//float a, b, c;
	//float size, s;
	//scanf_s("%f %f %f", &a, &b, &c);
	//s = (a + b + c) / 2;
	//size = s * (s - a) * (s - b) * (s - c);
	//size = sqrt(size);
	//printf("%.6f", size);

	//double x, y;
	//scanf("%lf%lf", &x, &y);
	//printf("sin(x):%lf\n", sin(3.1415938 * x / 180));
	//printf("cos(x):%lf\n", cos(3.141593 * x / 180));
	//printf("|x|:%lf\n", fabs(x));
	//printf("e的x次方:%lf\n", exp(x));
	//printf("x的y次方:%lf", pow(x, y));

	//double input;
	//int integral,temp,state;
	//double  decimal_fraction;
	//char sign;
	//state = 0;
	//scanf_s("%lf", &input);
	//if (input > 0)sign = '+';
	//else
	//{
	//	sign = '-';
	//}
	//temp = input;
	//integral = abs((int)input);
	//if (input > 0) {
	//	decimal_fraction = input - integral;
	//}
	//else
	//{
	//	decimal_fraction = fabs(input + integral);
	//}
	//printf("sign:%c\n", sign);
	//printf("integral part:%d\n", integral);
	//printf("decimal fraction part:%lf\n", decimal_fraction);

	//int ratio,juice_num;
	//double weight;
	//ratio = 35 / 5;//甜味剂杀死人的比例
	//scanf_s("%lf", &weight);
	//juice_num = weight * 1000 / ratio / 0.35;
	//printf("喝%d罐汽水可杀死你", juice_num);


	//float weight, tem1, tem2,Q;
	//scanf_s("%f%f%f", &weight, &tem1, &tem2);
	//Q = weight * (tem2 - tem1) * 4184;
	//printf("%.2f焦耳", Q);


	//int min, day, year,m;
	//scanf_s("%d", &min);
	//year = min / 1440 / 365;
	//day = min / 60 / 24-year*365;
	//
	//m = min - day * 1440;
	//printf("%d年%d天", year,m==0?day:day+1 );

	//int a, b;
	//a=getchar();
	//b=getchar();
	//printf("用putchar输出语句:");
	//putchar(a);
	//putchar(b);
	//printf("\n用printf输出语句:%c%c",a,b);

	//char str[] = "China";
	//for (int i = 0; i < strlen(str); i++) {
	//	str[i] += 4;
	//}
	//printf("%s", str);


	//int a, b;
	//float x, y;
	//char c1, c2;
	//scanf_s("%d %d %f %f %c %c ", &a, &b, &x, &y, &c1,1, &c2,1);
	//printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c",a,b,x,y,c1,c2);

	//double m,d,p,r;
	//r = 0.01;
	//p = 6000;
	//d = 300000;
	//m = log10(p / (p - d * r)) / log10(1 + r);
	//printf("%.1f", m);

	//float p, r;
//r = 0.07;
//p = pow(1.07, 10);
//printf("%.6f", p);



	//int weishu, output;
	//int input,temp;//不多于五位数字
	//int out[5];
	//memset(out, 0, sizeof(out));
	//scanf_s("%d", &input);
	//weishu = 0;
	//output = 0;
	//temp = input;
	//while(temp!=0){
	//	out[weishu] = temp % 10;
	//	temp = temp / 10; 
	//	weishu++;
	//}
	//for (int i = 0; i < weishu; i++) {
	//	output += out[i] * (int)pow((double)10, (double)(weishu - i-1));
	//}
	//printf("there are %d,", weishu);
	//for (int i = 0; i < weishu; i++) {
	//	printf("%d", out[i]);
	//}


	////输入某年某月某日，判断这一天是这一年的第几天？
	//int year, mon, day;
	//int total_day;
	//int y_mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//total_day = 0;
	//scanf_s("%d%d%d", &year, &mon, &day);
	////先判断今年的二月几天，闰年是公历年份是 4 的倍数，且不是 100 的倍数的或者400的倍数
	////31天  1,3,5,7,8,10,12
	////30天  4,6,9,11
	//for (int i = 1; i < mon; i++) {
	//	total_day += y_mon[i];
	//}
	//total_day += day;
	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {//闰年情况
	//	if (mon > 2) {
	//		total_day += 1;
	//	}
	//}
	//printf("%d", total_day);


	/*编程实现：输入一个整数，判断它能否被3，5，7整除，并输出以下信息之一：
	 ①能同时被3，5，7整除； ②能被其中两数(要指出哪两个)整除；
	 ③能被其中一个数(要指出哪一个)整除； ④不能被3，5，7任一个整除。*/
	 /*int input;
	 scanf_s("%d", &input);
	 if (input % 3 == 0 && input % 5 == 0 && input % 7 == 0) {
		 printf("%d能同时被3、5、7整除", input);
	 }
	 else if (input % 3 == 0 && input % 5 == 0) {
		 printf("%d能同时被3、5整除", input);
	 }
	 else if (input % 3 == 0 && input % 7 == 0) {
		 printf("%d能同时被3、7整除", input);
	 }
	 else if (input % 5 == 0 && input % 7 == 0) {
		 printf("%d能同时被5、7整除", input);
	 }
	 else if (input % 3 == 0 ) {
		 printf("%d能同时被3整除", input);
	 }
	 else if (input % 5 == 0) {
		 printf("%d能同时被5整除", input);
	 }
	 else if (input % 7 == 0) {
		 printf("%d能同时被7整除", input);
	 }
	 else
	 {
		 printf("%d不能被3、5、7任一个整除", input);
	 }*/



	 /*编写一个程序，要求用户输入两个整数，判定前一个是否能整除后一个。*/
		 //int input1, input2;
		 //scanf_s("%d %d", &input1, &input2);
		 //if (input1 % input2 == 0)
		 //	printf("能整除");
		 //else
		 //{
		 //	printf("不能整除");
		 //}


	 /*个人所得税计算，应纳税款的计算公式如下：
	 收入 税率
	 收入<＝1000元部分 0％
	 2000元>＝收入>1000元的部分 5％
	 3000元>＝收入>2000元的部分 10％
	 6000元>＝收入>3000元的部分 15％
	 收入>6000元的部分 20％
	 输入某人的收入，计算出应纳税额及实际得到的报酬。要求必须使用if-else 结构完成。*/
	 //int wages;
	 //float taxe,real_wage;
	 //scanf_s("%d", &wages);
	 //if (wages <= 1000) {
	 //	taxe = 0;
	 //}
	 //else if (1000 < wages &&wages<= 2000) {
	 //	taxe = (wages - 1000) * 0.05;
	 //}
	 //else if (2000 < wages&&wages <= 3000) {
	 //	taxe = (wages - 2000) * 0.1+50;
	 //}
	 //else if (3000 < wages&&wages <= 6000) {
	 //	taxe = (wages - 3000) * 0.15+150;
	 //}
	 //else
	 //{
	 //	taxe = 600 + (wages - 6000) * 0.2;
	 //}
	 //real_wage = wages - taxe;
	 //printf("个人所得税=%.1f 实际报酬%.2f", taxe, real_wage);


 /*从键盘接收一个字符，如果是字母，输出其对应的ASCII码，
 如果是数字，按原样输出，否则给出提示信息“输入错误！”。*/

 //char input;
 //scanf_s("%c", &input);
 ////0xdf=30
 //if ((char)input >= 0x30 && (char)input <= 0x39) {
 //	printf("%c", input);
 //}
 //else if ((char)input < 0x30) {
 //	printf("输入错误!");
 //}
 //else
 //{
 //	printf("%d",input);
 //}



/*输入一个整数，判断该数是奇数还是偶数。要求必须使用if-else 结构实现*/
	//int input;
	//scanf_s("%d", &input);
	//if (input % 2 == 0) {
	//	printf("偶数");
	//}
	//else
	//{
	//	printf("奇数");
	//}


/*从键盘输入一个学生的分数, 要求实现这样的判断功能:
如果分数大于100或者小于0，输出”Input error!”
如果分数介于100到90之间（包含100但不包含90）,
输出”Very Good!” 如果分数介于80到90之间,输出”Good!”
如果分数介于70到80之间,输出”Middle!” 如果分数介于60到70之间,
输出”Pass!” 如果分数小于等于60,输出”No Pass!”。要求必须使用if-else 结构实现。*/

//int input;
//scanf_s("%d", &input);
//if (input > 100 || input < 0) {
//	printf("Input error!");
//}
//else if (input<=100&&input>90) {
//	printf("Very Good!");
//}
//else if (input <= 90 && input > 80) {
//	printf("Good!");
//}
//else if (input <= 80 && input > 70) {
//	printf("Middle!");
//}
//else if (input <= 70 && input > 60) {
//	printf("Pass!");
//}
//else
//{
//	printf("No Pass!");
//}


/*编写一个简单计算器程序，输入格式为：data1 op data2。其中data1和data2是参加运算的两个数，
op为运算符，它的取值只能是+、-、*、/。。要求必须使用switch-case语句实现。
输出结果精确到小数点后2位：如输入1+1， 程序应该返回结果2.00。如果输入的等式有误，则输出Error.。*/

//int data1, data2;
//char op;
//scanf_s("%d %c %d", &data1, &op, &data2);
//switch (op)
//{
//case'+':
//	printf("%.2f", (float)(data1 + data2));
//	break;
//case'-':
//	printf("%.2f", (float)(data1 - data2));
//	break;
//case'*':
//	printf("%.2f", (float)(data1 * data2));
//	break;
//case'/':
//{
//	if (data2 == 0)printf("Error");
//	else
//	{
//	printf("%.2f", (float)(data1 / data2));
//	}
//	

//}	
//	break;
//default:
//	printf("Error");
//	break;
//}



/*编程判断输入的正整数是否既是5又是7的整倍数。若是，输出Yes，否则输出No。*/
//int input;
//scanf_s("%d", &input);
//if (input % 5 == 0 && input % 7 == 0) {
//	printf("Yes");
//}
//else
//{
//	printf("No");
//}


/*计算运输公司的运输费用。路程(s)越远，每吨*千米运费越低，
标准如下 S<250 没有折扣 250≤S<500 2%折扣 500≤S<1000 5%折扣
1000≤S<2000 8%折扣 2000≤S<3000 10%折扣 3000≤S 15%折扣*/
//float fee, weight, s,total_fee;
//scanf_s("%f %f %f", &fee, &weight, &s);
//
//if (s < 250) {
//	total_fee = fee*weight * s;
//}
//else if (s >= 250 && s < 500) {
//	total_fee = fee * weight * s *0.98;
//}
//else if(s>=500&&s<1000)
//{
//	total_fee = fee * weight * s *0.95;
//
//}
//else if (s >= 1000 && s < 2000) {
//	total_fee = fee * weight * s *0.92;
//}
//else if (s >= 2000 && s < 3000) {
//	total_fee = fee * weight * s *0.9;
//}
//else {
//	total_fee = fee * weight * s *0.85;
//}
//printf("%.2f", total_fee);


//int year;
//scanf_s("%d", &year);
//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {//闰年情况
//	printf("Yes");
//}
//else
//{
//	printf("No");
//}


/*输入一个字符，判别它是否为大写字母，如果是，转换成小写字母，如果不是，不转换。*/
//char input;
//input = getchar();
//if (input >= 'A' && input <= 'Z') {
//	printf("%c", input + 32);
//}
//else
//{
//	printf("%c", input);
//}


/*输入两个实数，按代数值由小到大的顺序输出这两个数（保留两位小数）*/
//int a, b;
//scanf_s("%d %d", &a, &b);
//printf("%.2f %.2f", (float)(a < b ? a : b), (float)(a < b ? b : a));


/*每本书的封底都有一串号码，比如978-7-111-34081-2，它叫做"国际标准书号"
（International Standard Book Number，缩写为ISBN）。它是全世界图书的编码，
用来唯一代表一本书。目前ISBN是13位。从组成上看，13位的ISBN可以分为5个区：
第一区 EAN-UCC前缀 、第二区 组区号、第三区 出版者号、第四区 出版序号、第五区 校验码。
其中第二区 组区号从第4位数字开始。这部分表明这本书是哪个国家或地区出版的。
\0或1表示英语国家，2表示法语国家，3表示德语国家，4表示日本，5表示俄语国家，
6表示伊朗，7表示中国大陆，89表示韩国，957和986表示台湾，962和988表示香港，
99936表示不丹。 输入一个13位ISBN。输入格式：978-7-111-34081-2 输入之后，
输出ISBN中所包含的出版地区的信息。 比如：组区号为7，则输出” China”。
这里我们最低要求识别的地区包括： 0 English Region 1 English Region 2 French Region 4 Japan
7 China 89 South Korea 957 Taiwan 986 Taiwan 962 Hong Kong 988 Hong Kong*/

//char ISBN[20];
//scanf_s("%s", ISBN,sizeof(ISBN));
//if (ISBN[4] == '7') {
//	printf("China");
//}
//if (ISBN[4] == '0') {
//	printf("English Region");
//}
//if (ISBN[4] == '1') {
//	printf("English Region");
//}
//if (ISBN[4] == '2') {
//	printf("French Region");
//}
//if (ISBN[4] == '4') {
//	printf("Japan");
//}
//if (ISBN[4] == '8' && ISBN[5] == '9') {
//	printf("South Korea");
//}
//if (ISBN[4] == '9' && ISBN[5] == '5' && ISBN[6] == '7') {
//	printf("Taiwan");
//}
//if (ISBN[4] == '9' && ISBN[5] == '8' && ISBN[6] == '6') {
//	printf("Taiwan");
//}
//if (ISBN[4] == '9' && ISBN[5] == '6' && ISBN[6] == '2') {
//	printf("Hong Kong");
//}
//if (ISBN[4] == '9' && ISBN[5] == '8' && ISBN[6] == '8') {
//	printf("Hong Kong");
//}


/*请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，
则继续判断第二个字母。 例如： 程序运行时，提示你"please input first character:"
你输入'f'或者'F'，则程序输出"Friday"， 你输入s，则程序需要进一步的输入 此时还需要进一步输入u，
程序才输出"Sunday" 如果你输入的字母和任何星期的英文单词首字母都不匹配，则程序需要提示"Illegal input!\n"。*/
//Monday（星期一）
//Tuesday（星期二）
//Wednesday（星期三）
//Thursday（星期四）
//Friday（星期五）
//Saturday（星期六）
//Sunday（星期天）

//char in1, in2;
//scanf_s("%c", &in1,sizeof(in1));
//if (in1 == 'S' || in1 == 's') {
//	scanf_s("%c", &in2);
//	if (in2 == 'a' || in2 == 'A') {
//		printf("Saturday");
//	}
//	else
//	{
//		printf("Sunday");
//	}
//}
//else if(in1=='m'||in1=='M')
//{
//	printf("Monday");
//}
//else if (in1 == 't' || in1 == 'T')
//{
//	printf("Tuesday");
//}
//else if (in1 == 'W' || in1 == 'w')
//{
//	printf("Wednesday");
//}
//else if (in1 == 'T' || in1 == 't')
//{
//	printf("Thursday");
//}
//else if (in1 == 'f' || in1 == 'F')
//{
//	printf("Friday");
//}
//else
//{
//	printf("illegal input!");
//}


/*编写一个程序，从键盘依次读入5个实数，如果整个输入序列不递减，则输出YES，否则输出NO.
（所谓输入序列不递减，指对于序列中连续的两个数n1和n2，满足n1<=n2）*/
//int input[5];
//int state;
//state = 0;
//scanf_s("%d %d %d %d %d", &input[0],&input[1],&input[2],&input[3],&input[4]);
//
//for (int i = 0; i < 3; i++) {
//	if (input[i] <= input[i + 1] && input[i + 1] <= input[i + 2]) {
//		printf("Yes");
//		state = 0;
//		break;
//	}
//	state = 1;//1表示失败
//}
//if (state == 1)printf("No");


/*计算反应在当前温度T下是否能够自发进行*/
//int H, T, S, G;
//scanf_s("%d %d %d", &H, &T, &S);
//if (H - T * S < 0) {
//	printf("Yes");
//}
//else
//{
//	printf("No");
//}


/*输入三个整数a,b,c，从小到大排列依次存入a,b,c中并输出。*/

//int a[3];
//int temp;
//scanf_s("%d %d %d", &a[0],&a[1],&a[2]);
//for (int i = 0; i < 2; i++) {
//	for (int i = 0; i < 2; i++) {
//		if (a[i] > a[i + 1]) {
//			temp = a[i];
//			a[i] = a[i + 1];
//			a[i + 1] = temp;
//		}
//	}
//}
//printf("%d %d %d", a[0], a[1], a[2]);


/*编写程序，从键盘输入一个二元一次方程ax2+bx+c=0的三个参数a、b、c（均为整数），
求此方程的实根。如果方程有实根，则输出实根（精确到小数点后2位，较大实根在前），
如果没有实根，则输出没有实根的信息。*/

//int a, b, c;
//float x1, x2;
//scanf_s("%d %d %d", &a, &b, &c);
//if (b * b - 4 * a * c < 0) {
//	printf("无实根!");
//}
//else
//{
//	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//	printf("实根为%.2f,%.2f", x1,x2);
//}


/*有4个圆塔，圆心分别为(2,2)、(-2,2)、(-2,-2)、(2,-2)，圆半径为1，这四个塔的高度为10米，
塔以外无建筑物。输入任意点坐标，求该点的建筑高度（塔外高度为0）*/

//float x, y;
//scanf_s("%f %f", &x, &y);
//if (pow((x - 2), 2) + pow((y - 2), 2) <= 1 || pow((x + 2), 2) + pow((y - 2), 2) <= 1 ||
//	pow((x + 2), 2) + pow((y + 2), 2) <= 1 || pow((x - 2), 2) + pow((y + 2), 2) <= 1)
//{
//	printf("10");
//}
//else
//{
//	printf("0");
//}


/*输入4个整数，要求按由小到大的顺序输出*/

//int a[4];
//int temp;
//scanf_s("%d %d %d %d", &a[0],&a[1],&a[2],&a[3]);
//for (int i = 0; i < 3; i++) {
//	for (int i = 0; i < 3; i++) {
//		if (a[i] > a[i + 1]) {
//			temp = a[i];
//			a[i] = a[i + 1];
//			a[i + 1] = temp;
//		}
//	}
//}
//printf("%d %d %d %d", a[0], a[1], a[2],a[3]);


/*企业发放的奖金根据利润提成。利润I低于或等于100000元的，奖金可提成10%；
利润高与100000元，低于200000元（100000≤ I ≤200000）时，低于100000元的部分按10%提成，
高于100000的部分，可提成7.5%；200000＜I ≤400000时，低于200000元的部分仍按上述办法提成（下同）。
高于200000元的部分按5%提成；400000＜I ≤600000元时，高于400000元的部分按3%提成；600000＜ I ≤1000000时，
高于600000元的部分按1.5%提成；I＞1000000时，超过1000000元的部分按1%提成。从键盘输入当月利润I，
求应发奖金总数，保留两位小数。用switch语句编写程序。*/

//double I, wage;
//scanf_s("%f", &I);
//switch ((int)I/100000)
//{
//case 0:
//	wage = I * 0.1;
//	break;
//case 1://一道二十万
//	wage = (I - 100000) * 0.075 + 10000;
//	break;
//case 2://二十万到四十万
//case 3://二十万到四十万
//	wage = 10000 + 7500 + (I - 200000) * 0.05;
//	break;
//case 4://四十万到里六十万
//case 5://四十万到里六十万
//	wage = 10000 + 7500 + 10000 + (I - 400000) * 0.03;
//	break;
//case 6://六十万到一百万
//case 7://六十万到一百万
//case 8://六十万到一百万
//case 9://六十万到一百万
//	wage = 10000 + 7500 + 10000 + 6000 + (I - 600000) * 0.015;
//	break;
//
//default://超过100万
//	wage = 10000 + 7500 + 10000 + 6000 + 6000 + (I - 1000000) * 0.01;
//	break;
//}
//printf("%.2f", wage);


/*输入一个不多于5位的正整数，要求：
求出它是几位数 分别输出每一位数字 按逆序输出各位数字，例如原数为321，应输出123*/

//int input;
//int weishu,temp,i;
//int out[5],fan_out;
//scanf_s("%d", &input);
//temp = input;
//i = 0;
//fan_out = 0;
//while (temp != 0) {
//		
//		out[i] = temp % 10;
//		temp=temp / 10;
//		weishu++;
//		i++;
//	
//}
//
//printf("位数:%d\n", weishu);
//printf("每位数字为:");
//for (i = weishu-1; i > weishu; i--) {
//	printf("%d", out[i]);
//}
//
//for (i = 0; i < weishu; i++) {
//	fan_out += out[i] * pow(10, weishu - i - 1);
//}
//printf("\n反序数字为:%d", fan_out);


/*给出一百分制成绩，要求输出成绩等级’A’、’B’、’C’、’D’、’E’。
90分以上为‘A’,80~89为‘B’,70~79为‘C’,60~69为‘D’, 60分以下为‘E’。*/




/*编写一个C程序，输入x的值，输出y相应的值*/
//int x, y;
//scanf_s("%d", &x);
//if (x < 0)printf("y=-1");
//else if (x == 0)printf("y=0");
//else
//{
//	printf("y=1");
//}


/*从键盘输入一个小于1000的正数，要求输出它的平方根(如果平方根不是整数则输出其整数部分)。*/
//double input;
//scanf_s("%lf", &input);
//printf("%f", sqrt((double)input));



/*有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？*/
	//int a[4] = {1,2,3,4};
	//int out,temp;
	//for (int j = 0; j < 4; j++)
	//{
	//	for (int i = 0; i <= 3; i++) {
	//		if(i-j==0){}
	//		else
	//		{
	//			for (int k = 0; k < 4; k++) {
	//				if (k - j != 0 && k - i != 0) {
	//					out = a[j] * 100 + a[i] * 10 + a[k];
	//					printf("%d ", out);
	//				}
	//			}
	//		
	//		}
	//	
	//	}
	//
	//}


/*打印10~1000之间满足下列条件的所有整数： 正序读和反序读都相同，例如：55、232等。*/
	//int a[5];
	//int weishu, temp, total;
	//weishu = 0;
	//temp = 0;
	//total = 0;
	//memset(a, 0, sizeof(a));
	//for (int i = 10; i < 1001; i++) {
	//	temp = i;
	//	while (temp != 0) {
	//		a[weishu] = temp % 10;
	//		temp = temp / 10;
	//		weishu++;
	//	}
	//	for (int j = 0; j < weishu; j++) {
	//		total += a[j] * (int)pow(10, weishu - 1 - j);
	//	}
	//	if (total == i) {
	//		printf("%d ", i);
	//	}
	//	weishu = 0;
	//	total = 0;
	//}


/*统计200～1000之间能被7整除数的个数。*/
	//int count=0;
	//for (int i = 200; i < 1001; i++) {
	//	if (i % 7 == 0)count++;
	//}
	//printf("%d", count);



/*将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。 
程序分析：对n进行分解质因数，应先找到一个最小的质数k，
然后按下述步骤完成： (1)如果这个质数恰等于n，则说明分解质因数的过程已经结束，
打印出即可。 (2)如果n<>k，但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正数你n,
重复执行第一步。 (3)如果n不能被k整除，则用k+1作为k的值,重复执行第一步。*/

	//int n,temp,a[10],j,total,state;
	//scanf_s("%d", &n);
	//temp = n;
	//j = 0;
	//state = 0;
	//total = 1;
	//printf("%d=", temp);
	//for (int i = 2; i < n; i++) {
	//	if (temp % i == 0) {
	//		temp = temp/ i;
	//		printf("%d",i );
	//		a[j] = i;
	//		j++;
	//		i = 1;
	//		for (int k = 0; k < j; k++) {
	//			total *= a[k];
	//		}
	//		if (total != n) {
	//			printf("*");
	//			total = 1;
	//			state = 1;
	//		}
	//		
	//	}
	//	if (i == n - 1&&state==0) {
	//		printf("%d", n);
	//	}

	//}

	
/*古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，
小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问第40个月时兔子总数为多少对？ 
兔子的规律为数列1,1,2,3,5,8,13,21....*/

//long long a, b,out;
//a = 1;
//b = 1;
//for (int i = 3; i <=40;i++) {
//	out = a + b;
//	a = b;
//	b = out;
//}
//printf("%lld", out);
////printf("%lld", sizeof(a));\


/*韩信有一队兵，他想知道有多少人，便让士兵排队报数：按从1至5报数，
最末一个士兵报的数为1；按从1至6报数，最末一个士兵报的数为5；
按从1至7报数，最末一个士兵报的数为4；最后再按从1至11报数，
最末一个士兵报的数为10。编程求韩信至少有多少兵？*/

//int human;
//int x1, x2, x3, x4, x5;
//for (int i = 0; i < _CRT_INT_MAX; i++) {
//	if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10) {
//		printf("%d", i);
//		break;
//	}
//}


/*猴子第一天摘下若干个桃，当即只一半，又多吃一个。第二天早上又将剩下的一半吃掉一半，双多吃一个。
以后每天早上都吃了前天剩下的一半零一个，到第10天早上只剩下最后一个桃。问第一天摘了几个桃。*/

//int taozi=1;
//for (int i = 0; i < 9; i++) {
//	taozi = (taozi + 1) * 2;
//}
//printf("%d", taozi);
	

/*马克思手稿中有一道趣味数学题：有30个人，其中有男人、女人和小孩，
在一家饭馆里吃饭共花了50先令，每个男人各花3先令，
每个女人各花2先令，每个小孩各花1先令，问男人、女人和小孩各有几人？输出所有的可能结果。*/

//int men, women, child, money;
//for ( men = 1; men <= 25; men++) {
//	for ( women = 1; women <= 30; women++) {
//		for (child = 1; child < 30; child++) {
//			if (women * 2 + men * 3 + child * 1 == 50 && men + women + child == 30) {
//				printf("man:%d,woman:%d,child:%d\n", men, women, child);
//			}
//		}
//	}
//}


/*从键盘输入10 个整数，统计其中正数、负数和零的个数，并在屏幕上依次输出。*/

//int a[10],minus,plus,zero;
//minus = 0;
//plus = 0;
//zero = 0;
//for (int i = 0; i < 10; i++) {
//	scanf_s("%d", &a[i]);
//}
//for (int i = 0; i < 10; i++) {
//	if (a[i] < 0)minus++;
//	if (a[i] > 0)plus++;
//	if (a[i] == 0)zero++;
//}
//printf("%d %d %d", plus, minus, zero);


/*从键盘输入10个实型数，求其倒数的和并输出，保留两位小数。*/

//float a[10];
//int i;
//for (i = 0; i < 10; i++) {
//	scanf_s("%f", &a[i]);
//	a[i] = 1 / a[i];
//}
//for (i = 1; i < 10; i++) {
//	a[0] += a[i];
//}
//printf("%.2f", a[0]);


/*有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3）报数，
凡报到3的人退出圈子，问最后留下的是原来第几号。*/
//int n, temp,state;
//int k = 0;
//state = 0;
//scanf_s("%d", &n);
//int* arr = (int*)malloc((n+1) * sizeof(int));
//
//if (arr == NULL) {
//	printf("内存分配失败\n");
//	return 1;
//}
//for (int i = 1; i <= n; i++) {
//	arr[i] = i;
//}
//for (int i = 0;; i++) {
//	
//	state++;
//	if (state == n) {
//		k++;
//		state = state - n + 1;
//	}
//	if (state % 3 == 0) {
//	}
//}
//
//free(arr);

/*编程实现求1+2+3+..+n之和，并输出当其和第一次大于或等于100时的值及n值*/

//int n;
//n = 0;
//for (int i = 1;; i++) {
//	n += i;
//	if (n > 100) {
//		printf("第一次和大于或等于100时和为%d", n);
//		printf("第一次和大于或等于100时n为%d", i);
//		break;
//	}
//}


/*编程求1+（1+2）+..+（1+2+...+n),n的值由键盘输入。要求使用 for语句实现*/
//int n,total;
//total = 0;
//scanf_s("%d", &n);
//for (int i = 1;i<=n; i++) {
//	for (int k = 1; k <= i; k++) {
//		total += k;
//	}
//}
//printf("%d", total);


/*编写一个sum函数求和：输入一个正整数n，统计不大于n值的所有正偶数的和，
在主函数中完成输入输出。要求用 do-while 语句实现。*/

//int n, temp, total;
//total = 0;
//scanf_s("%d", &n);
//do {
//	if (n % 2 == 0) {
//		total += (n - 2);
//		n = n - 2;
//	}
//	else
//	{
//		total += (n - 1);
//		n = n - 2;
//	}
//} while (n > 2);
//
//printf("%d", total);


/*编写程序，求S=1/(1*2)+1/(2*3)+1/(3*4)+..前50项之和。*/

//float s,temp;
//s = 0;
//temp = 0;
//for (int i = 1; i < 51; i++) {
//	temp += (1.0 / (i * (i + 1)));
//}
//printf("%.6f", temp);


/*求100~200间的全部素数*/
//int j,geshu;
//geshu = 0;
//for (int i = 100; i <= 200; i++) {
//	for ( j = 2; j < i; j++) {
//		if (i % j == 0)break;
//	}
//	if (j == i) {
//		printf("%d ", i);
//		geshu++;
//	}
//	if (geshu % 10 == 0 && geshu != 0) {
//		printf("\n");
//		geshu = 0;
//	}
//}


/*按照规律生成并输出以下数列前20项的值：第一项和第二项为2、3，以后每个奇数编号项为前两项之和，
偶数编号项为前两项之差（前项减后项）。*/

//int a, b,state,temp;//a是前一项，b是后一项
//a = 2;
//b = 3;
//state = 3;
//printf("%d ", a);
//printf("%d", b);
//for (int i = 1; i <= 18; i++) {
//	if (state % 2 == 0) {
//		temp = b;
//		b = a-b;
//		a = temp;
//	}
//	else
//	{
//		temp = b;
//		b += a;
//		a = temp;
//
//	}
//	printf(" %d", b);
//	state++;
//}


/*编写程序读取正整数，找出它们的最大数，然后计算该最大数出现的次数。输入以-1结束。*/
//int a[100],i,temp,count;
//count = 1;
//for ( i = 0; i < 100; i++) {
//	scanf_s("%d", &a[i]);
//	if (a[i] == -1)break;
//}
//
//for (int j = 0; j < i; j++) {
//	for (int k = 0; k < i; k++) {
//		if (a[k] < a[k + 1]) {
//			temp = a[k];
//			a[k] = a[k + 1];
//			a[k + 1] = temp;
//		}
//	}
//}
//
//for (int j = 0; j < i; j++) {
//	if (a[j] == a[j + 1])count++;
//	else
//	{
//		break;
//	}
//}
//printf("max=%d count=%d", a[0], count);


/*莫尼森数*/
//int i, j, p, m,geshu;
//geshu = 0;
//p = 2;
//m = 2;
//while (geshu != 5) {
//	m = pow(2, p)-1;
//	for (i = 2; i < p; i++) {
//		if (p % i == 0)break;
//	}
//	if (i == p) {
//		for (j = 2; j < m; j++) {
//			if (m % j == 0)break;
//		}
//		if (j == m) {
//			printf("%d\n", m);
//			geshu++;
//		}
//	}
//	p++;
//}


/*输出所有满足以下条件的3位整数：该数是素数，
该数的个位数字与十位数字之和被10除所得余数恰好是该数的百位数字。
例如，293是素数并且（3+9）被10除的余数是2，因此293是满足条件的3位素数。*/
//int ge, shi, bai, temp, i, j;
//for (i = 100; i < 1000; i++) {
//	for (j = 2; j < i; j++) {
//		if (i % j == 0)break;
//	}
//	if (j == i) {
//		ge = i % 10;
//		shi = i / 10 % 10;
//		bai = i / 100;
//		if (bai == (ge + shi) % 10) {
//			printf("%d ", i);
//		}
//	}
//}
//



/*找出所有满足以下特性的6位整数：它是一个完全平方数（完全平方数是指该数是某个整数的平方），
该数同时也是回文数（回文数是指该数等于它的反序数）。例如，698896是836的平方并且698896是回文数，
因此698896是满足所给条件的6位整数。输出所有满足上述条件的6位整数。*/

//int i, temp,out,six,five,four,three,two,one;
//for (i = 100000; i < 1000000; i++)
//{
//	temp = sqrt(i);
//	if (temp * temp == i) {
//		if (i % 10 == i / 100000 && i / 10 % 10 == i / 10000 % 10 && i / 100 % 10 == i / 1000 % 10) {
//			printf("%d",i);
//		}
//	}
//}

//char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\116';
//printf("a%c b%c\tc%c\tabc\n", c1, c2, c3);
//printf("\t\b%c %c", c4, c5);


/*方程x1+x2+x3+x4=30有多少满足x1>=2,x2>=0,x3>=-5,x4>=8的整数解？*/
//int x1, x2, x3, x4,temp;
//temp = 0;
//for (x1 = 2; x1 <= 35; x1++) {
//	for (x2 = 0; x2 <= 35; x2++) {
//		for (x3 = -5; x3 <= 35; x3++) {
//			for (x4 = 8; x4 <= 35; x4++) {
//				if (x1 + x2 + x3 + x4 == 30) {
//					temp++;
//				}
//			}
//		}
//	}
//}
//printf("%d", temp);


/*一个球从100m高度自由落下，每次落地后反跳回原高度的一半，再落下，再反弹。
求它在第10次落地时，共经过多少米，第10次反弹多高。*/

//double i, hight1, hight2, total_hight, m;
//i = 0;
//m = 100;
//total_hight = 0;
//while (i != 10) {
//	hight1 = m / (pow(2, i));
//	hight2 = hight1 / 2;
//	total_hight = hight1 + hight2 + total_hight;
//	i++;
//}
//printf("第10次落地时共经过%.6f米\n", total_hight);
//printf("第10次反弹%.6f米", hight2);


//double a, b, out,out1,temp;
//
//a = 2;
//b = 3;
//out = 2;
//for (int i = 1; i < 20; i++) {
//	out1 = b / a;
//	temp = a;
//	a = b;
//	b = temp+b;
//	out += out1;
//}
//printf("%.6f", out);


/*
求阶乘
求1!+2!+…+20!，其中x!=1*2*…*x，表示阶乘。*/

//long long out=0;
//long long out1=1;
//int i = 0;
//int n;
//scanf_s("%d", &n);
//while (i != n) {
//	for (int j = 1; j <= i + 1;j++) {
//		out1 *= j;
//	}
//	out += out1;
//	out1 = 1;
//	i++;
//}
//printf("%lld", out);



	//printf("**********************************************************\n");
	//for (int i = 0; i <= 330; i = i + 15) {
	//	double t = sin(2 * 3.1415926 * i / 360);
	//	printf("sin(%3d)=%+.4lf", i, t);
	//	if (t > 0) {
	//		for (int i = 0; i < 24; i++)
	//			printf(" ");
	//		printf("*");
	//		for (int i = 0; i < t * 16; i++)
	//			printf(" ");
	//		printf("*");
	//	}
	//	if (t < 0) {
	//		for (int i = 0; i < 24 + t * 16; i++)
	//			printf(" ");
	//		printf("*");
	//		for (int i = 0; i < -t * 16 - 2; i++)
	//			printf(" ");
	//		printf("*");
	//	}
	//	if (t == 0) {
	//		for (int i = 0; i < 24; i++)
	//			printf(" ");
	//		printf("*");
	//	}
	//	printf("\n");

	//}


/*编写程序求一个整数的任意次方的最后三位数。即求xa 的最后三位数，其中x，a从键盘上输入。*/

/*编写程序计算某区间内素数的个数cnt，并按所求素数的值从大到小的顺序，再计算其间隔减、加之和，
即第1个素数－第2个素数+第3个素数－第4个素数+第5个素数……的值sum。*/

//int sum = 0;
//int cnt = 0;
//int temp, i, j, a, b,sign;
//sign = 0;//0为正,1位负
//scanf_s("%d %d",&a,&b);
//for (i = a; i <= b; i++) {
//	for (j = 2; j < i; j++) {
//		if (i % j == 0)break;
//	}
//	if (j == i) {
//		cnt++;
//		if (sign == 0) {
//			sum += j;
//			sign = 1;
//		}
//		else {
//			sum -= j;
//			sign = 0;
//		}
//	}
//}
//printf("%d %d", cnt, sum);

/**/

//double a, out, temp;
//double i = 1;
//int state = 0;
//a = 1;
//out = 0;
//while (1/i >= 0.000001) {
//	a = 1 / i;
//	i = i + 2;
//	if (state == 0) {
//		out += 4 * a;
//		state = 1;
//	}
//	else
//	{
//		out -= 4 * a;
//		state = 0;
//	}
//
//}
//printf("%lf", out);


/*常见的钟表一般都有时针和分针，在任意时刻时针和分针都形成一定夹角；
现已知当前的时刻，编写程序求出该时刻时针和分针的夹角（该夹角大小≤180°）。
当前时刻值输入格式为“小时：分”，例如：11:12。*/
//每一个小时30度，每一分钟6度
//int hour, min, temp, i;
//int out;
//scanf_s("%d:%d", &hour, &min);
//if (hour > 12)hour = hour - 12;
//out = hour * 30 - min * 6+min*0.5;
//if (abs(out) > 180) {
//	out = 360 - abs(out);
//}
//else
//{
//	out = abs(out);
//}
//printf("%d.00", out);


/*设圆半径r，圆柱高h，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。
编写程序用scanf输入数据，输出计算结果；输出时要求有文字说明，取小数点后2位数字。*/

//double r, h, circle, s, s_qiu, v_qiu, v_zhu;
//double pi = 3.14;
//scanf_s("%lf %lf", &r, &h);
//circle = 2*pi * r;
//s = pi * r * r;
//s_qiu = 4 * pi * r * r;
//v_qiu = ((float)4 / 3) * pi * r * r * r;
//v_zhu = pi * r * r * h;
//printf("圆周长:%.2lf\n",circle );
//printf("圆面积:%.2lf\n", s);
//printf("圆球表面积:%.2lf\n",s_qiu );
//printf("圆球体积:%.2lf\n", v_qiu);
//printf("圆柱体积:%.2lf\n", v_zhu);


/*把200以内的所有素数存放到一维数组中并输出(动态分配内存)*/
//int n=0;
//int i, j, k;
//int* arr = (int*)malloc(200 * sizeof(int));
//if (arr == NULL) {
//	return 1;
//}
//for (i = 2; i < 200; i++) {
//	for (j = 2; j < i; j++) {
//		if (i % j == 0)break;
//	}
//	if (j == i) {
//		arr[n] = i;
//		n++;
//	}
//}
//int* temp = (int*)realloc(arr, n * sizeof(int));
//if (temp == NULL) {
//	printf("Reallocation failed\n");
//	free(arr);  // 释放旧内存，防止泄漏
//	return 1;
//}
//arr = temp;
//for (i = 0; i < n; i++) {
//	printf("%d ", arr[i]);
//}
//free(arr);

/*将一个二维数组行和列元素互换，存到另一个二维数组中并输出这两个矩阵。*/

//int a[3][4];
//int b[4][3];
//int i, j;
//for (int i = 0; i < 3; i++) {
//	for (int j = 0; j < 4; j++) {
//		scanf_s("%d", &a[i][j]);
//	}
//}
//
//for (i = 0; i < 3; i++) {
//	for (int j = 0; j < 4; j++) {
//		b[j][i] = a[i][j];
//		
//	}
//}
//
//for (i = 0; i < 4; i++) {
//	for (int j = 0; j < 3; j++) {
//		printf("%d ", b[i][j]);
//
//	}
//}


/*输入一行字符，统计其中有多少个单词，单词之间用空格分隔开*/

//char string[81];
//int i, num = 0, word = 0;
//char c;
//gets(string);
//for (i = 0; (c = string[i]) != '\0'; i++)
//if (c == ' ') word = 0;
//else if (word == 0) {
//	word = 1;
//	num++;
//}
//printf("%d", num);


/*编写一个程序，统计输入一行字符串中各个字母使用频率（大小写不区分），
将次数不为零的字母及次数按照字母ASCII码从小到大输出。*/
//int i = 0;
//int j, k;
//int cnt;
//cnt = 1;
//char temp;
//char b[40];
//char arr[40];
//gets(arr);
//
//for (i = 0; arr[i] != '\0'; i++) {
//}
//for (j = 0; j < i-1; j++) {
//	for (k = 0; k < i-1; k++) {
//		if (arr[k] > arr[k + 1]) {
//			temp = arr[k];
//			arr[k] = arr[k + 1];
//			arr[k + 1] = temp;
//		}
//	}
//}
//
//
//	for (k = 0; k <= i-1; k++) {
//		if((arr[k]>='A'&&arr[k]<='Z')||(arr[k]>='a'&&arr[k]<='z')){
//		
//			if (arr[k] == arr[k + 1]) {
//				cnt++;
//			}
//			else
//			{
//					printf("%c:%d ", arr[k], cnt);
//				
//				cnt = 1;
//			}
//		}
//	}


/*二维数组每行保存着一个整数集合，共有5个集合，每个集合均包含5个元素。
编写程序求出这五个集合的交集，以及交集中元素的个数。
所谓交集是指由所有同时出现在这5个集合中的元素组成的集合。 五个集合分别为： 
{12,35,3,9,0},{2,35,9,12,1},{35,12,0,1,9},{4,90,35,9,12},{11,9,0,12,35}*/

//int i, j,row,list;
//i = 0;
//j = 0;
//row = 0;
//int state = 1;
//int a[5][5]= { 12,35,3,9,0,
//			   2,35,9,12,1 ,
//			   35,12,0,1,9, 
//			   4,90,35,9,12,
//			   11,9,0,12,35 };
//
//for (j = 0; j < 5; j++) {
//	for (int row = 1; row < 5; row++) {
//		for (int list = 0; list < 5; list++) {
//			if (a[0][j] == a[row][list]) {
//				state++;
//				break;
//			}
//
//		}
//	}
//	if (state == 5) {
//		printf("%d ", a[0][j]);
//	}
//	state = 1;
//}


/*对一个4×4的二维数组左下三角的全部元素（包含对角线上的元素）作如下变换： 
若该数是素数则用它的后继素数替换； 若该数不是素数，则用0替换该数。 
将变换后的数组及其数组左下三角的元素中的素数个数打印出来。 
测试数据： 原数组： 3 6 4 17 8 5 9 10 9 19 7 20 4 14 21 23*/

//int a[4][4] = { 3,6,4,17,
//				8,5,9,10,
//				9,19,7,20,
//				4,14,21,23 };
//int b[10] = {3,8,5,9,19,7,4,14,21 ,23};
//
//int i, j, k,y;
//int row, list;
//int count;
//int state = 0;
//count = 0;
//y = 0;
////整理b数组
//for (int i = 0; i < 10; i++) {
//	for (j = 2; j < b[i]; j++) {
//		if (b[i] % j == 0) {
//			b[i] = 0;
//			count++;
//			break;
//		}
//	}
//	if (j == b[i]) {
//		//说明是素数，找下一个素数
//		while (1) {
//			b[i]++;
//			for (k = 2; k < b[i]; k++) {
//				if (b[i] % k == 0) {
//					break;
//				}
//			}
//			if (b[i] == k) {
//				break;
//			}
//		}
//	}
//}
//
//
////将b数组填入a数组
//for (i = 0; i < 4; i++) {
//	state = 0;
//	for (j = 0; j < 4; j++) {
//		a[i][j] = b[y];
//		y++;
//		if (state == i) {
//			break;
//		}
//		else
//		{
//			state++;
//		}
//	}
//}
//state = 0;
//for (i = 0; i < 4; i++) {
//	for (j = 0; j < 4; j++) {
//		printf("%d ", a[i][j]);
//
//	}
//	printf("\n");
//}
//printf("count=%d", count);


/*键盘输入一个长度为10的int型数组，删除数组中重复出现的数据 如，
原数组是： 1 4 2 3 4 1 2 5 5 9，输出：1 4 2 3 5 9*/
//int j;
//int a[10];
//for (int i = 0; i < 10; i++) {
//	scanf_s("%d", &a[i]);
//}
//j = 0;
//
//for (int i = 0; i < 10; i++) {
//	for (int k = 0; k < 9; k++) {
//		if (a[k] > a[k + 1]) {
//			j = a[k];
//			a[k] = a[k + 1];
//			a[k + 1] = j;
//		}
//	}
//}
//
//for (int i = 0; i < 10; i++) {
//	if (a[i] == a[i + 1])a[i] = 0;
//}
//for (int i = 0; i < 10; i++) {
//	if (a[i] != 0) {
//		printf("%d ", a[i]);
//	}
//}


/*有一篇文章，共有3行文字，每行小于80个字符。
要求分别统计出其中英文大写字母、小写字母、数字、空格以及其他字符的个数*/
	



/*输出“魔方阵”，所谓魔方阵是指这样的方阵，它的每一行，
每一列之和均相等。例如，三阶魔方阵为 816 357 492 输入行数，
要求输出1~n^2的自然数构成的魔方阵（任意满足条件的方针都可以）*/
//不会！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
	//int n;
	//int i, j, k;
	//k = 0;
	//int row, list,state;
	////int cnt_row1,cnt_row2,cnt_list1,cnt_list2;
	////cnt_list1 = 0;
	////cnt_list2 = 0;
	////cnt_row1=0;
	////cnt_row2 = 0;
	//state = 0;//1表示成功
	//scanf_s("%d", &n);
	//int* arr = (int*)malloc(n*n * sizeof(int));
	//int*temp= (int*)malloc(n * n * sizeof(int));
	//int *cnt_row= (int*)malloc(n * sizeof(int));
	//int* cnt_list = (int*)malloc(n * sizeof(int));
	//if (temp == NULL) {
	//	return 1;
	//}
	//if (arr == NULL) {
	//	return 1;
	//}
	//if (cnt_list == NULL) {
	//	return 1;
	//}
	//if (cnt_row == NULL) {
	//	return 1;
	//}
	//for (int i = 1; i <= n*n; i++) {
	//	arr[i] = i;
	//	temp[i] = i;
	//}
	//list = 0;
	////先把n*n的矩阵展示出来，判断行列是否相等，若不等重排
	//while(state!=1){

	//	for (row = 0; row < n; row++) {//用来得到每行总和
	//		for (list = 0; list < n; list++) {
	//			//先判断每行是否和一样
	//			cnt_row[row] += arr[row * n + list];
	//		}
	//	}

	//	for (list = 0; list < n; list++) {//用来得到每列总和
	//		for (row = 0; row < n; row++) {
	//			//先判断每行是否和一样
	//			cnt_list[list] += arr[list + row * n];
	//		}
	//	}

	//	for (i = 0; i < n - 1; i++) {
	//		if (cnt_list[i] != cnt_list[i + 1] || cnt_row[i] != cnt_row[i + 1]) {
	//			break;
	//		}
	//		else
	//		{
	//			if (i == n - 2) {//全部成功
	//				state = 1;
	//			}
	//		}
	//	}
	//	//若state不等于1，重新排序
	//	
	//	/*
	//	用树枝排列结果,选择第一位直到最后一位
	//	*/

	//	if (state == 0) {
	//		for (i = n*n; i>0; i--) {
	//			
	//			for (j =0;j<i; j++) {
	//				arr[j] = temp[i];
	//			}
	//		}
	//	}
	//
	//}

//int a[15][15], i, j, k, p, n;
//p = 1;
//while (p == 1) {
//
//	scanf_s("%d", &n);
//	if ((n != 0) && (n <= 15) && (n % 2 != 0))
//		p = 0;
//}
//for (i = 1; i <= n; i++)
//for (j = 1; j <= n; j++)
//a[i][j] = 0;
//j = n / 2 + 1;
//a[1][j] = 1;
//for (k = 2; k <= n * n; k++) {
//	i = i - 1;
//	j = j + 1;
//	if ((i < 1) && (j > n)) {
//		i = i + 2;
//		j = j - 1;
//	}
//	else {
//		if (i < 1) i = n;
//		if (j > n) j = 1;
//	}
//	if (a[i][j] == 0)
//		a[i][j] = k;
//	else {
//		i = i + 2;
//		j = j - 1;
//		a[i][j] = k;
//	}
//}
//for (i = 1; i <= n; i++) {
//	for (j = 1; j <= n; j++)
//		printf("%d ", a[i][j]);
//	printf("\n");
//}



	return 0;
}
	

