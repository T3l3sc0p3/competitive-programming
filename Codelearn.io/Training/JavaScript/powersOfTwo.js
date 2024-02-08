function powersOfTwo(k,arr){
    for (let i = 0; i <= k; i++){
        let tmp = 2**i;
        if (!arr.includes(tmp)) return tmp;
    }
}