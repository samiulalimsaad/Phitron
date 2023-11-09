SELECT
    s.Name,
    count(b.StudentID) as total
FROM
    Borrowing as b,
    Student as s
WHERE
    s.StudentID = b.StudentID
GROUP BY
    s.StudentID
ORDER BY
    total DESC
LIMIT
    1