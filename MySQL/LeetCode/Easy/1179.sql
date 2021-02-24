#sum을 지우면 id가 여러행에 중복돼서 나오는 경우 맨 처음만 
#group by를 지우면 id가 1인 값만 나타내고 id 1,2,3일때의 값을 다 합쳐서 보여줌
Select id, 
SUM(IF(month ="Jan", revenue, NULL)) as "Jan_Revenue",
 SUM(CASE
        WHEN month= 'Feb' THEN revenue
    END) "Feb_Revenue",
SUM(IF(month ="Mar", revenue, NULL)) as "Mar_Revenue",
SUM(IF(month ="Apr", revenue, NULL)) as "Apr_Revenue",
SUM(IF(month ="May", revenue, NULL)) as "May_Revenue",
SUM(IF(month ="Jun", revenue, NULL)) as "Jun_Revenue",
SUM(IF(month ="Jul", revenue, NULL)) as "JUL_Revenue",
SUM(IF(month ="Aug", revenue, NULL)) as "Aug_Revenue",
SUM(IF(month ="Sep", revenue, NULL)) as "Sep_Revenue",
SUM(IF(month ="Oct", revenue, NULL)) as "Oct_Revenue",
SUM(IF(month ="Nov", revenue, NULL)) as "Nov_Revenue",
SUM(IF(month ="Dec", revenue, NULL)) as "Dec_Revenue"
From Department
group by id
