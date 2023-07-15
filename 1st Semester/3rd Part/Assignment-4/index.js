class Node {
    constructor(val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

function input_tree() {
    const val = parseInt(prompt("Enter node value (or -1 to indicate null):"));
    let root = null;
    if (val === -1) {
        root = null;
    } else {
        root = new Node(val);
    }

    const queue = [];
    if (root) {
        queue.push(root);
    }

    while (queue.length > 0) {
        const p = queue.shift();
        const l = parseInt(
            prompt("Enter left child value (or -1 to indicate null):")
        );
        const r = parseInt(
            prompt("Enter right child value (or -1 to indicate null):")
        );

        let left = null;
        let right = null;
        if (l !== -1) {
            left = new Node(l);
            queue.push(left);
        }
        if (r !== -1) {
            right = new Node(r);
            queue.push(right);
        }

        p.left = left;
        p.right = right;
    }

    return root;
}

function get_leaf_min_max(root, minVal, maxVal) {
    if (root === null) return;

    if (root.left === null && root.right === null) {
        minVal[0] = Math.min(minVal[0], root.val);
        maxVal[0] = Math.max(maxVal[0], root.val);
        return;
    }

    get_leaf_min_max(root.left, minVal, maxVal);
    get_leaf_min_max(root.right, minVal, maxVal);
}

function level_order(root) {
    if (root === null) {
        console.log("Tree does not exist.");
        return;
    }

    const queue = [root];
    let result = "";
    while (queue.length > 0) {
        const node = queue.shift();
        result += node.val + " ";

        if (node.left) queue.push(node.left);
        if (node.right) queue.push(node.right);
    }

    console.log(result.trim());
}

const root = input_tree();
const minVal = [Infinity];
const maxVal = [-Infinity];

console.dir(root);
level_order(root);
get_leaf_min_max(root, minVal, maxVal);

if (minVal[0] !== Infinity && maxVal[0] !== -Infinity) {
    console.log("Minimum value among leaf nodes:", minVal[0]);
    console.log("Maximum value among leaf nodes:", maxVal[0]);
} else {
    console.log("The tree doesn't have any leaf nodes.");
}
