#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char ch[] = "Hello World\n";
    char ch2[13];

    fp = fopen("test.txt", "w");
    fputs(ch, fp);
    fwrite(ch, sizeof(char),strlen(ch), fp);
    for (int i = 0; i < strlen(ch) - 1; i++) //最后一个'\0'字符不要写入
    {
        fputc(ch[i], fp);
    }
    fputs("\n", fp);
    // 格式化写入文件
    fprintf(fp, "|%05d\t|%6.3f\t|%5d\t|",14, 12.32546, 30);
    rewind(fp);




    fclose(fp);
    fp = fopen("test.txt", "r");
    fread(ch2, sizeof(char), strlen(ch), fp); //不会加'\0'
    ch2[12] = '\0';
    printf("%s", ch2);

    fgets(ch2, strlen(ch),fp); //会自动加'\0'
    printf("%s", ch2);

    char c = fgetc(fp);
    while (c != EOF)
    {
        putchar(c);
        c = fgetc(fp);
    } ;

    /*  
    fseek(fp, +1, SEEK_END); //从文件末尾开始向前移动1个字节
    fseek(fp, +1, SEEK_SET); //从文件开头开始向前移动1个字节
    fseek(fp, +1, SEEK_CUR); //从当前位置向前移动1个字节
    */
    
    fclose(fp);
}
