CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N=N-1;
  RETURN (
#중복은 무조건 distinct
   select distinct(salary) from employee
      order by salary desc
      limit N,1
  );
END
