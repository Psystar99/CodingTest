# 처음에는 order by하고 limit 1,1했는데 두번째가 없는 경우 null처리를 못함
select MAX(Salary) as SecondhighestSalary
from Employee
where Salary < (SELECT MAX(Salary) from Employee)

#처음에 하려던 방법의 정답 if null안에 통째로 넣어야 
SELECT 
    IFNULL(
        (SELECT Distinct Salary
        FROM Employee
        ORDER BY Salary Desc
        LIMIT 1 OFFSET 1),
        NULL
    ) as SecondHighestSalary
