function isSubsequence(s: string, t: string): boolean {
    let i : number = 0;
    for (const ch of t){
        //  if (i == s.length) return true;
        if (s[i] == ch) i++; 
    }

    return (i == s.length);
};


//   Other solution

// function isSubsequence(s: string, t: string): boolean {
//     const res = t.split("").reduce<number>((acc, ch) => ch === s[acc] ? ++acc : acc,0);
//     return res === s.length;
// };
