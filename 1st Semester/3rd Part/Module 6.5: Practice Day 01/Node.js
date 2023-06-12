class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class LinkedList {
    constructor(node) {
        this.head = node;
    }

    printNode() {
        let li = "";
        let temp = this.head;
        while (temp !== null) {
            li += `<li>${temp.value}</li>`;
            temp = temp.next;
        }
        document.getElementById("nodes").innerHTML = li;
    }

    addNode() {
        let temp = this.head;
        while (temp.next !== null) {
            temp = temp.next;
        }
        temp.next = new Node(Date.now());
        this.printNode();
    }

    addHead() {
        let temp = this.head;
        this.head = new Node(Date.now());
        this.head.next = temp;

        this.printNode();
    }

    addAtPosition() {
        let temp = this.head;
        for (let i = 1; i <= 3; i++) {
            temp = temp.next;
            if (temp === null)
                return (document.getElementById("nodes").innerHTML =
                    "Position not found");
        }
        let newNode = new Node(Date.now());
        newNode.next = temp.next;
        temp.next = newNode;

        this.printNode();
    }

    deleteHead() {
        if (this.head === null)
            return (document.getElementById("nodes").innerHTML =
                "Position not found");
        this.head = this.head.next;
        this.printNode();
    }

    deleteTail() {
        if (this.head.next === null)
            return (document.getElementById("nodes").innerHTML =
                "Position not found");
        let temp = this.head;
        while (temp.next.next !== null) {
            temp = temp.next;
        }
        temp.next = null;

        this.printNode();
    }

    deleteAtPosition() {
        let temp = this.head;
        for (let i = 1; i <= 3; i++) {
            temp = temp.next;
            if (temp.next === null)
                return (document.getElementById("nodes").innerHTML =
                    "Position not found");
        }
        if (temp.next !== null) temp.next = temp.next.next;
        else document.getElementById("nodes").innerHTML = "Position not found";

        this.printNode();
    }
}
