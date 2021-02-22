# 처음에는 order by하고 limit 1,1했는데 두번째가 없는 경우 null처리를 못함
select MAX(Salary) as SecondhighestSalary
from Employee
where Salary < (SELECT MAX(Salary) from Employee)
