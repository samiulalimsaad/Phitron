use phitron;

SELECT
    first_name
from
    employees
where
    salary < (
        SELECT
            max(salary)
        from
            employees
        where
            first_name = 'Steven'
            or last_name = 'Steven'
    )