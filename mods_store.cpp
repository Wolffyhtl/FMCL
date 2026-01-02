#include <iostream>
#include <cstdio>
#include <windows.h>
using namespace std;
string userName, menuOption;
void menu()
{
	printf("模组商店体验版（附赠3个固定体验包）\n"
	       "光影1：iterationT 3.2.0 40.8MB\n"
	       "光影2：SEUS_PTGI_HTT_Test_2.1_GFME_v1.18 4.16MB\n"
	       "模组1：realcamera-1.21.4-fabric-0.6.2-beta.2 128KB\n"
	       "退出：退出模组商店\n"
	       "版本：展示版本号\n"
	       "更新：获取最新版本更新\n"
	       "cls：清空屏幕上的文字\n"
	       "条款：展示程序条款\n\n"
	      );
}
int main()
{
	printf("C++ Minecraft Store(try version)\n"
	       "请输入你的名字\n");
	cin >> userName;
	cout << "模组商店正在加载";
	Sleep(5000);
	system("cls");
	cout << userName << "，欢迎使用" << endl;
	menu();
	while (1)
	{
		cout << "请输入：";
		cin >> menuOption;
		if (menuOption == "光影1")
		{
			system("start https://www.123865.com/s/jR1UTd-ydStd");
			continue;
		}
		else if (menuOption == "光影2")
		{
			system("start https://www.123865.com/s/jR1UTd-jdStd");
			continue;
		}
		else if (menuOption == "模组1")
		{
			system("start https://www.123865.com/s/jR1UTd-VdStd");
			continue;
		}
		else if (menuOption == "退出")
		{
			printf("程序已关闭\n");
			Sleep(3000);
			return 0;
		}
		else if (menuOption == "版本")
		{
			printf("Minecraft Store(try version)\n"
			       "powered by 一个小小小龙 copyright Dragon 2025-2030\n\n");
			continue;
		}
		else if (menuOption == "更新")
		{
			printf("您的版本是体验版商店，不可更新，请购买付费版模组商店！\n\n");
			continue;
		}
		else if (menuOption == "cls")
		{
			system("cls");
			continue;
		}
		else if (menuOption == "条款")
		{
			system("start https://www.123pan.com/Weboffice/?CreateAt=1766918165&Etag=9ed5bd1117de76a0ab6f8120f0c6c127&FileName=%E4%BD%BF%E7%94%A8%E6%9D%A1%E6%AC%BE.txt&S3KeyFlag=1842804423-0&Size=1639&UpdateAt=1766918165&id=29822654&notoken=1&type=w&uid=1842804423");
			continue;
		}
		else
		{
			printf("没有相匹配的命令，再试一次吧。\n"
			       ":没有找到命令。\n\n\n");
			continue;
		}
	}
	return 0;
}
