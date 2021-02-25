# 중복제거 & 특정 문자열로 나누기 &자기 자신 제외
select distinct(a.Email)
from Person a
inner join person b
on substring_index(a.Email,'@',1) =substring_index(b.Email,'@',1)
where not a.id=b.id
