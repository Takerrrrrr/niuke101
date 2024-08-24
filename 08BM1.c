#include <stdio.h>
#include <string.h>

// 字符串反转
// 先整体翻转，再考虑根据空格来挨个单词翻转

void reverse(char* s,int head ,int tail){
    char temp;
    while(head < tail){
        temp = s[head];
        s[head] = s[tail];
        s[tail] = temp;

        head++;
        tail--;
    }
}


char* trans(char* s, int n ) {

    int i = 0;
    int j = 0;
    while( i < n ){
        j = i;

        while( j < n && s[j] != ' ') {
            if( s[j]>='a' && s[j]<='z')
                s[j] -= 32;
            else if(s[j]>='A' && s[j]<='Z')
                s[j] += 32;
            j++;
        }
        reverse(s,i,j-1);
        i = j + 1;
    }
    return s;
}


int main() {

    char s[] = "hello world";
//    int a = strlen(s);
//    printf("%d\n",a);

    reverse(s,0,strlen(s)-1);
    printf("%s\n",s);

    trans(s,strlen(s));
    printf("%s\n",s);
    return 0;
}
