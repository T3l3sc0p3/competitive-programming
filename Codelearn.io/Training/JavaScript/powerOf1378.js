function powerOf1378(n){
    const mod = 1000;
    let res = 1, base = 8;
    while (n>0){
        if (n&1) res = (res*base) % mod;
        base = (base**2) % mod;
        n >>= 1;
    }
    return res % 10;
}