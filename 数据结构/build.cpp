#include <iostream>
#include <string>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc > 1){ 
        std::cout << "编译中..."  << std::endl;
        std::string cmd;
        std::string cmd_subs[] = {"g++ ",argv[1],".cpp -fexec-charset=gbk -o ",argv[1],".exe",""};
        int i = 0;
        std::string s;
        do {
            s = cmd_subs[i];
            cmd = cmd + s;
            i++;
        }while (!s.empty());
        std::cout << "编译命令: " << cmd << std::endl;
        system(cmd.c_str());
        std::cout << "编译完成！" << std::endl;
    }
    return 0;
}
