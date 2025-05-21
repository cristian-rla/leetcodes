function mergeAlternately(word1: string, word2: string): string {
    let i : number = 0;
    let wordF : string = "";
    while (word1.length > i && word2.length > i){
        wordF += word1[i] +word2[i];
        i++;
    }
    if (word1.length == word2.length)
        return wordF;
    if (word1.length > word2.length)
        return wordF + word1.slice(i, word1.length);
    return wordF + word2.slice(i, word2.length);
};