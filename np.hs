min1 ::(Integral a)=> [a]->[a]
min1 xs = [x|x<-xs , x/=s]
           where s= minimum xs
min2 :: (Integral a)=>[a]->a
min2 xs = head s
        where s=min1 xs
remRunnerUp :: [Int] -> [Int]
remRunnerUp []=[]
remRunnerUp(x:ys)
                 | x/= l = x:remRunnerUp ys
                 | otherwise =  remRunnerUp ys
                  where l = min2 ys
