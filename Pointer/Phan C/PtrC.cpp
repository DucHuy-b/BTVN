#include <iostream>
using namespace std;

int strLen(char a[])
{
    int ddai = 0;

    while (a[ddai] != '\0')
    {
        ddai++;
    }

    return ddai;
}

// a
void reverse(char a[])
{
    int ddai = strLen(a);
    char *bd = a;
    char *kt = a + ddai - 1;
    while (bd<kt)
    {
        char temp = *bd;
        *bd = *kt;
        *kt = temp;
        bd++;
        kt--;
    }
}


//b
void delete_char(char a[], char c)
{
    char* bandau = a;
    char* ketqua = a;
    while(*bandau != '\0')
    {
        if(*bandau != c)
        {
            *ketqua = *bandau;
            ketqua++;
        }
        bandau++;
    }
    *ketqua = '\0';
}

//c
void pad_right(char a[], int n)
{
    int ddai = strLen(a);
    if (ddai >= n)
        return;
    for(int i=ddai;i<n;i++)
    {
        a[i] = ' ';
    }
    a[n] = '\0';
}

//d
void pad_left(char a[], int n)
{
    int ddai = strLen(a);
    if (ddai >= n)
        return;
    int dchuyen = n - ddai;
    for(int i=ddai;i>= 0;i--)
    {
        a[i+dchuyen] = a[i];
    }
    for(int i=0;i<dchuyen;i++) {
        a[i] = ' ';
    }
}

//e
void truncate(char a[], int n)
{
    int ddai = strLen(a);
    if (ddai <= n)
        return;
    a[n] = '\0';
}

//f
bool is_palindrome(char a[])
{
    int ddai = strLen(a);
    char *bd = a;
    char *kt = a+ddai-1;
    while (bd < kt)
    {
        if (*bd != *kt)
        {
            return false;
        }
        bd++;
        kt--;
    }
    return true;
}

//g
void trim_left(char a[]) {
    int i = 0;
    while (a[i] == ' ')
    {
        i++;
    }
    char *bandau = a + i;
    char *ketqua = a;
    while (*bandau != '\0')
    {
        *bandau = *ketqua;
        ketqua++;
        bandau++;
    }
    *ketqua = '\0';
}

//h
void trim_right(char a[])
{
    int ddai = strLen(a);
    while (ddai>0 && a[ddai-1] == ' ')
    {
        ddai--;
    }
    a[ddai] = '\0';
}

int main()
{
    char vd1[] = "testing";
    reverse(vd1);
    cout<<"Dao nguoc: "<<vd1<<endl;

    char vd2[] = "testing";
    delete_char(vd2, 't');
    cout<<"Xoa 't': "<<vd2<<endl;

    char vd3[] = "testing";
    pad_right(vd3,9);
    cout<<"Don phai: '" <<vd3<<"'"<<endl;

    char vd4[] = "testing";
    pad_left(vd4,10);
    cout<<"Don trai: '"<<vd4<<"'"<<endl;

    char vd5[] = "testing";
    truncate(vd5,5);
    cout<<"Cat: '"<<vd5<<"'"<<endl;

    char pal[]= "quackquack";
    cout<<"Co doi guong hay khong: "<<is_palindrome(pal)<<endl;

    char vd6[] = "testing";
    trim_left(vd6);
    cout<<"Loc trai: '"<<vd6<<"'"<<endl;

    char vd7[] = "test   ";
    trim_right(vd7);
    std::cout << "Loc phai: '"<<vd7<<"'"<<endl;

}
