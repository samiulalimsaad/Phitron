function subsetSum(arr, n, t) {
    const dp = new Array(n + 1).fill().map(() => new Array(t + 1));

    for (let i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    for (let j = 1; j <= t; j++) {
        dp[0][j] = false;
    }

    console.table(dp);

    for (let i = 1; i <= n; i++) {
        for (let j = 1; j <= t; j++) {
            if (arr[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
        }
    }

    return dp[n][t];
}

function main() {
    const readline = require("readline");
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout,
    });

    rl.question("Enter the number of test cases: ", (t) => {
        const target = 1000;

        (function readTestCase(caseNumber) {
            if (caseNumber <= 0) {
                rl.close();
                return;
            }

            rl.question(
                `Enter N and M for test case ${caseNumber}: `,
                (input) => {
                    const [n, m] = input.split(" ").map(Number);

                    rl.question(
                        `Enter the list of marks for test case ${caseNumber}: `,
                        (marks) => {
                            const arr = marks.split(" ").map(Number);

                            if (subsetSum(arr, n, target - m)) {
                                console.log("YES");
                            } else {
                                console.log("NO");
                            }

                            readTestCase(caseNumber - 1);
                        }
                    );
                }
            );
        })(t);
    });
}

main();
