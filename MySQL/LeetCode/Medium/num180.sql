# distinct 조건 잘 보자. 3중 조인. 조인은 합해서 싹다 나타내는 거! 차근차근해내자
select distinct(a.num) as Consecutivenums
from logs a
inner join 
(select c.id, c.num from logs b 
 inner join logs c 
on b.num=c.num 
where b.id+1=c.id) as d on a.num=d.num
where a.id+2=d.id
