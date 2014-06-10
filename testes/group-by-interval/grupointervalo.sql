select t.rango as [score rango], count(*) as [number of occurences]
from (
      select user_id,
         case when score >= 0 and score< 10 then '0-9'
          when score >= 10 and score< 20 then '10-19'
         else '20-99' end as rango
     from scores) t
group by t.rango
