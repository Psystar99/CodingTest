#이름이 무엇으로 되어있는지! 3중조인! 어떤게 필요한지 잘 보기
#max를 하면 동일값 중에서 하나만 빼고 다 날아간다

select d.name as Department,ma.name as Employee,ma.salary
from department d inner join
    (select e.name,sal.salary,sal.departmentid
    from employee e inner join
        (select max(salary) as salary,departmentid 
        from employee
        group by departmentid) as sal
        on e.salary=sal.salary and e.departmentid=sal.departmentid) as ma
on d.id= ma.departmentid


