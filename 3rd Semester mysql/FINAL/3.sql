USE final;

INSERT INTO
    Borrowing (StudentID, ISBN, BorrowDate, DueDate)
SELECT
    3,
    '9781234567890',
    '2023-11-07',
    '2023-11-17';

UPDATE Book
SET
    AvailableCopies = AvailableCopies -1
where
    ISBN = '9781234567890';