/**
 * The knows API is defined in the parent class Relation.
 * isBadVersion(version: number): boolean {
 *     ...
 * };
 */

var solution = function(isBadVersion: any) {

    return function(n: number): number {
        let low :number = 1, high:number = n, half: number =  low + Math.floor((high-low) / 2);
        while (low < high){
            if (isBadVersion(half)){
                high = half - 1;
            } else {
                low = half + 1;
            }
            half = low + Math.floor((high-low) / 2);
        }


        return isBadVersion(low) ? low : ++low;
    };
};