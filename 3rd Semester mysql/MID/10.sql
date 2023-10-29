use phitron;

SELECT DISTINCT
    d.department_name
from
    employees e,
    departments d
WHERE
    e.department_id != d.department_id