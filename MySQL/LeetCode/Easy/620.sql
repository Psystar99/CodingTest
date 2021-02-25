# 아닌 조건 찾을 때는 !가 아니라 not/ mysql에서는 동일 조건 파악시 ==이 아니라 =
#내림 차순은 desc
select * from cinema
where not description='boring'
and id%2=1 
order by rating desc
