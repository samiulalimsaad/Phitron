SELECT
    employee_id,
    first_name,
    salary
from
    employees
where
    salary < (
        SELECT
            salary
        from
            employees
        ORDER BY
            salary desc
        LIMIT
            1
    )
ORDER BY
    salary desc
LIMIT
    1