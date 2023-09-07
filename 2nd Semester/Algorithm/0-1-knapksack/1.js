function knapsack(items, capacity) {
    const n = items.length;
    const dp = Array.from({ length: n + 1 }, () => Array(capacity + 1).fill(0));

    for (let i = 1; i <= n; i++) {
        const currentItem = items[i - 1];
        for (let w = 1; w <= capacity; w++) {
            console.clear();
            console.table(items);
            console.table(dp);
            if (currentItem.weight <= w) {
                // If we can include the current item, choose the maximum value
                dp[i][w] = Math.max(
                    currentItem.value + dp[i - 1][w - currentItem.weight],
                    dp[i - 1][w]
                );
            } else {
                // If the current item is too heavy, exclude it
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // The maximum value is stored in dp[n][capacity]
    const maxValue = dp[n][capacity];

    // Backtrack to find the selected items
    const selectedItems = [];
    let i = n;
    let w = capacity;
    while (i > 0 && w > 0) {
        if (dp[i][w] !== dp[i - 1][w]) {
            selectedItems.push(items[i - 1]);
            w -= items[i - 1].weight;
        }
        console.table(selectedItems);
        i--;
    }

    return { maxValue, selectedItems };
}

// Example usage:
const items = [
    { name: "Item 1", weight: 2, value: 10 },
    { name: "Item 2", weight: 3, value: 5 },
    { name: "Item 3", weight: 5, value: 15 },
    { name: "Item 4", weight: 7, value: 7 },
    { name: "Item 5", weight: 1, value: 6 },
];

const capacity = 10;

const result = knapsack(items, capacity);
console.log("Maximum value:", result.maxValue);
console.log("Selected items:", result.selectedItems);
