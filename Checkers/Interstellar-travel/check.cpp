#include "testlib.h"

using namespace std;

int main(int argc, char * argv[])
{
    setName("compare sequences of tokens");
    registerTestlibCmd(argc, argv);

    int n = 0;
    string j, p;

    while (!ans.seekEof() && !ouf.seekEof()) 
    {
        n++;

        ans.readWordTo(j);
        ouf.readWordTo(p);
        
        if (j != p)
            quitf(_wa, "第 %d 組答案錯誤 - 程式輸出了: '%s'", n, compress(p).c_str());
    }

    if (ans.seekEof() && ouf.seekEof())
    {
        if (n == 1)
            quitf(_ok, "\"%s\"", compress(j).c_str());
        else
            quitf(_ok, "共 %d 組答案", n);
    }
    else
    {
        if (ans.seekEof())
            quitf(_wa, "程式輸出了多餘文字");
        else
            quitf(_wa, "程式未將答案完整輸出");
    }
}
