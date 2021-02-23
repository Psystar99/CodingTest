# 다중 업데이트
update salary
set sex = CASE sex when 'm' then 'f' else 'm' end
