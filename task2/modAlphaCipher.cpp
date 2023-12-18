#include "modAlphaCipher.h"
using namespace std;

wstring modAlphaCipher::encode(const wstring& open_row)
{
    wstring result = open_row;
    int len, rows, loc, ch;
    len = open_row.size();
    rows = (len - 1)/newkey + 1;
    ch = 0;
    for (int colum = newkey; colum > 0; colum--) {
        for (int line = 0; line < rows; line++) {
            loc = colum+newkey*line;
            if (loc-1 < len) {
                result[ch] = open_row[loc-1];
                ch++;
            }
        }
    }
    return result;
}

wstring modAlphaCipher::decode(const wstring& cipher_row)
{
    wstring result = cipher_row;
    int len, rows, loc, ch;
    len = cipher_row.size();
    rows = (len - 1)/newkey + 1;
    ch = 0;
    for (int colum = newkey; colum > 0; colum--) {
        for (int line = 0; line < rows; line++) {
            loc = newkey*line+colum;
            if (loc-1 < len) {
                result[loc-1] = cipher_row[ch];
                ch++;
            }
        }
    }
    return result;
}
