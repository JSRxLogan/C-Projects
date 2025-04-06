// factorial of any number 
#include <iostream>
#include <string>

using namespace std;

string fn(string ans, int mul)
{
    string a = "";
    long int n = ans.length();
    int carry = 0;

    for (int j = n - 1; j >= 0; j--)
    {
        char ch = ans[j];
        int num = ch - 48;

        int sum = num * mul + carry;

        if (sum < 10)
        {
            string s = to_string(sum);
            a = s + a;
            carry = 0;
        }

        else if (sum > 9 && j == 0)
        {
            string s = to_string(sum);
            a = s + a;
            carry = 0;
        }

        else
        {
            string s = to_string(sum);
            a = s[1] + a;
            ch = s[0];
            num = ch - 48;
            carry = num;
        }
    }

    return a;
}

void lengthfn(string *arr1, int j, string *arr2, int c)
{
    if ((*(arr1 + j)).length() != (*(arr2 + c)).length())
    {
        while ((*(arr1 + j)).length() != (*(arr2 + c)).length())
        {
            (*(arr1 + j)) = "0" + (*(arr1 + j));
        }
    }
}

string lengthfn2(string s1, string s2)
{
    while (s1.length() != s2.length())
    {
        s1 = "0" + s1;
    }

    return s1;
}

string add(string arr1, string arr2)
{
    string arr = "";
    int n = arr2.length();
    int carry = 0;
    for (int j = n - 1; j >= 0; j--)
    {
        char ch1 = arr1[j];
        char ch2 = arr2[j];

        int num1 = ch1 - 48;
        int num2 = ch2 - 48;
        int sum = num1 + num2 + carry;

        if (sum < 10)
        {
            string s = to_string(sum);
            arr = s + arr;
            carry = 0;
        }

        else if (sum > 9 && j == 0)
        {
            string s = to_string(sum);
            arr = s + arr;
            carry = 0;
        }

        else
        {
            string s = to_string(sum);
            arr = s[1] + arr;
            char ch = s[0];
            int num = ch - 48;
            carry = num;
        }
    }

    return arr;
}

int main()
{
    int k, n = 0;

    std::cout << "Enter the number whose factorial is to calculate\n";
    cin >> k;

    string ans = "1";

    int c = k;

    while (c != 0)
    {
        c /= 10;
        n++;
    }

    string arr[n];

    for (int i = 2; i <= k; i++)
    {
        int copy = i;
        c = 0;

        while (copy != 0)
        {
            int r = copy % 10;
            copy = copy / 10;
            string t = "";
            for (int j = c - 1; j >= 0; j--)
            {
                t = t + "0";
            }
            string g = fn(ans, r);
            arr[c] = g + t;
            c++;
        }

        if (c > 1)
        {
            for (int j = c - 1; j >= 0; j--)
            {
                lengthfn(arr, j, arr, (c - 1));
            }
        }

        string m = "";
        for (int j = (arr[c - 1].length() - 1); j >= 0; j--)
        {
            m = m + "0";
        }

        for (int j = c - 1; j >= 0; j--)
        {
            string z = arr[j];
            if (z.length() < m.length())
            {
                z = lengthfn2(z, m);
            }
            m = add(m, z);
        }

        ans = m;
    }

    std::cout << "The factorial of " << k << " is " << ans << "\n";
    return 0;

    return 0;
}