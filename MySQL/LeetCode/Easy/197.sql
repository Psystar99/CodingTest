# 같은 테이블 내에서 비교/10월의 마지막날에서 11월 첫날로
select w1.id
from weather w1
inner join weather w2 on w1.recorddate=date_add(w2.recorddate,interval 1 day)
where w1.temperature>w2.temperature
