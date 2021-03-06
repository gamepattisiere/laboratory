


-- Quick sort in haskell


{--
  -- 一般的なもの
  qsort [] = []
  qsort (x:xs) = qsort(filter(< x)xs) ++ [x] ++ qsort(filter (>= x) xs)
--}


-- Progrqaming in haskell のもの
-- より qsort の内容を示したもの
qsort [] = []
qsort (x:xs) = qsort smaller ++ [x] ++ qsort larger
               where
                 smaller = [a | a <- xs, a <= x]
                 larger = [b | b <- xs, b > x]


