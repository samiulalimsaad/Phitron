USE final;

INSERT INTO
    Student (Name, Email, Phone, Address)
VALUES
    (
        'Alice Johnson',
        'alice@example.com',
        '123-456-7890',
        '456 Elm St, Town'
    );

INSERT INTO
    Student (Name, Email, Phone, Address)
VALUES
    (
        'Bob Smith',
        'bob@example.com',
        '987-654-3210',
        '789 Oak St, Village'
    );

INSERT INTO
    Student (Name, Email, Phone, Address)
VALUES
    (
        'Charlie Brown',
        'charlie@example.com',
        '555-123-4567',
        '321 Pine St, City'
    );

INSERT INTO
    Student (Name, Email, Phone, Address)
VALUES
    (
        'David Lee',
        'david@example.com',
        '111-222-3333',
        '555 Birch Rd, Town'
    );

INSERT INTO
    Student (Name, Email, Phone, Address)
VALUES
    (
        'Eva Martinez',
        'eva@example.com',
        '999-888-7777',
        '777 Cedar Ln, Village'
    );

commit;

INSERT INTO
    Book (
        ISBN,
        Title,
        Author,
        Genre,
        TotalCopies,
        AvailableCopies
    )
VALUES
    (
        '9780451524935',
        'To Kill a Mockingbird',
        'Harper Lee',
        'Classic',
        10,
        10
    );

INSERT INTO
    Book (
        ISBN,
        Title,
        Author,
        Genre,
        TotalCopies,
        AvailableCopies
    )
VALUES
    (
        '9781984819194',
        '1984',
        'George Orwell',
        'Science Fiction',
        8,
        8
    );

INSERT INTO
    Book (
        ISBN,
        Title,
        Author,
        Genre,
        TotalCopies,
        AvailableCopies
    )
VALUES
    (
        '9780061120084',
        'To Kill a Mockingbird',
        'Harper Lee',
        'Classic',
        5,
        5
    );

INSERT INTO
    Book (
        ISBN,
        Title,
        Author,
        Genre,
        TotalCopies,
        AvailableCopies
    )
VALUES
    (
        '9780316769174',
        'The Catcher in the Rye',
        'J.D. Salinger',
        'Coming of Age',
        7,
        7
    );

INSERT INTO
    Book (
        ISBN,
        Title,
        Author,
        Genre,
        TotalCopies,
        AvailableCopies
    )
VALUES
    (
        '9780679783276',
        'The Great Gatsby',
        'F. Scott Fitzgerald',
        'Classics',
        6,
        6
    );

commit;

-- Assuming StudentID and ISBN values exist in their respective tables
INSERT INTO
    Borrowing (StudentID, ISBN, BorrowDate, DueDate, ReturnDate)
VALUES
    (
        1,
        '9780451524935',
        '2023-11-01',
        '2023-11-15',
        '2023-11-14'
    );

INSERT INTO
    Borrowing (StudentID, ISBN, BorrowDate, DueDate, ReturnDate)
VALUES
    (
        2,
        '9781984819194',
        '2023-11-02',
        '2023-11-16',
        NULL
    );

INSERT INTO
    Borrowing (StudentID, ISBN, BorrowDate, DueDate, ReturnDate)
VALUES
    (
        3,
        '9780061120084',
        '2023-11-03',
        '2023-11-17',
        NULL
    );

INSERT INTO
    Borrowing (StudentID, ISBN, BorrowDate, DueDate, ReturnDate)
VALUES
    (
        4,
        '9780316769174',
        '2023-11-04',
        '2023-11-18',
        '2023-11-17'
    );

INSERT INTO
    Borrowing (StudentID, ISBN, BorrowDate, DueDate, ReturnDate)
VALUES
    (
        5,
        '9780679783276',
        '2023-11-05',
        '2023-11-19',
        NULL
    );