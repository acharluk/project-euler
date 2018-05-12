export {};

let number: number = 600851475143;
let factor: number = 0;

while (number > factor) {
    factor = ((n: number) => {
        for (let i = 2; Math.sqrt(n); i++) {
            if (n % i == 0) {
                return i;
            }
        }
        return n;
    })(number);

    number /= factor;
}

console.log(factor)