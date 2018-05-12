const checkPalindrome = (n: number): boolean => {
    let nstring: string[] = n.toString().split('');
    return nstring.join() === nstring.reverse().join();
}

let largest = 0;

for (let i = 100; i < 1000; i++) {
    for (let j = i; j < 1000; j++) {
        let result = i * j;
        if (checkPalindrome(result)) {
            if (result > largest) {
                largest = result;
            }
        }
    }
}

console.log(largest);