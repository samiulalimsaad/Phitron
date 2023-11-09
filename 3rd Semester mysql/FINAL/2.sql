USE final;

INSERT INTO
    Borrowing (StudentID, ISBN, BorrowDate, DueDate, ReturnDate)
SELECT
    4,
    ISBN,
    '2023-11-07',
    '2023-11-17',
FROM
    (
        SELECT
            ISBN
        FROM
            Book
        ORDER BY
            AvailableCopies DESC
        LIMIT
            1
    ) AS MostAvailableBook;