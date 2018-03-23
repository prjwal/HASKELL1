addMatrices :: [[Int]] -> [[Int]] -> [[Int]]
addMatrices = zipWith (zipWith (+))
add :: (Num a) => [[a]] -> [[a]] -> [[a]]
add [] [] = []
add (x:xs) (y:ys) = zipWith (+) x y : add xs ys
