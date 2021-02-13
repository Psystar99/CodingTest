--  IF(SEX_UPON_INTAKE REGEXP 'Neutered|Spayed', 'O' , 'X') AS 중성화 더 깔끔하게 표현 가능!
SELECT animal_id, name, 
if((sex_upon_intake like '%Neutered%')
   or (sex_upon_intake like '%Spayed%'),'O','X') as 중성화
from animal_ins
order by animal_id
