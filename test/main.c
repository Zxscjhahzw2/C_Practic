#include<stdio.h>
//��Ҫ������ļ�
#include<string.h>
#include<math.h>
#include <stdlib.h>
//����ʾ����ͨ����������ʧ�ܣ�����Ա�Ԥ�������ʵ�����֮��Ĳ���
int main()
{
	//ע�⣺main��������return 0,�����޷�ͨ�����⣬ ��˲�Ҫ�޸�����Ĵ���
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
	//printf("e��x�η�:%lf\n", exp(x));
	//printf("x��y�η�:%lf", pow(x, y));

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
	//ratio = 35 / 5;//��ζ��ɱ���˵ı���
	//scanf_s("%lf", &weight);
	//juice_num = weight * 1000 / ratio / 0.35;
	//printf("��%d����ˮ��ɱ����", juice_num);


	//float weight, tem1, tem2,Q;
	//scanf_s("%f%f%f", &weight, &tem1, &tem2);
	//Q = weight * (tem2 - tem1) * 4184;
	//printf("%.2f����", Q);


	//int min, day, year,m;
	//scanf_s("%d", &min);
	//year = min / 1440 / 365;
	//day = min / 60 / 24-year*365;
	//
	//m = min - day * 1440;
	//printf("%d��%d��", year,m==0?day:day+1 );

	//int a, b;
	//a=getchar();
	//b=getchar();
	//printf("��putchar������:");
	//putchar(a);
	//putchar(b);
	//printf("\n��printf������:%c%c",a,b);

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
	//int input,temp;//��������λ����
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


	////����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
	//int year, mon, day;
	//int total_day;
	//int y_mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//total_day = 0;
	//scanf_s("%d%d%d", &year, &mon, &day);
	////���жϽ���Ķ��¼��죬�����ǹ�������� 4 �ı������Ҳ��� 100 �ı����Ļ���400�ı���
	////31��  1,3,5,7,8,10,12
	////30��  4,6,9,11
	//for (int i = 1; i < mon; i++) {
	//	total_day += y_mon[i];
	//}
	//total_day += day;
	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {//�������
	//	if (mon > 2) {
	//		total_day += 1;
	//	}
	//}
	//printf("%d", total_day);


	/*���ʵ�֣�����һ���������ж����ܷ�3��5��7�����������������Ϣ֮һ��
	 ����ͬʱ��3��5��7������ ���ܱ���������(Ҫָ��������)������
	 ���ܱ�����һ����(Ҫָ����һ��)������ �ܲ��ܱ�3��5��7��һ��������*/
	 /*int input;
	 scanf_s("%d", &input);
	 if (input % 3 == 0 && input % 5 == 0 && input % 7 == 0) {
		 printf("%d��ͬʱ��3��5��7����", input);
	 }
	 else if (input % 3 == 0 && input % 5 == 0) {
		 printf("%d��ͬʱ��3��5����", input);
	 }
	 else if (input % 3 == 0 && input % 7 == 0) {
		 printf("%d��ͬʱ��3��7����", input);
	 }
	 else if (input % 5 == 0 && input % 7 == 0) {
		 printf("%d��ͬʱ��5��7����", input);
	 }
	 else if (input % 3 == 0 ) {
		 printf("%d��ͬʱ��3����", input);
	 }
	 else if (input % 5 == 0) {
		 printf("%d��ͬʱ��5����", input);
	 }
	 else if (input % 7 == 0) {
		 printf("%d��ͬʱ��7����", input);
	 }
	 else
	 {
		 printf("%d���ܱ�3��5��7��һ������", input);
	 }*/



	 /*��дһ������Ҫ���û����������������ж�ǰһ���Ƿ���������һ����*/
		 //int input1, input2;
		 //scanf_s("%d %d", &input1, &input2);
		 //if (input1 % input2 == 0)
		 //	printf("������");
		 //else
		 //{
		 //	printf("��������");
		 //}


	 /*��������˰���㣬Ӧ��˰��ļ��㹫ʽ���£�
	 ���� ˰��
	 ����<��1000Ԫ���� 0��
	 2000Ԫ>������>1000Ԫ�Ĳ��� 5��
	 3000Ԫ>������>2000Ԫ�Ĳ��� 10��
	 6000Ԫ>������>3000Ԫ�Ĳ��� 15��
	 ����>6000Ԫ�Ĳ��� 20��
	 ����ĳ�˵����룬�����Ӧ��˰�ʵ�ʵõ��ı��ꡣҪ�����ʹ��if-else �ṹ��ɡ�*/
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
	 //printf("��������˰=%.1f ʵ�ʱ���%.2f", taxe, real_wage);


 /*�Ӽ��̽���һ���ַ����������ĸ��������Ӧ��ASCII�룬
 ��������֣���ԭ����������������ʾ��Ϣ��������󣡡���*/

 //char input;
 //scanf_s("%c", &input);
 ////0xdf=30
 //if ((char)input >= 0x30 && (char)input <= 0x39) {
 //	printf("%c", input);
 //}
 //else if ((char)input < 0x30) {
 //	printf("�������!");
 //}
 //else
 //{
 //	printf("%d",input);
 //}



/*����һ���������жϸ�������������ż����Ҫ�����ʹ��if-else �ṹʵ��*/
	//int input;
	//scanf_s("%d", &input);
	//if (input % 2 == 0) {
	//	printf("ż��");
	//}
	//else
	//{
	//	printf("����");
	//}


/*�Ӽ�������һ��ѧ���ķ���, Ҫ��ʵ���������жϹ���:
�����������100����С��0�������Input error!��
�����������100��90֮�䣨����100��������90��,
�����Very Good!�� �����������80��90֮��,�����Good!��
�����������70��80֮��,�����Middle!�� �����������60��70֮��,
�����Pass!�� �������С�ڵ���60,�����No Pass!����Ҫ�����ʹ��if-else �ṹʵ�֡�*/

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


/*��дһ���򵥼��������������ʽΪ��data1 op data2������data1��data2�ǲμ��������������
opΪ�����������ȡֵֻ����+��-��*��/����Ҫ�����ʹ��switch-case���ʵ�֡�
��������ȷ��С�����2λ��������1+1�� ����Ӧ�÷��ؽ��2.00���������ĵ�ʽ���������Error.��*/

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



/*����ж�������������Ƿ����5����7�������������ǣ����Yes���������No��*/
//int input;
//scanf_s("%d", &input);
//if (input % 5 == 0 && input % 7 == 0) {
//	printf("Yes");
//}
//else
//{
//	printf("No");
//}


/*�������乫˾��������á�·��(s)ԽԶ��ÿ��*ǧ���˷�Խ�ͣ�
��׼���� S<250 û���ۿ� 250��S<500 2%�ۿ� 500��S<1000 5%�ۿ�
1000��S<2000 8%�ۿ� 2000��S<3000 10%�ۿ� 3000��S 15%�ۿ�*/
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
//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {//�������
//	printf("Yes");
//}
//else
//{
//	printf("No");
//}


/*����һ���ַ����б����Ƿ�Ϊ��д��ĸ������ǣ�ת����Сд��ĸ��������ǣ���ת����*/
//char input;
//input = getchar();
//if (input >= 'A' && input <= 'Z') {
//	printf("%c", input + 32);
//}
//else
//{
//	printf("%c", input);
//}


/*��������ʵ����������ֵ��С�����˳���������������������λС����*/
//int a, b;
//scanf_s("%d %d", &a, &b);
//printf("%.2f %.2f", (float)(a < b ? a : b), (float)(a < b ? b : a));


/*ÿ����ķ�׶���һ�����룬����978-7-111-34081-2��������"���ʱ�׼���"
��International Standard Book Number����дΪISBN��������ȫ����ͼ��ı��룬
����Ψһ����һ���顣ĿǰISBN��13λ��������Ͽ���13λ��ISBN���Է�Ϊ5������
��һ�� EAN-UCCǰ׺ ���ڶ��� �����š������� �����ߺš������� ������š������� У���롣
���еڶ��� �����Ŵӵ�4λ���ֿ�ʼ���ⲿ�ֱ����Ȿ�����ĸ����һ��������ġ�
\0��1��ʾӢ����ң�2��ʾ������ң�3��ʾ������ң�4��ʾ�ձ���5��ʾ������ң�
6��ʾ���ʣ�7��ʾ�й���½��89��ʾ������957��986��ʾ̨�壬962��988��ʾ��ۣ�
99936��ʾ������ ����һ��13λISBN�������ʽ��978-7-111-34081-2 ����֮��
���ISBN���������ĳ����������Ϣ�� ���磺������Ϊ7��������� China����
�����������Ҫ��ʶ��ĵ��������� 0 English Region 1 English Region 2 French Region 4 Japan
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


/*���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����
������жϵڶ�����ĸ�� ���磺 ��������ʱ����ʾ��"please input first character:"
������'f'����'F'����������"Friday"�� ������s���������Ҫ��һ�������� ��ʱ����Ҫ��һ������u��
��������"Sunday" ������������ĸ���κ����ڵ�Ӣ�ĵ�������ĸ����ƥ�䣬�������Ҫ��ʾ"Illegal input!\n"��*/
//Monday������һ��
//Tuesday�����ڶ���
//Wednesday����������
//Thursday�������ģ�
//Friday�������壩
//Saturday����������
//Sunday�������죩

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


/*��дһ�����򣬴Ӽ������ζ���5��ʵ������������������в��ݼ��������YES���������NO.
����ν�������в��ݼ���ָ����������������������n1��n2������n1<=n2��*/
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
//	state = 1;//1��ʾʧ��
//}
//if (state == 1)printf("No");


/*���㷴Ӧ�ڵ�ǰ�¶�T���Ƿ��ܹ��Է�����*/
//int H, T, S, G;
//scanf_s("%d %d %d", &H, &T, &S);
//if (H - T * S < 0) {
//	printf("Yes");
//}
//else
//{
//	printf("No");
//}


/*������������a,b,c����С�����������δ���a,b,c�в������*/

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


/*��д���򣬴Ӽ�������һ����Ԫһ�η���ax2+bx+c=0����������a��b��c����Ϊ��������
��˷��̵�ʵ�������������ʵ���������ʵ������ȷ��С�����2λ���ϴ�ʵ����ǰ����
���û��ʵ���������û��ʵ������Ϣ��*/

//int a, b, c;
//float x1, x2;
//scanf_s("%d %d %d", &a, &b, &c);
//if (b * b - 4 * a * c < 0) {
//	printf("��ʵ��!");
//}
//else
//{
//	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//	printf("ʵ��Ϊ%.2f,%.2f", x1,x2);
//}


/*��4��Բ����Բ�ķֱ�Ϊ(2,2)��(-2,2)��(-2,-2)��(2,-2)��Բ�뾶Ϊ1�����ĸ����ĸ߶�Ϊ10�ף�
�������޽����������������꣬��õ�Ľ����߶ȣ�����߶�Ϊ0��*/

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


/*����4��������Ҫ����С�����˳�����*/

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


/*��ҵ���ŵĽ������������ɡ�����I���ڻ����100000Ԫ�ģ���������10%��
�������100000Ԫ������200000Ԫ��100000�� I ��200000��ʱ������100000Ԫ�Ĳ��ְ�10%��ɣ�
����100000�Ĳ��֣������7.5%��200000��I ��400000ʱ������200000Ԫ�Ĳ����԰������취��ɣ���ͬ����
����200000Ԫ�Ĳ��ְ�5%��ɣ�400000��I ��600000Ԫʱ������400000Ԫ�Ĳ��ְ�3%��ɣ�600000�� I ��1000000ʱ��
����600000Ԫ�Ĳ��ְ�1.5%��ɣ�I��1000000ʱ������1000000Ԫ�Ĳ��ְ�1%��ɡ��Ӽ������뵱������I��
��Ӧ������������������λС������switch����д����*/

//double I, wage;
//scanf_s("%f", &I);
//switch ((int)I/100000)
//{
//case 0:
//	wage = I * 0.1;
//	break;
//case 1://һ����ʮ��
//	wage = (I - 100000) * 0.075 + 10000;
//	break;
//case 2://��ʮ����ʮ��
//case 3://��ʮ����ʮ��
//	wage = 10000 + 7500 + (I - 200000) * 0.05;
//	break;
//case 4://��ʮ������ʮ��
//case 5://��ʮ������ʮ��
//	wage = 10000 + 7500 + 10000 + (I - 400000) * 0.03;
//	break;
//case 6://��ʮ��һ����
//case 7://��ʮ��һ����
//case 8://��ʮ��һ����
//case 9://��ʮ��һ����
//	wage = 10000 + 7500 + 10000 + 6000 + (I - 600000) * 0.015;
//	break;
//
//default://����100��
//	wage = 10000 + 7500 + 10000 + 6000 + 6000 + (I - 1000000) * 0.01;
//	break;
//}
//printf("%.2f", wage);


/*����һ��������5λ����������Ҫ��
������Ǽ�λ�� �ֱ����ÿһλ���� �����������λ���֣�����ԭ��Ϊ321��Ӧ���123*/

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
//printf("λ��:%d\n", weishu);
//printf("ÿλ����Ϊ:");
//for (i = weishu-1; i > weishu; i--) {
//	printf("%d", out[i]);
//}
//
//for (i = 0; i < weishu; i++) {
//	fan_out += out[i] * pow(10, weishu - i - 1);
//}
//printf("\n��������Ϊ:%d", fan_out);


/*����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E����
90������Ϊ��A��,80~89Ϊ��B��,70~79Ϊ��C��,60~69Ϊ��D��, 60������Ϊ��E����*/




/*��дһ��C��������x��ֵ�����y��Ӧ��ֵ*/
//int x, y;
//scanf_s("%d", &x);
//if (x < 0)printf("y=-1");
//else if (x == 0)printf("y=0");
//else
//{
//	printf("y=1");
//}


/*�Ӽ�������һ��С��1000��������Ҫ���������ƽ����(���ƽ���������������������������)��*/
//double input;
//scanf_s("%lf", &input);
//printf("%f", sqrt((double)input));



/*��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�*/
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


/*��ӡ10~1000֮�������������������������� ������ͷ��������ͬ�����磺55��232�ȡ�*/
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


/*ͳ��200��1000֮���ܱ�7�������ĸ�����*/
	//int count=0;
	//for (int i = 200; i < 1001; i++) {
	//	if (i % 7 == 0)count++;
	//}
	//printf("%d", count);



/*��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5�� 
�����������n���зֽ���������Ӧ���ҵ�һ����С������k��
Ȼ������������ɣ� (1)����������ǡ����n����˵���ֽ��������Ĺ����Ѿ�������
��ӡ�����ɡ� (2)���n<>k����n�ܱ�k��������Ӧ��ӡ��k��ֵ������n����k����,��Ϊ�µ�������n,
�ظ�ִ�е�һ���� (3)���n���ܱ�k����������k+1��Ϊk��ֵ,�ظ�ִ�е�һ����*/

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

	
/*�ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ��������ʵ�40����ʱ��������Ϊ���ٶԣ� 
���ӵĹ���Ϊ����1,1,2,3,5,8,13,21....*/

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


/*������һ�ӱ�������֪���ж����ˣ�����ʿ���Ŷӱ���������1��5������
��ĩһ��ʿ��������Ϊ1������1��6��������ĩһ��ʿ��������Ϊ5��
����1��7��������ĩһ��ʿ��������Ϊ4������ٰ���1��11������
��ĩһ��ʿ��������Ϊ10��������������ж��ٱ���*/

//int human;
//int x1, x2, x3, x4, x5;
//for (int i = 0; i < _CRT_INT_MAX; i++) {
//	if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10) {
//		printf("%d", i);
//		break;
//	}
//}


/*���ӵ�һ��ժ�����ɸ��ң�����ֻһ�룬�ֶ��һ�����ڶ��������ֽ�ʣ�µ�һ��Ե�һ�룬˫���һ����
�Ժ�ÿ�����϶�����ǰ��ʣ�µ�һ����һ��������10������ֻʣ�����һ���ҡ��ʵ�һ��ժ�˼����ҡ�*/

//int taozi=1;
//for (int i = 0; i < 9; i++) {
//	taozi = (taozi + 1) * 2;
//}
//printf("%d", taozi);
	

/*���˼�ָ�����һ��Ȥζ��ѧ�⣺��30���ˣ����������ˡ�Ů�˺�С����
��һ�ҷ�����Է�������50���ÿ�����˸���3���
ÿ��Ů�˸���2���ÿ��С������1��������ˡ�Ů�˺�С�����м��ˣ�������еĿ��ܽ����*/

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


/*�Ӽ�������10 ��������ͳ��������������������ĸ�����������Ļ�����������*/

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


/*�Ӽ�������10��ʵ���������䵹���ĺͲ������������λС����*/

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


/*��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������
������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��š�*/
//int n, temp,state;
//int k = 0;
//state = 0;
//scanf_s("%d", &n);
//int* arr = (int*)malloc((n+1) * sizeof(int));
//
//if (arr == NULL) {
//	printf("�ڴ����ʧ��\n");
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

/*���ʵ����1+2+3+..+n֮�ͣ����������͵�һ�δ��ڻ����100ʱ��ֵ��nֵ*/

//int n;
//n = 0;
//for (int i = 1;; i++) {
//	n += i;
//	if (n > 100) {
//		printf("��һ�κʹ��ڻ����100ʱ��Ϊ%d", n);
//		printf("��һ�κʹ��ڻ����100ʱnΪ%d", i);
//		break;
//	}
//}


/*�����1+��1+2��+..+��1+2+...+n),n��ֵ�ɼ������롣Ҫ��ʹ�� for���ʵ��*/
//int n,total;
//total = 0;
//scanf_s("%d", &n);
//for (int i = 1;i<=n; i++) {
//	for (int k = 1; k <= i; k++) {
//		total += k;
//	}
//}
//printf("%d", total);


/*��дһ��sum������ͣ�����һ��������n��ͳ�Ʋ�����nֵ��������ż���ĺͣ�
����������������������Ҫ���� do-while ���ʵ�֡�*/

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


/*��д������S=1/(1*2)+1/(2*3)+1/(3*4)+..ǰ50��֮�͡�*/

//float s,temp;
//s = 0;
//temp = 0;
//for (int i = 1; i < 51; i++) {
//	temp += (1.0 / (i * (i + 1)));
//}
//printf("%.6f", temp);


/*��100~200���ȫ������*/
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


/*���չ������ɲ������������ǰ20���ֵ����һ��͵ڶ���Ϊ2��3���Ժ�ÿ�����������Ϊǰ����֮�ͣ�
ż�������Ϊǰ����֮�ǰ��������*/

//int a, b,state,temp;//a��ǰһ�b�Ǻ�һ��
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


/*��д�����ȡ���������ҳ����ǵ��������Ȼ��������������ֵĴ�����������-1������*/
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


/*Ī��ɭ��*/
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


/*���������������������3λ������������������
�����ĸ�λ������ʮλ����֮�ͱ�10����������ǡ���Ǹ����İ�λ���֡�
���磬293���������ң�3+9����10����������2�����293������������3λ������*/
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



/*�ҳ����������������Ե�6λ����������һ����ȫƽ��������ȫƽ������ָ������ĳ��������ƽ������
����ͬʱҲ�ǻ���������������ָ�����������ķ������������磬698896��836��ƽ������698896�ǻ�������
���698896����������������6λ���������������������������6λ������*/

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


/*����x1+x2+x3+x4=30�ж�������x1>=2,x2>=0,x3>=-5,x4>=8�������⣿*/
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


/*һ�����100m�߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룬�����£��ٷ�����
�����ڵ�10�����ʱ�������������ף���10�η�����ߡ�*/

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
//printf("��10�����ʱ������%.6f��\n", total_hight);
//printf("��10�η���%.6f��", hight2);


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
��׳�
��1!+2!+��+20!������x!=1*2*��*x����ʾ�׳ˡ�*/

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


/*��д������һ������������η��������λ��������xa �������λ��������x��a�Ӽ��������롣*/

/*��д�������ĳ�����������ĸ���cnt����������������ֵ�Ӵ�С��˳���ټ�������������֮�ͣ�
����1����������2������+��3����������4������+��5������������ֵsum��*/

//int sum = 0;
//int cnt = 0;
//int temp, i, j, a, b,sign;
//sign = 0;//0Ϊ��,1λ��
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


/*�������ӱ�һ�㶼��ʱ��ͷ��룬������ʱ��ʱ��ͷ��붼�γ�һ���нǣ�
����֪��ǰ��ʱ�̣���д���������ʱ��ʱ��ͷ���ļнǣ��üнǴ�С��180�㣩��
��ǰʱ��ֵ�����ʽΪ��Сʱ���֡������磺11:12��*/
//ÿһ��Сʱ30�ȣ�ÿһ����6��
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


/*��Բ�뾶r��Բ����h����Բ�ܳ���Բ�����Բ��������Բ�������Բ�������
��д������scanf�������ݣ���������������ʱҪ��������˵����ȡС�����2λ���֡�*/

//double r, h, circle, s, s_qiu, v_qiu, v_zhu;
//double pi = 3.14;
//scanf_s("%lf %lf", &r, &h);
//circle = 2*pi * r;
//s = pi * r * r;
//s_qiu = 4 * pi * r * r;
//v_qiu = ((float)4 / 3) * pi * r * r * r;
//v_zhu = pi * r * r * h;
//printf("Բ�ܳ�:%.2lf\n",circle );
//printf("Բ���:%.2lf\n", s);
//printf("Բ������:%.2lf\n",s_qiu );
//printf("Բ�����:%.2lf\n", v_qiu);
//printf("Բ�����:%.2lf\n", v_zhu);


/*��200���ڵ�����������ŵ�һά�����в����(��̬�����ڴ�)*/
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
//	free(arr);  // �ͷž��ڴ棬��ֹй©
//	return 1;
//}
//arr = temp;
//for (i = 0; i < n; i++) {
//	printf("%d ", arr[i]);
//}
//free(arr);

/*��һ����ά�����к���Ԫ�ػ������浽��һ����ά�����в��������������*/

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


/*����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ���*/

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


/*��дһ������ͳ������һ���ַ����и�����ĸʹ��Ƶ�ʣ���Сд�����֣���
��������Ϊ�����ĸ������������ĸASCII���С���������*/
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


/*��ά����ÿ�б�����һ���������ϣ�����5�����ϣ�ÿ�����Ͼ�����5��Ԫ�ء�
��д���������������ϵĽ������Լ�������Ԫ�صĸ�����
��ν������ָ������ͬʱ��������5�������е�Ԫ����ɵļ��ϡ� ������Ϸֱ�Ϊ�� 
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


/*��һ��4��4�Ķ�ά�����������ǵ�ȫ��Ԫ�أ������Խ����ϵ�Ԫ�أ������±任�� 
�������������������ĺ�������滻�� ��������������������0�滻������ 
���任������鼰�������������ǵ�Ԫ���е�����������ӡ������ 
�������ݣ� ԭ���飺 3 6 4 17 8 5 9 10 9 19 7 20 4 14 21 23*/

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
////����b����
//for (int i = 0; i < 10; i++) {
//	for (j = 2; j < b[i]; j++) {
//		if (b[i] % j == 0) {
//			b[i] = 0;
//			count++;
//			break;
//		}
//	}
//	if (j == b[i]) {
//		//˵��������������һ������
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
////��b��������a����
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


/*��������һ������Ϊ10��int�����飬ɾ���������ظ����ֵ����� �磬
ԭ�����ǣ� 1 4 2 3 4 1 2 5 5 9�������1 4 2 3 5 9*/
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


/*��һƪ���£�����3�����֣�ÿ��С��80���ַ���
Ҫ��ֱ�ͳ�Ƴ�����Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ������ַ��ĸ���*/
	



/*�����ħ���󡱣���νħ������ָ�����ķ�������ÿһ�У�
ÿһ��֮�;���ȡ����磬����ħ����Ϊ 816 357 492 ����������
Ҫ�����1~n^2����Ȼ�����ɵ�ħ�����������������ķ��붼���ԣ�*/
//���ᣡ����������������������������������������������������������������������
	//int n;
	//int i, j, k;
	//k = 0;
	//int row, list,state;
	////int cnt_row1,cnt_row2,cnt_list1,cnt_list2;
	////cnt_list1 = 0;
	////cnt_list2 = 0;
	////cnt_row1=0;
	////cnt_row2 = 0;
	//state = 0;//1��ʾ�ɹ�
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
	////�Ȱ�n*n�ľ���չʾ�������ж������Ƿ���ȣ�����������
	//while(state!=1){

	//	for (row = 0; row < n; row++) {//�����õ�ÿ���ܺ�
	//		for (list = 0; list < n; list++) {
	//			//���ж�ÿ���Ƿ��һ��
	//			cnt_row[row] += arr[row * n + list];
	//		}
	//	}

	//	for (list = 0; list < n; list++) {//�����õ�ÿ���ܺ�
	//		for (row = 0; row < n; row++) {
	//			//���ж�ÿ���Ƿ��һ��
	//			cnt_list[list] += arr[list + row * n];
	//		}
	//	}

	//	for (i = 0; i < n - 1; i++) {
	//		if (cnt_list[i] != cnt_list[i + 1] || cnt_row[i] != cnt_row[i + 1]) {
	//			break;
	//		}
	//		else
	//		{
	//			if (i == n - 2) {//ȫ���ɹ�
	//				state = 1;
	//			}
	//		}
	//	}
	//	//��state������1����������
	//	
	//	/*
	//	����֦���н��,ѡ���һλֱ�����һλ
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
	

