-- 그냥 date쓰면 0시0분0초까지 나와서 안됨
SELECT animal_id, name, date_format(datetime,"%Y-%m-%d")
from animal_ins
order by animal_id
