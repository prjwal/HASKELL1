p :: Int -> Int
p  =
  let
    p' m n
      | n < 0  = 0
      | n == 0 = 0
      | otherwise = sum [p' i (n - i) | i <- [m..n]]
  in
    p' 1
listIsEqual :: [[Int]] -> Bool
listIsEqual myList = all (\x -> length x == length myList) myList
generatePs :: (Int,[Int]) -> [[Int]]
generatePs (n,[])       = [take n (repeat 1)]
generatePs (n,(x:xs))   =
      (take n (repeat 1) ++ (x:xs)) : generatePs (pack (x-1) ((n+x),xs))
  where
  pack :: Int -> (Int,[Int]) ->(Int,[Int])
  pack 1 (m,xs) = (m,xs)
  pack k (m,xs) = if k > m  then pack (k-1) (m,xs)
                  else           pack k     (m-k,k:xs)

partitions :: Int -> [[Int]]
partitions 0 =[]
partitions n | n < 1     = error "part: argument <= 0"
        | n == 1    = [[1]]
        | otherwise = reverse (generatePs (0,[n]))
numPartitions :: Int -> Int
numPartitions n = length (partitions n)
addMatrices :: [[Int]] -> [[Int]] -> [[Int]]
let addMatrices = zipWith (zipWith (+))
