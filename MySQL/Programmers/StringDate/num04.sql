-- 두 테이블 모두 존재해야하므로 inner join
SELECT animal_ins.animal_id, animal_ins.name
from animal_ins
inner join animal_outs
on animal_ins.animal_id=animal_outs.animal_id
order by (animal_outs.datetime-animal_ins.datetime) desc
limit 2
