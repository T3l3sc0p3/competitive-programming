function reverseString(str1){
    let rev = "";
    for (let i = 0; i < str1.length; i++){
        if (str1[i].match(/[a-z]/i)) rev += str1[i];
    }
    return rev.split("").reverse().join("");
}