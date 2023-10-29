USE phitron;

select
    max(max_salary)
FROM
    jobs
where
    max_salary < (
        select
            max(max_salary)
        from
            jobs
    )