# group by랑 count 하는거랑 다르다!
select class
from courses 
group by class
having count(distinct student)>4

