export {};

let term1: number = 1;
let term2: number = 2;
let sum: number = 0;

while (term2 < 4000000) {
    if (term2 % 2 == 0) {
        sum += term2;
    }

    let tmp: number = term2;
    term2 += term1;
    term1 = tmp;
}

console.log(sum)