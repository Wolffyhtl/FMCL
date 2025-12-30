#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
string username,menu_option,login_method;
int main()
{
    SetConsoleCP(936);
    SetConsoleOutputCP(936);
    cout<<"C++  Minecraft Lancher 1.0"<<"\n";
    cout<<"请输入你的名字"<<"\n";
    cin>>username;
    cout<<"RAM:4194304KB OK"<<"\n";
    cout<<"file is loading..."<<"\n";
    cout<<"等待数据库响应"<<"\n";
    cout<<"3秒后你的电脑会打开一个浏览器窗口，直接关闭即可，"<<"\n";
    Sleep(3000);
    system("start https://launchermeta.mojang.com/mc/game/version_manifest.json");
    system("cls");
    printf("菜单\n"
           "启动游戏：从你的电脑中启动Minecraft\n"
           "联机游戏：多人版Minecraft游戏(去PCL启动器去)\n"
           "下载游戏：下载游戏文件后安装(版本自行选择)\n"
           "管理游戏：删除游戏，调整游戏内存...\n"
           "启动器设置：设置启动器\n"
           "模组下载：下载MOD\n"
           "退出：退出启动器\n"
           "版本：展示版本号\n"
           "更新：获取最新版本更新\n"
           "如启动器卡住，输入reload即可\n"
           "修复：修复Java\n"
           "cls：清空屏幕上的文字\n"
           "清理：清理临时文件\n"
           "源代码：展示程序源代码\n\n");
    while(1)
    {
        cout<<"请输入：";
        cin>>menu_option;
        if(menu_option == "退出")
            return 0;
        else if(menu_option == "启动游戏")
        {
            system("cls");
            cout<<username<<",您好"<<"\n"<<"\n";
            printf("请选择登录方式\n"
                   "离线登录\n"
                   "正版登录(用国际版去)\n"
                   "服务器登录(制作中)\n");
            cin>>login_method;
            break;
        }
        else if(menu_option=="cls")
        {
            system("cls");
            continue;
        }
        else if(menu_option=="源代码")
        {
            system("start https://github.com/Wolffyhtl/FMCL");
            continue;
        }
        else if(menu_option=="版本")
        {
            cout<<"C++ Minecraft Lancher 1.0"<<"\n";
            continue;
        }
        else
        {
            cout<<"没有相匹配的命令，再试一次吧。"<<"\n";
            cout<<":没有找到命令。"<<"\n"<<"\n";
            continue;
        }
    } 
    if(login_method == "离线登录")
    {
        system("cls");
        cout<<"当前模式：离线登录"<<"\n";
        cout<<"内存分配：4096MB"<<"\n";
        cout<<"Java是否安装：是"<<"\n";
        cout<<"等待启动...";
        system("cls");
        cout<<"正在加载 当前进度：";
        cout<<"配置Java"<<"\r";
        cout<<"查找Minecraft文件"<<"\r";
        cout<<"等待游戏窗口出现"<<"\n";
    }
    return 0;
}
