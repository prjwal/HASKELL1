collatz l = map f l
              where
              f:: Int->Int
              f x
                  | x `mod`2==0 = x `div` 2
                  |otherwise = (3*x)+1
zap::[Int]->[Int]
zap []=[]
zap [x]=[x]
zap (x:y:ys)
            |x==y = zap (y:ys)
            |otherwise = x:zap(y:ys)
breakUp :: [(Int, Int)] -> [Int]
breakUp []=[]
breakUp ((x,y) : zs) = x:y:breakUp zs
quicksort::[Int]->[Int]
quicksort []=[]
quicksort (x:y:xs)=
          let  smallsort=quicksort[a|a<-xs,a<=x]
               largesort = quicksort[a|a<-xs,a>x]
          in (smallsort++[x]++largesort)
findsec :: [Int]->Int

mymax::[Int]->[Int]
mymax []=[]
mymax (x:xs)
            | x/=minimum(x:xs) = x:mymax xs
            | otherwise = mymax xs
remRunnerUp :: [Int] -> [Int]
remRunnerUp []=[]
remRunnerUp[x]=[x]
remRunnerUp(x:ys)
                   | x/=l = x:remRunnerUp ys
                   |otherwise = remRunnerUp ys
                      where l=minimum (mymax (x:ys))
