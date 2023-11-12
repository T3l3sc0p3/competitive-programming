string fromDecimal(int b, int n)
{
    string res = "";
    while (n > 0){
        res += to_string(n % b);
        n /= b;
    }
    reverse(res.begin(),res.end());
    return res;
}