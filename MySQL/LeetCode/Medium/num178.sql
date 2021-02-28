# score 순으로 랭킹 매기기 근데 랭크에 빵구 없게
# 굳이 window 안써도 됨! SELECT Score, DENSE_RANK() OVER (ORDER BY Score DESC) AS 'Rank' FROM Scores 

select score, DENSE_RANK() OVER w AS 'Rank'
from scores
WINDOW w AS (ORDER BY score desc);
