SELECT DISTINCT
    *
from
    Book
where
    ISBN in (
        SELECT
            ISBN
        from
            Borrowing
        WHERE
            ReturnDate IS NULL
            AND DueDate < CURRENT_DATE() + 10
    )