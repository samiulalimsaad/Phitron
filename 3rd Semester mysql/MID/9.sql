use phitron;

SELECT
    job_id as job_type,
    count(employee_id) as total
from
    employees
GROUP BY
    job_id