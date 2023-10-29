use phitron;

SELECT
    department_name,
    avg(employees.salary)
from
    departments,
    employees
where
    departments.department_id = employees.department_id
GROUP BY
    department_name