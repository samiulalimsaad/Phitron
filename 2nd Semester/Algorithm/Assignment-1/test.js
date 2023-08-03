let m = 1;
let n = 100;
for (let i = 0; m <= n; i++) {
    console.log({ i, m });
    m += i;
}

// const res = Math.floor((1 + Math.sqrt(1 + 8 * n)) / 2);

const res = (n * (n + 1)) / 2;
console.log(res);
